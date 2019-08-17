#ifndef TYPEFAST_H
#define TYPEFAST_H

#include <QMainWindow>

namespace Ui {
class TypeFast;
}

class TypeFast : public QMainWindow
{
    Q_OBJECT

public:
    explicit TypeFast(QWidget *parent = nullptr);
    ~TypeFast();

private:
    Ui::TypeFast *ui;
};

#endif // TYPEFAST_H
