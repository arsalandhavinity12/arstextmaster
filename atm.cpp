#include "otak.h"
#include "ui_desain.h"

arsalan::arsalan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::arsalan)
{
    ui->setupUi(this);
}

arsalan::~arsalan()
{
    delete ui;
}
