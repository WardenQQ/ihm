#include "surveyform.h"
#include "ui_surveyform.h"

SurveyForm::SurveyForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SurveyForm)
{
    ui->setupUi(this);
}

SurveyForm::~SurveyForm()
{
    delete ui;
}
