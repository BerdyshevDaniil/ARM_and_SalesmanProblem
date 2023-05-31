#include "insurencecompany.h"
#include "ui_insurencecompany.h"

#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlTableModel>

InsurenceCompany::InsurenceCompany(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InsurenceCompany)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    //db.setHostName("127.0.0.1");
    db.setDatabaseName("D:\\QT\\SQLiteStudio\\ARM"); // specify file directory
    db.setUserName("root");
    db.setPassword("123456");
    if (!db.open()){
        qDebug() << db.lastError().text();
        return;
    }
    else {
        qDebug() << "Successfully connected to the DB\n";
    }

    model = new QSqlTableModel(this, db);
    model->setTable("InsurenceCompanies");
    this->setupModel("InsurenceCompanies",
                     QStringList() << trUtf8("idCompany")
                                   << trUtf8("CompanyName")
                                   << trUtf8("ContractExpirationDate")
                                   << trUtf8("PersonalInsurance(%)")
                                   << trUtf8("LiabilityInsurance(%)")
                                   << trUtf8("PropertyInsurance(%)"));
    this->createUI();
    setupBars();
}

InsurenceCompany::~InsurenceCompany()
{
    delete ui;
}

void InsurenceCompany::on_add_company_btn_clicked()
{
    model->insertRow(model->rowCount());
}


void InsurenceCompany::on_delete_company_btn_clicked()
{
    model->removeRow(row);
}

void InsurenceCompany::on_tableCompanies_clicked(const QModelIndex &index)
{
    row = index.row();
}

void InsurenceCompany::setupModel(const QString &tableName, const QStringList &headers)
{
    /* Производим инициализацию модели представления данных
     * с установкой имени таблицы в базе данных, по которому
     * будет производится обращение в таблице
     * */
    model = new QSqlTableModel(this);
    model->setTable(tableName);

    /* Устанавливаем названия колонок в таблице с сортировкой данных
     * */
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i,Qt::Horizontal,headers[j]);
    }
    // Устанавливаем сортировку по возрастанию данных по нулевой колонке
    model->setSort(2,Qt::AscendingOrder);
}

void InsurenceCompany::createUI()
{
    ui->tableCompanies->setModel(model);     // Устанавливаем модель на TableView
    ui->tableCompanies->setColumnHidden(0, true);    // Скрываем колонку с id записей
    // Разрешаем выделение строк
    ui->tableCompanies->setSelectionBehavior(QAbstractItemView::SelectRows);
    // Устанавливаем режим выделения лишь одно строки в таблице
    //ui->tableCompanies->setSelectionMode(QAbstractItemView::SingleSelection);
    // Устанавливаем размер колонок по содержимому
    ui->tableCompanies->resizeColumnsToContents();
    ui->tableCompanies->horizontalHeader()->setStretchLastSection(true);

    model->select(); // Делаем выборку данных из таблицы
}

void InsurenceCompany::setupBars(){
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(90, 90, 90));
    gradient.setColorAt(0.38, QColor(105, 105, 105));
    gradient.setColorAt(1, QColor(70, 70, 70));
    ui->widget->setBackground(QBrush(gradient));

    personal_insurence = new QCPBars(ui->widget->xAxis, ui->widget->yAxis);
    liability_insurance = new QCPBars(ui->widget->xAxis, ui->widget->yAxis);
    property_insurance = new QCPBars(ui->widget->xAxis, ui->widget->yAxis);

    liability_insurance->setVisible(false);
    liability_insurance->setAntialiased(false);
    liability_insurance->setStackingGap(1);
    liability_insurance->setName("Liability Insurance");
    liability_insurance->setPen(QPen(QColor(250, 170, 20).lighter(150)));
    liability_insurance->setBrush(QColor(250, 170, 20));

    property_insurance->setVisible(false);
    property_insurance->setAntialiased(false); // gives more crisp, pixel aligned bar borders
    property_insurance->setStackingGap(1);
    property_insurance->setName("Property Insurance");
    property_insurance->setPen(QPen(QColor(111, 9, 176).lighter(170)));
    property_insurance->setBrush(QColor(111, 9, 176));

    personal_insurence->setVisible(false);
    personal_insurence->setAntialiased(false);
    personal_insurence->setStackingGap(1);
    personal_insurence->setName("Personal Insurence");
    personal_insurence->setPen(QPen(QColor(0, 168, 140).lighter(130)));
    personal_insurence->setBrush(QColor(0, 168, 140));

    // prepare x axis:
    ui->widget->xAxis->setLabel("Company");
    QSqlQuery *query = new QSqlQuery(db);
    query->exec("SELECT InsurenceCompanies.idCompany FROM InsurenceCompanies");
    QVector<double> ticks;
    int i = 0;
    while (query->next()){
        ticks.push_back(++i);
    }
    query->exec("SELECT InsurenceCompanies.CompanyName FROM InsurenceCompanies");
    QVector<QString> labels;
    while (query->next()){
        labels.push_back((query->value(0)).toString());
    }
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->widget->xAxis->setTicker(textTicker);
    ui->widget->xAxis->setTickLabelRotation(60);
    ui->widget->xAxis->setSubTicks(false);
    ui->widget->xAxis->setTickLength(0, 3);
    ui->widget->xAxis->setRange(0, ticks.length() + 1);
    ui->widget->xAxis->setBasePen(QPen(Qt::white));
    ui->widget->xAxis->setTickPen(QPen(Qt::white));
    ui->widget->xAxis->grid()->setVisible(true);
    ui->widget->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->widget->xAxis->setTickLabelColor(Qt::white);
    ui->widget->xAxis->setLabelColor(Qt::white);

    // prepare y axis:
    ui->widget->yAxis->setRange(0, 40);
    ui->widget->yAxis->setPadding(5); // a bit more space to the left border
    ui->widget->yAxis->setLabel("%");
    ui->widget->yAxis->setBasePen(QPen(Qt::white));
    ui->widget->yAxis->setTickPen(QPen(Qt::white));
    ui->widget->yAxis->setSubTickPen(QPen(Qt::white));
    ui->widget->yAxis->grid()->setSubGridVisible(true);
    ui->widget->yAxis->setTickLabelColor(Qt::white);
    ui->widget->yAxis->setLabelColor(Qt::white);
    ui->widget->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
    ui->widget->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

    ui->widget->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    ui->widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    ui->widget->legend->setVisible(false);
    ui->widget->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    ui->widget->legend->setBrush(QColor(255, 255, 255, 100));
    ui->widget->legend->setBorderPen(Qt::NoPen);
    QFont legendFont = font();
    legendFont.setPointSize(6);
    ui->widget->legend->setFont(legendFont);
    ui->widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    ui->widget->replot();
}

