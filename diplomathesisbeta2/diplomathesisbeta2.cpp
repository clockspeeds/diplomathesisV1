#include "diplomathesisbeta2.h"
#include <qsize.h>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <string>
#include <QTextEdit>
#include <QCoreApplication>
#include <QCoreApplication>
#include <stdexcept>
#include <iomanip>
diplomathesisbeta2::diplomathesisbeta2(QWidget *parent)
    : QMainWindow(parent)
{

    ui.setupUi(this);
    //connect(ui.pushButton, &QPushButton::clicked, this, &diplomathesisbeta2::on_pushButton_clicked);
    connect(ui.lineEdit, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit);
    connect(ui.lineEdit_2, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_2);
    connect(ui.lineEdit_3, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_3);
   // connect(ui.checkBox, &QCheckBox::stateChanged, this, &diplomathesisbeta2::QCheckBox_checked);
    connect(ui.lineEdit_7, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_7);
    connect(ui.lineEdit_8, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_8);
    connect(ui.lineEdit_9, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_9);
    connect(ui.lineEdit_13, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_13);
    connect(ui.lineEdit_14, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_14);
    connect(ui.lineEdit_15, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_15);
    connect(ui.lineEdit_16, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_16);
    connect(ui.lineEdit_22, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_22);
    connect(ui.lineEdit_23, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_23);
    connect(ui.lineEdit_24, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_24);
    connect(ui.lineEdit_27, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_27);
    connect(ui.lineEdit_28, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_28);
    connect(ui.lineEdit_29, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_29);
    connect(ui.lineEdit_33, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_33);
    connect(ui.lineEdit_34, &QLineEdit::textChanged, this, &diplomathesisbeta2::LineEdit_34);
    connect(ui.radioButton, &QRadioButton::toggled, this, &diplomathesisbeta2::onRadioButtonToggled);
    connect(ui.radioButton_2, &QRadioButton::toggled, this, &diplomathesisbeta2::onRadioButton_2Toggled);
}

diplomathesisbeta2::~diplomathesisbeta2()
{

}
void diplomathesisbeta2::on_pushButton_5_clicked() {
    ui.stackedWidget->setCurrentIndex(0); // Show page 1
}

void diplomathesisbeta2::on_pushButton_2_clicked() {
    ui.stackedWidget->setCurrentIndex(1); // Show page 1
}

