#pragma once

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class EzAutumn;
}
QT_END_NAMESPACE

class EzAutumn : public QWidget
{
    Q_OBJECT

public:
    EzAutumn(QWidget *parent = nullptr);
    ~EzAutumn();

private:
    Ui::EzAutumn *ui;
};
