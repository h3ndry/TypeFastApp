#include "typefast.h"
#include "ui_typefast.h"

TypeFast::TypeFast(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TypeFast)
{
    ui->setupUi(this);
}

TypeFast::~TypeFast()
{
    delete ui;
}
