#ifndef QWINTSPINDELEGATE_H
#define QWINTSPINDELEGATE_H

#include <QStyledItemDelegate>
#include <QSpinBox>

class QWIntSpinDelegate : public QStyledItemDelegate
{
public:
    QWIntSpinDelegate(QObject *parent = 0);

    // 自定义代理组件必须继承以下四个函数
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const Q_DECL_OVERRIDE; /*使用override，Q_DECL_OVERRIDE已经过时*/
    void setEditorData(QWidget *editor,
                       const QModelIndex &index) const Q_DECL_OVERRIDE;
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const Q_DECL_OVERRIDE;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                              const QModelIndex &index) const Q_DECL_OVERRIDE;
};

#endif // QWINTSPINDELEGATE_H
