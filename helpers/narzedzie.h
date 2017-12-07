#ifndef NARZEDZIE_H
#define NARZEDZIE_H

#include "helpers/narzedzieenum.h"

class Narzedzie
{
public:
    Narzedzie(
            TypNarzedzia typNarzedzia,
            double srednicaSkrawania,
            double maksymalnaGlebokoscSkrawania,
            double dlugoscUzytkowa,
            int maksymalnaPredkoscObrotowa);

    double srednicaSkrawania() const;

    double maksymalnaGlebokoscSkrawania() const;

    double dlugoscUzytkowa() const;

    int maksymalnaPredkoscObrotowa() const;

private:
    TypNarzedzia typNarzedzia_;
    double srednicaSkrawania_;
    double maksymalnaGlebokoscSkrawania_;
    double dlugoscUzytkowa_;
    int maksymalnaPredkoscObrotowa_;
};

#endif // NARZEDZIE_H
