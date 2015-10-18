#ifndef OTAK_H
#define OTAK_H

#include <QWidget>

namespace Ui {
class arsalan;
}

class arsalan : public QWidget
{
    Q_OBJECT

public:
    explicit arsalan(QWidget *parent = 0);
    ~arsalan();

private:
    Ui::arsalan *ui;
};

#endif // OTAK_H
