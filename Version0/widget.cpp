#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    this->SettingWiget = new settingwidget();   //设置界面初始化

    connect(ui->settingbutton, &QPushButton::clicked, [&](){
            this->SettingWidget_show();
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::SettingWidget_show(){
    this->SettingWiget->show();

}
