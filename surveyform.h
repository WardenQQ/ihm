#ifndef SURVEYFORM_H
#define SURVEYFORM_H

#include <QWidget>

namespace Ui {
class SurveyForm;
}

class SurveyForm : public QWidget
{
    Q_OBJECT

public:
    explicit SurveyForm(QWidget *parent = 0);
    ~SurveyForm();

private:
    Ui::SurveyForm *ui;
};

#endif // SURVEYFORM_H
