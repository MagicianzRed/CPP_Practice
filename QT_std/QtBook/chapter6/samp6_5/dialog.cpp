#include "dialog.h"
#include "ui_dialog.h"
#include <QSettings>
#include <QByteArray>
#include <QCryptographicHash>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    /*界面组件初始化*/
    ui->label->setGeometry(0,0, this->width(), this->height());
    ui->lineEditPassWrd->setEchoMode(QLineEdit::Password);  // 设置为密码输入模式

    /*界面初始化*/
    this->setAttribute(Qt::WA_DeleteOnClose);       // 为关闭时删除
    this->setWindowFlags(Qt::SplashScreen);         // 设置为无边框
    this->setWindowFlags(Qt::FramelessWindowHint);  // 无边框，但在任务栏显示标题

    ReadSettings();


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::ReadSettings()
{
    // 读取存储的用户名和密码，密码是经过加密的
    QString organization = "WWB-QT";    // 用户注册表
    QString appName = "samp6_5";
    QSettings settings(organization, appName);
    bool saved = settings.value("save",true).toBool(); // 读取 saved
    m_user = settings.value("UserName", "Wudi").toString(); // 读取 用户名
    QString defaultPasswrd = Encrtpt("as145768");           // 默认密码
    m_pswd = settings.value("PSWD", defaultPasswrd).toString(); // 读取密码
    if (saved)
    {
        ui->lineEditName->setText(m_user);
    }
}

void Dialog::WriteSettings()
{
    // 保存用户名密码等设置
    QSettings settings("WWB-Qt", "samp6_5");   // 注册表键组
    settings.setValue("Username", m_user);     // 用户名
    settings.setValue("PSWD", m_pswd);         // 密码，经过加密的
    settings.setValue("saved", 1);             //
}

QString Dialog::Encrtpt(const QString &str)
{
    QByteArray btArray;
    btArray.append(str.toUtf8());
    QCryptographicHash hash(QCryptographicHash::Md5);   // Md5 加密算法
    hash.addData(btArray);
    QByteArray resultArray = hash.result();             // 返回最终的散列值
    QString md5 = resultArray.toHex();                  //  转换为16进制字符
    return md5;
}

void Dialog::mousePressEvent(QMouseEvent *event)
{
    // 当鼠标被按下
    if (event->button() == Qt::LeftButton)
    {
        m_moving = true;
        m_lastPos = event->globalPos() - pos(); // 记录下鼠标相对于窗口的位置
    }
    return QDialog::mousePressEvent(event);
}

void Dialog::mouseMoveEvent(QMouseEvent *event)
{
    // 按下鼠标左键移动
    if ((m_moving && (event->buttons() == Qt::LeftButton)) &&
         (event->globalPos() - m_lastPos).manhattanLength() > QApplication::startDragDistance())
    {
        move(event->globalPos() - m_lastPos);
        m_lastPos = event->globalPos() - pos();
    }
    return QDialog::mouseMoveEvent(event);
}

void Dialog::mouseReleaseEvent(QMouseEvent *event)
{
    // 按鼠标释放
    m_moving = false;
}




void Dialog::on_pushButtonOk_clicked()
{
    // 确定按钮
    QString user = ui->lineEditName->text().trimmed();
    QString pswd = ui->lineEditPassWrd->text().trimmed();
    QString encrptPSWD = Encrtpt(pswd);
    if ((user == m_user) && (encrptPSWD == m_pswd))
    {
        WriteSettings();
        QMessageBox::information(this, "成功！", "恭喜你输入正确！");
        this->accept();
    }
    else
    {
        m_tryCout--;    // 错误次数
        QString tryMessage = QString("还剩%1机会").arg(m_tryCout);
        if (m_tryCout == 0)
        {
            QMessageBox::critical(this, "错误！", "错误次数过多，程序即将退出");
            this->reject();
        }
        else
        {
            QMessageBox::warning(this, "输入提示", tryMessage);
        }
    }


}
