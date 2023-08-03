/********************************************************************************
** Form generated from reading UI file 'ocr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCR_H
#define UI_OCR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OCR
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *detect_letters_button;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *add_word_to_dictionary_button;
    QGraphicsView *graphicsView;
    QWidget *tab_2;

    void setupUi(QWidget *OCR)
    {
        if (OCR->objectName().isEmpty())
            OCR->setObjectName(QString::fromUtf8("OCR"));
        OCR->resize(800, 600);
        tabWidget = new QTabWidget(OCR);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 781, 581));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setDocumentMode(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        detect_letters_button = new QPushButton(tab);
        detect_letters_button->setObjectName(QString::fromUtf8("detect_letters_button"));
        detect_letters_button->setGeometry(QRect(90, 450, 121, 31));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(295, 11, 471, 441));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 41, 258, 391));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        add_word_to_dictionary_button = new QPushButton(widget);
        add_word_to_dictionary_button->setObjectName(QString::fromUtf8("add_word_to_dictionary_button"));

        verticalLayout->addWidget(add_word_to_dictionary_button);


        verticalLayout_2->addLayout(verticalLayout);

        graphicsView = new QGraphicsView(widget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_2->addWidget(graphicsView);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(OCR);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OCR);
    } // setupUi

    void retranslateUi(QWidget *OCR)
    {
        OCR->setWindowTitle(QCoreApplication::translate("OCR", "OCR", nullptr));
        detect_letters_button->setText(QCoreApplication::translate("OCR", "Detect Letters", nullptr));
        label_2->setText(QCoreApplication::translate("OCR", "Find", nullptr));
        label->setText(QCoreApplication::translate("OCR", "In Picture", nullptr));
        add_word_to_dictionary_button->setText(QCoreApplication::translate("OCR", "Add Word to Finder", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("OCR", "OCR", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("OCR", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OCR: public Ui_OCR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCR_H