void diplomathesisbeta2::on_pushButton_3_clicked() {
    ui.stackedWidget->setCurrentIndex(2); // Show page 1
}
void diplomathesisbeta2::on_pushButton_8_clicked() {
    ui.stackedWidget->setCurrentIndex(3); // Show page 1
}
void diplomathesisbeta2::on_pushButton_10_clicked() {
    ui.stackedWidget->setCurrentIndex(4); // Show page 1
}
void diplomathesisbeta2::on_pushButton_12_clicked() {
    ui.stackedWidget->setCurrentIndex(5); // Show page 1
}
void diplomathesisbeta2::LineEdit(const QString& text)  
{
    str = text.toStdString();
}
void diplomathesisbeta2::LineEdit_2(const QString& text)
{
    str2 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_3(const QString& text)
{
    str3 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_7(const QString& text)
{
    str4 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_8(const QString& text)
{
    str5 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_9(const QString& text)
{
    str6 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_13(const QString& text)
{
    str7 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_14(const QString& text)
{
    str8 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_15(const QString& text)
{
    str9 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_16(const QString& text)
{
    str10 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_22(const QString& text)
{
    str11 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_23(const QString& text)
{
    str12 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_24(const QString& text)
{
    str13 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_27(const QString& text)
{
    str14 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_28(const QString& text)
{
    str15 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_29(const QString& text)
{
    str16 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_33(const QString& text)
{
    str17 = text.toStdString();
}
void diplomathesisbeta2::LineEdit_34(const QString& text)
{
    str18 = text.toStdString();
}

void diplomathesisbeta2::firstcalc() {
    
        try {
            num1 = std::stoi(str);
            num2 = std::stoi(str2);
            num3 = std::stoi(str3);
            if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
                throw "number is too small";
            }
            else {
                result = (num1 - num2) / num3;
                ui.textEdit->append("Amortization: " + QString::number(result));
                ui.textEdit->append("residual value: ");
                for (int i = 0; i < num3; i++) {
                    ui.textEdit->append(QString::number(num1 -= result));
                }
            }
        }
        catch (...) {
            ui.textEdit->append("something went wrong");
            return;
        }
    
    
}


void diplomathesisbeta2::secondcalc() {
    
    QFont font = ui.textEdit->font();
    font.setPointSize(20);
    ui.textEdit_2->setFont(font);
    try {
        num1 = std::stoi(str4);
        num2 = std::stoi(str5);
        num3 = std::stoi(str6);
        if (num3 <= 0) {
            throw "number is too small";
        }
        result = ((num1 - num2) / num3) * 100;
        ui.textEdit_2->append(QString::number(result) + "%");
    }
    
    catch (...) {
        ui.textEdit_2->append("something went wrong");
    }
    
}
void diplomathesisbeta2::thirdcalc() {
    try {
        num1 = std::stoi(str7);
        num2 = std::stoi(str8);
        num3 = std::stoi(str9);
        num4 = std::stoi(str10);
        num5 = std::stoi(str11);
        if (num1 <= 0 || num2 <= 0 || num3 <= 0 || num4 <= 0) {
            throw "number is too small";
        }
        else if (num3 > 12 || num5 > 12) {
            throw std::runtime_error("Number3 is too big");
        }
        result = num1 + (num2 * (12 - num3) / 12.0) - (num4 * num5 / 12.0);
        ui.textEdit_3->append(QString::number(result, 'f', 0));
    }
    catch (const std::runtime_error& e) {
        ui.textEdit_3->append("too many months");
    }
    catch (...) {
        ui.textEdit_3->append("something went wrong");
    }
    
}

void diplomathesisbeta2::fourthcalc() {
    try {
        num1 = std::stoi(str12);
        num2 = std::stoi(str13);
        if (num1 <= 0 || num2 <= 0) {
            throw std::runtime_error("Number is too small");
        }
        result = num1 / num2;
        ui.textEdit_4->append("ROF A is: " + QString::number(result * 100) + "%");
       
    }
    catch (const std::runtime_error& e) {
        ui.textEdit_4->append("too small numbers entered");
    }
    catch (...) {
        ui.textEdit_4->append("something went wrong");
    }
}

void diplomathesisbeta2::fifthcalc() {
    try {
        num1 = std::stoi(str14);
        num2 = std::stoi(str15);
        num3 = std::stoi(str16);
        result = num1 / (num2 * num3);
        ui.textEdit_5->append("capital intensity is: " + QString::number(result * 100) + "%");
       
    }
    catch (...) {
        ui.textEdit_5->append("something went wrong");
    }

}
void diplomathesisbeta2::onRadioButtonToggled(bool checked) {
    //
}
void diplomathesisbeta2::onRadioButton_2Toggled(bool checked) {
    //
}
void diplomathesisbeta2::sixthcalc() {
    try {
        num1 = std::stoi(str17);
        num2 = std::stoi(str18);
        if (num1 <= 0 || num2 <= 0) {
            throw std::runtime_error("Number is too small");
        }
        result = num1 / num2;
        ui.textEdit_6->append("coefficient is: " + QString::number(result));
    }
    catch (const std::runtime_error& e) {
        ui.textEdit_6->append("too small numbers");
    }
    catch (...) {
        ui.textEdit_6->append("something went wrong");
    }
}
void diplomathesisbeta2::seventhcalc() {
    try {
        num1 = std::stod(str17);
        num2 = std::stod(str18);
        
        result = num1 * num2;
        ui.textEdit_6->append("integral coefficient is: " + QString::number(result));
    }
    catch (const std::runtime_error& e) {
        ui.textEdit_6->append("too small numbers");
    }
    catch (...) {
        ui.textEdit_6->append("something went wrong");
    }
}

void diplomathesisbeta2::on_pushButton_4_clicked() {
    
    ui.textEdit->clear();
        firstcalc();
   
}

void diplomathesisbeta2::on_pushButton_6_clicked() {
    ui.textEdit_2->clear();
    secondcalc();
    
}

void diplomathesisbeta2::on_pushButton_7_clicked() {
    ui.textEdit_3->clear();
    thirdcalc();
    
}
void diplomathesisbeta2::on_pushButton_9_clicked() {
    ui.textEdit_4->clear();
    fourthcalc();

}
void diplomathesisbeta2::on_pushButton_11_clicked() {
    ui.textEdit_5->clear();
    fifthcalc();

}

void diplomathesisbeta2::on_pushButton_13_clicked() {
    
    onRadioButtonToggled(ui.radioButton->isChecked());
    if (ui.radioButton->isChecked()) {
        sixthcalc();
    }
    onRadioButtonToggled(ui.radioButton_2->isChecked());
    if (ui.radioButton_2->isChecked()) {
        seventhcalc();
    }

}

void diplomathesisbeta2::on_pushButton_clicked() {
    
   // ui.textEdit->append(ui.frame_3->isHidden() ? "true" : "false");
    //firstcalc();
    
    // Animation for frame_3
    QPropertyAnimation* animationFrame3 = new QPropertyAnimation(ui.frame_3, "geometry");
    animationFrame3->setDuration(200); // Duration in milliseconds
    QRect startRectFrame3 = ui.frame_3->geometry();
    QRect endRectFrame3 = ui.frame_3->geometry();

    // Animation for frame_4
    QPropertyAnimation* animationFrame4 = new QPropertyAnimation(ui.frame_4, "geometry");
    animationFrame4->setDuration(200); // Duration in milliseconds
    QRect startRectFrame4 = ui.frame_4->geometry();
    QRect endRectFrame4 = ui.frame_4->geometry();

    if (ui.frame_3->isHidden()) {
        ui.frame_3->show();
        startRectFrame3.setWidth(0);
        endRectFrame3.setWidth(250);

       //startRectFrame4.setWidth(ui.frame_4->width());
        //endRectFrame4.setWidth(ui.frame_4->width());
        endRectFrame4.moveLeft(startRectFrame4.left() + 250); // Move frame_4 to the right to mirror the effect
    }
    else {
        startRectFrame3.setWidth(ui.frame_3->width());
        endRectFrame3.setWidth(0);

        startRectFrame4.setWidth(ui.frame_4->width());
        endRectFrame4.setWidth(ui.frame_4->width() + 250);
        endRectFrame4.moveLeft(startRectFrame4.left() - 250); // Move frame_4 to the left to mirror the effect
    }

    

    animationFrame4->setStartValue(startRectFrame4);
    animationFrame4->setEndValue(endRectFrame4);
    animationFrame4->setEasingCurve(QEasingCurve::InOutQuad); // Smooth animation

    animationFrame3->setStartValue(startRectFrame3);
    animationFrame3->setEndValue(endRectFrame3);
    animationFrame3->setEasingCurve(QEasingCurve::InOutQuad); // Smooth animation

    // Group animations to run them in parallel
    QParallelAnimationGroup* group = new QParallelAnimationGroup;
    group->addAnimation(animationFrame3);
    group->addAnimation(animationFrame4);

    group->start(QAbstractAnimation::DeleteWhenStopped);

    // Connect the finished signal to hide the frame_3 if its width is 0
    connect(group, &QParallelAnimationGroup::finished, this, [this]() {
        if (ui.frame_3->width() == 0) {
            ui.frame_3->hide();
        }
        });

    disconnect(ui.pushButton, &QPushButton::clicked, this, &diplomathesisbeta2::on_pushButton_clicked);
}
