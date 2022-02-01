#include "todohmi.h"
#include "ui_todohmi.h"

ToDoHmi::ToDoHmi(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ToDoHmi)
{
    ui->setupUi(this);
}

ToDoHmi::~ToDoHmi()
{
    delete ui;
}

