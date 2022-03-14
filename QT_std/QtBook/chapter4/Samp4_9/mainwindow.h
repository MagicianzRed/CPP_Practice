#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QDate>
#include <QAbstractItemView>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnSetHeader_clicked();

    void on_btnIniData_clicked();

    void on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

    void on_btnSetRow_clicked();

    void on_btnInsertRow_clicked();

    void on_btnAppendRow_clicked();

    void on_btnDelCurRow_clicked();


    void on_checkBoxEditable_clicked(bool checked);

    void on_checkBoxHeaderH_clicked(bool checked);

    void on_checkBoxHeaderV_clicked(bool checked);

    void on_checkBoxRowColor_clicked(bool checked);

    void on_btnReadToEdit_clicked();

private:
    // 自定义单元 Type 类型，在创建单元格的 item 时使用
    enum CellType
    {
        ctName = 1000,
        ctSex,
        ctBrith,
        ctNation,
        ctScore,
        ctPartyM,
    };
    // 各字段在表格中的列号
    enum FieldColNum
    {
        colName = 0,
        colSex,
        colBrith,
        colNation,
        colScore,
        colPartyM,
    };
    QLabel *labCellIndex;   // 状态栏上用于显示单元格的行号，列号
    QLabel *labCellType;    // 状态栏上用于显示单元格的 type
    QLabel *labStudID;      // 状态栏上用于显示学号
    void createItemARow(int rowNo, QString name, QString sex, QDate brith,
                        QString nation, bool isPM, int score);  // 为某一行创建 items
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
