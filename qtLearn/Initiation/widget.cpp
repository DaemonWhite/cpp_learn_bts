#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_Valider_clicked()
{
    ui -> label ->  setText("Bienvenue");
}

void Widget::on_carre_clicked()
{
    bool ok;
    QString edit_text;
    int num_text;
    edit_text = ui-> Saisie -> text();
    num_text = edit_text.toInt(&ok);

    if (ok) {
        num_text=num_text*num_text;
        ui -> result -> setNum(num_text);
    } else {
        ui -> result -> setText("Erreur de sasie");
    }

}

void Widget::on_efface_clicked()
{
    ui -> result -> setText("");
    ui -> label-> setText("");
}
