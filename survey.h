#ifndef SURVEY_H
#define SURVEY_H

enum {
    kHomme = 0,
    kFemme = 1
};

enum {
    kMarie,
    kVeuf,
    kCelibataire
};

class Survey
{
public:
    Survey();

private:
    int age;
    bool sexe;
    int etatCivil;
    int trancheRevenus;
};

#endif // SURVEY_H
