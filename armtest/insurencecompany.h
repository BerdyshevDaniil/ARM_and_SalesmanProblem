#ifndef INSURENCECOMPANY_H
#define INSURENCECOMPANY_H

#include "qcustomplot.h"

#include <QWidget>
#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class InsurenceCompany;
}

class InsurenceCompany : public QDialog
{
    Q_OBJECT

public:
    explicit InsurenceCompany(QWidget *parent = nullptr);
    ~InsurenceCompany();

private slots:
    void on_add_company_btn_clicked();

    void on_delete_company_btn_clicked();

    void on_tableCompanies_clicked(const QModelIndex &index);

    void on_personal_insurance_btn_clicked();

    void on_liability_insurance_btn_clicked();

    void on_property_insurance_btn_clicked();

    void on_update_btn_clicked();

private:
    Ui::InsurenceCompany *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    QCPBars *property_insurance;
    QCPBars *liability_insurance;
    QCPBars *personal_insurence;

    int row; // номер активной строки

    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
    void setupBars();
};

#endif // INSURENCECOMPANY_H
