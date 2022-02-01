#ifndef TODOHMI_H
#define TODOHMI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ToDoHmi; }
QT_END_NAMESPACE

class ToDoHmi : public QMainWindow
{
    Q_OBJECT

public:
    ToDoHmi(QWidget *parent = nullptr);
    ~ToDoHmi();

private:
    Ui::ToDoHmi *ui;
};
#endif // TODOHMI_H
