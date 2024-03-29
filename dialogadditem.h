#ifndef DIALOGADDITEM_H
#define DIALOGADDITEM_H

#include <QDialog>
#include <QMessageBox>

using namespace std;

namespace Ui {
class DialogAddItem;
}

class DialogAddItem : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddItem(QWidget *parent = nullptr);
    ~DialogAddItem();   

private slots:
    void on_enterButton_clicked();

private:
    Ui::DialogAddItem *ui;

public:

    //creating variables to fill data from form
    QString road_name() const;
    QString road_type() const;
    double road_length() const;
    int road_lines() const;
    QString road_pavement() const;
    QString road_divider() const;

};

#endif // DIALOGADDITEM_H
