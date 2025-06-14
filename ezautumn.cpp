#include "ezautumn.h"
#include "./ui_ezautumn.h"

EzAutumn::EzAutumn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EzAutumn)
{
    ui->setupUi(this);
}

EzAutumn::~EzAutumn()
{
    delete ui;
}
