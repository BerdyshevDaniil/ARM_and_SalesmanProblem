/********************************************************************************
** Form generated from reading UI file 'arm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARM_H
#define UI_ARM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ARM
{
public:
    QAction *actionUse_this_tool_to_help;
    QAction *action;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QListWidget *listMarks;
    QComboBox *boxMarks;
    QWidget *gridLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *listRating;
    QComboBox *boxStudent;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableSkipped;
    QPushButton *btnSkipped;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *inputForEmail;
    QLabel *showEmail;
    QPlainTextEdit *textEmail;
    QPushButton *btnSendEmail;
    QWidget *tab_4;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QListWidget *showMeeting;
    QLineEdit *getMeeting;
    QPushButton *btnMeeting;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QTextBrowser *viewBirthday;
    QPushButton *btnBirthday;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QListWidget *showClass1;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuARM;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ARM)
    {
        if (ARM->objectName().isEmpty())
            ARM->setObjectName(QString::fromUtf8("ARM"));
        ARM->resize(897, 446);
        actionUse_this_tool_to_help = new QAction(ARM);
        actionUse_this_tool_to_help->setObjectName(QString::fromUtf8("actionUse_this_tool_to_help"));
        action = new QAction(ARM);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(ARM);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(270, 30, 601, 351));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        verticalLayoutWidget_5 = new QWidget(tab_1);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(30, 20, 261, 281));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        listMarks = new QListWidget(verticalLayoutWidget_5);
        listMarks->setObjectName(QString::fromUtf8("listMarks"));

        verticalLayout_6->addWidget(listMarks);

        boxMarks = new QComboBox(verticalLayoutWidget_5);
        boxMarks->setObjectName(QString::fromUtf8("boxMarks"));

        verticalLayout_6->addWidget(boxMarks);

        gridLayoutWidget = new QWidget(tab_1);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(320, 80, 258, 171));
        verticalLayout_2 = new QVBoxLayout(gridLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        listRating = new QListWidget(gridLayoutWidget);
        listRating->setObjectName(QString::fromUtf8("listRating"));

        verticalLayout_2->addWidget(listRating);

        boxStudent = new QComboBox(gridLayoutWidget);
        boxStudent->setObjectName(QString::fromUtf8("boxStudent"));

        verticalLayout_2->addWidget(boxStudent);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tableSkipped = new QTableView(tab_2);
        tableSkipped->setObjectName(QString::fromUtf8("tableSkipped"));

        verticalLayout->addWidget(tableSkipped);

        btnSkipped = new QPushButton(tab_2);
        btnSkipped->setObjectName(QString::fromUtf8("btnSkipped"));

        verticalLayout->addWidget(btnSkipped);


        gridLayout->addLayout(verticalLayout, 0, 0, 2, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayoutWidget_4 = new QWidget(tab_3);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(50, 20, 511, 287));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);

        inputForEmail = new QLineEdit(verticalLayoutWidget_4);
        inputForEmail->setObjectName(QString::fromUtf8("inputForEmail"));

        verticalLayout_5->addWidget(inputForEmail);

        showEmail = new QLabel(verticalLayoutWidget_4);
        showEmail->setObjectName(QString::fromUtf8("showEmail"));

        verticalLayout_5->addWidget(showEmail);

        textEmail = new QPlainTextEdit(verticalLayoutWidget_4);
        textEmail->setObjectName(QString::fromUtf8("textEmail"));

        verticalLayout_5->addWidget(textEmail);

        btnSendEmail = new QPushButton(verticalLayoutWidget_4);
        btnSendEmail->setObjectName(QString::fromUtf8("btnSendEmail"));

        verticalLayout_5->addWidget(btnSendEmail);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayoutWidget_3 = new QWidget(tab_4);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(240, 40, 331, 241));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        showMeeting = new QListWidget(verticalLayoutWidget_3);
        showMeeting->setObjectName(QString::fromUtf8("showMeeting"));

        verticalLayout_4->addWidget(showMeeting);

        getMeeting = new QLineEdit(verticalLayoutWidget_3);
        getMeeting->setObjectName(QString::fromUtf8("getMeeting"));

        verticalLayout_4->addWidget(getMeeting);

        btnMeeting = new QPushButton(verticalLayoutWidget_3);
        btnMeeting->setObjectName(QString::fromUtf8("btnMeeting"));

        verticalLayout_4->addWidget(btnMeeting);

        verticalLayoutWidget_2 = new QWidget(tab_4);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 110, 201, 91));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        viewBirthday = new QTextBrowser(verticalLayoutWidget_2);
        viewBirthday->setObjectName(QString::fromUtf8("viewBirthday"));

        verticalLayout_3->addWidget(viewBirthday);

        btnBirthday = new QPushButton(verticalLayoutWidget_2);
        btnBirthday->setObjectName(QString::fromUtf8("btnBirthday"));

        verticalLayout_3->addWidget(btnBirthday);

        tabWidget->addTab(tab_4, QString());
        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(30, 50, 201, 301));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_7->addWidget(label_7);

        showClass1 = new QListWidget(verticalLayoutWidget_6);
        showClass1->setObjectName(QString::fromUtf8("showClass1"));

        verticalLayout_7->addWidget(showClass1);

        pushButton = new QPushButton(verticalLayoutWidget_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_7->addWidget(pushButton);

        ARM->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ARM);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 897, 20));
        menuARM = new QMenu(menubar);
        menuARM->setObjectName(QString::fromUtf8("menuARM"));
        ARM->setMenuBar(menubar);
        statusbar = new QStatusBar(ARM);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ARM->setStatusBar(statusbar);

        menubar->addAction(menuARM->menuAction());
        menuARM->addAction(action);

        retranslateUi(ARM);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ARM);
    } // setupUi

    void retranslateUi(QMainWindow *ARM)
    {
        ARM->setWindowTitle(QApplication::translate("ARM", "ARM", nullptr));
        actionUse_this_tool_to_help->setText(QApplication::translate("ARM", "Use this tool to help", nullptr));
        action->setText(QApplication::translate("ARM", "\320\224\320\260\321\210\320\260 \320\230\321\211\320\265\320\275\320\272\320\276", nullptr));
        label_6->setText(QApplication::translate("ARM", "<html><head/><body><p align=\"center\">\320\236\321\206\320\265\320\275\320\272\320\270 (\320\277\321\200\320\265\320\264\320\274\320\265\321\202)</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("ARM", "\320\236\321\206\320\265\320\275\320\272\320\270 (\321\203\321\207\320\265\320\275\320\270\320\272)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("ARM", "\320\236\321\206\320\265\320\275\320\272\320\270", nullptr));
        label->setText(QApplication::translate("ARM", "\320\237\321\200\320\276\320\277\321\203\321\201\320\272\320\270", nullptr));
        btnSkipped->setText(QApplication::translate("ARM", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ARM", "\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214 \320\267\320\260 \320\277\320\276\321\201\320\265\321\211\320\260\320\265\320\274\320\276\321\201\321\202\321\214\321\216", nullptr));
        label_5->setText(QApplication::translate("ARM", "\320\235\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \321\200\320\276\320\264\320\270\321\202\320\265\320\273\321\216", nullptr));
        inputForEmail->setText(QApplication::translate("ARM", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\320\260\320\274\320\270\320\273\320\270\321\216 \320\270 \320\270\320\274\321\217 \321\203\321\207\320\265\320\275\320\270\320\272\320\260", nullptr));
        showEmail->setText(QApplication::translate("ARM", "<html><head/><body><p align=\"center\"/></body></html>", nullptr));
        btnSendEmail->setText(QApplication::translate("ARM", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ARM", "\320\241\320\262\321\217\320\267\321\214 \321\201 \321\200\320\276\320\264\320\270\321\202\320\265\320\273\321\217\320\274\320\270", nullptr));
        label_4->setText(QApplication::translate("ARM", "\320\241\320\276\320\261\321\200\320\260\320\275\320\270\321\217", nullptr));
        btnMeeting->setText(QApplication::translate("ARM", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_3->setText(QApplication::translate("ARM", "\320\221\320\273\320\270\320\266\320\260\320\271\321\210\320\270\320\271 \320\264\320\265\320\275\321\214 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        viewBirthday->setHtml(QApplication::translate("ARM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        btnBirthday->setText(QApplication::translate("ARM", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ARM", "\320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        label_7->setText(QApplication::translate("ARM", "<html><head/><body><p align=\"center\">\320\241\320\277\320\270\321\201\320\276\320\272 \320\272\320\273\320\260\321\201\321\201\320\260</p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("ARM", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        menuARM->setTitle(QApplication::translate("ARM", "ARM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ARM: public Ui_ARM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARM_H
