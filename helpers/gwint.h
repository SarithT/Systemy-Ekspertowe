#ifndef GWINT_H
#define GWINT_H

#include "helpers/narzedzie.h"


class Gwint : public Narzedzie
{
public:
    Gwint(
            TypNarzedzia typNarzedzia,
            double srednicaSkrawania,
            double maksymalnaGlebokoscSkrawania,
            double dlugoscUzytkowa,
            int maksymalnaPredkoscObrotowa,
            int srednicaGwintu,
            double skokGwintu,
            double srednicaOtworuWstepnego);

    int srednicaGwintu() const;

    double skokGwintu() const;

    double srednicaOtworuWstepnego() const;

private:
    int srednicaGwintu_;
    double skokGwintu_;
    double srednicaOtworuWstepnego_;
};

#endif // GWINT_H