void InsurenceCompany::on_personal_insurance_btn_clicked()
{
    liability_insurance->setVisible(false);
    property_insurance->setVisible(false);
    property_insurance->removeFromLegend();
    liability_insurance->removeFromLegend();
    personal_insurence->addToLegend();
    personal_insurence->setVisible(true);

    ui->widget->yAxis->setRange(0, 50);
    ui->widget->legend->setVisible(true);

    QSqlQuery *query = new QSqlQuery(db);
    query->exec("SELECT InsurenceCompanies.idCompany FROM InsurenceCompanies");
    QVector<double> ticks;
    int i = 0;
    while (query->next()){
        ticks.push_back(++i);
    }

    query->exec("SELECT InsurenceCompanies.CompanyName FROM InsurenceCompanies");
    QVector<QString> labels;
    while (query->next()){
        labels.push_back((query->value(0)).toString());
    }
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->widget->xAxis->setTicker(textTicker);
    ui->widget->xAxis->setRange(0, ticks.length() + 1);

    // Add data:
    QVector<double> personal_insurence_data;
    query->exec("SELECT InsurenceCompanies.PersonalInsurance FROM InsurenceCompanies");
    while (query->next()){
        personal_insurence_data.push_back((query->value(0)).toDouble());
    }
    personal_insurence->setData(ticks, personal_insurence_data);

    ui->widget->replot();
}


void InsurenceCompany::on_liability_insurance_btn_clicked()
{
    personal_insurence->setVisible(false);
    property_insurance->setVisible(false);
    property_insurance->removeFromLegend();
    personal_insurence->removeFromLegend();
    liability_insurance->addToLegend();
    liability_insurance->setVisible(true);

    ui->widget->yAxis->setRange(0, 25);
    ui->widget->legend->setVisible(true);

    QSqlQuery *query = new QSqlQuery(db);
    query->exec("SELECT InsurenceCompanies.idCompany FROM InsurenceCompanies");
    QVector<double> ticks;
    int i = 0;
    while (query->next()){
        ticks.push_back(++i);
    }

    query->exec("SELECT InsurenceCompanies.CompanyName FROM InsurenceCompanies");
    QVector<QString> labels;
    while (query->next()){
        labels.push_back((query->value(0)).toString());
    }
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->widget->xAxis->setTicker(textTicker);
    ui->widget->xAxis->setRange(0, ticks.length() + 1);

    // Add data:
    QVector<double> liability_insurance_data;
    query->exec("SELECT InsurenceCompanies.LiabilityInsurance FROM InsurenceCompanies");
    while (query->next()){
        liability_insurance_data.push_back((query->value(0)).toDouble());
    }

    liability_insurance->setData(ticks, liability_insurance_data);

    ui->widget->replot();
}

void InsurenceCompany::on_property_insurance_btn_clicked()
{
    personal_insurence->setVisible(false);
    liability_insurance->setVisible(false);
    property_insurance->setVisible(true);
    property_insurance->addToLegend();
    liability_insurance->removeFromLegend();
    personal_insurence->removeFromLegend();;

    ui->widget->yAxis->setRange(0, 60);
    ui->widget->legend->setVisible(true);

    QSqlQuery *query = new QSqlQuery(db);
    query->exec("SELECT InsurenceCompanies.idCompany FROM InsurenceCompanies");
    QVector<double> ticks;
    int i = 0;
    while (query->next()){
        ticks.push_back(++i);
    }

    query->exec("SELECT InsurenceCompanies.CompanyName FROM InsurenceCompanies");
    QVector<QString> labels;
    while (query->next()){
        labels.push_back((query->value(0)).toString());
    }
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->widget->xAxis->setTicker(textTicker);
    ui->widget->xAxis->setRange(0, ticks.length() + 1);

    // Add data:
    QVector<double> property_insurance_data;
    query->exec("SELECT InsurenceCompanies.PropertyInsurance FROM InsurenceCompanies");
    while (query->next()){
        property_insurance_data.push_back((query->value(0)).toDouble());
    }

    property_insurance->setData(ticks, property_insurance_data);

    ui->widget->replot();
}

void InsurenceCompany::on_update_btn_clicked()
{
    model->sort(2,Qt::AscendingOrder);
}

