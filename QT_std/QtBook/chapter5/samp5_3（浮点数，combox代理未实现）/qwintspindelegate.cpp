#include "qwintspindelegate.h"

QWIntSpinDelegate::QWIntSpinDelegate(QObject *parent)
{

}

/*
 * 用于创建需要的编辑组件
*/
QWidget *QWIntSpinDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                                         const QModelIndex &index) const
{  // 创建代理编辑组件
    QSpinBox *editor = new QSpinBox(parent);
    editor->setFrame(false);    // 设置为无边框
    editor->setMinimum(0);
    editor->setMaximum(10000);
    return editor;  // 返回此编辑器？
}

/*
 * 用于从数据模型获取数值，设置为编辑器的显示值
 * 调用方式：当双击一个单元格，就会自动调用这个函数
*/
void QWIntSpinDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{ // 从数据模型获取数据，显示到代理组件中
    int value = index.model()->data(index, Qt::EditRole).toInt();
    // 通过强制类型转换将 editor 转换为 QSpinBox，然后将获取的数值设置为 spinBox 的值
    QSpinBox *spinBox = static_cast<QSpinBox*>(editor);
    spinBox->setValue(value);
}

/*
 * 用于将代理编辑器上的值更新给数据模型
 * 当用户再界面上完成编辑时会自动调用此函数，将界面上的数据更新到数据模型
*/
void QWIntSpinDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,
                                     const QModelIndex &index) const
{ // 将代理组件的数据保存到数据模型当中
    QSpinBox *spinBox = static_cast<QSpinBox*>(editor);
    spinBox->interpretText();
    /*首先获取编辑器的数值*/
    int value = spinBox->value();
    /*利用传递的*/
    model->setData(index, value, Qt::EditRole);
}

/*
 * 为代理组件设置一个合适的大小
*/
void QWIntSpinDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                                             const QModelIndex &index) const
{
    // 设置组件大小
    editor->setGeometry(option.rect);
}
