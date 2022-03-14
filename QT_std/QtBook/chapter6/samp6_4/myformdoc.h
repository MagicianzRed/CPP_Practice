#ifndef MYFORMDOC_H
#define MYFORMDOC_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MyFormDoc; }
QT_END_NAMESPACE

class MyFormDoc : public QWidget
{
    Q_OBJECT

public:
    explicit MyFormDoc(QWidget *parent = nullptr);
    ~MyFormDoc();

    void loadFromFile(QString& aFlieName);  // 打开文件
    QString currentFileName();              // 返回当前文件名
    bool isFileOpened();                    // 文件已经打开
    void setEditFont();                     // 设置字体
    void textCut();                         // 剪切
    void textCopy();                        // 复制
    void textPaste();                       // 粘贴
private:
    QString mCurrentFile;       // 当前文件
    bool mFileOpened = false;   // 文件打开状态
    Ui::MyFormDoc *ui;
};
#endif // MYFORMDOC_H
