#ifndef WIERTLO_H
#define WIERTLO_H

#include "helpers/narzedzie.h"

class Wiertlo : public Narzedzie
{
public:
    Wiertlo(
            TypNarzedzia typNarzedzia,
            double srednicaSkrawania,
            double maksymalnaGlebokoscSkrawania,
            double dlugoscUzytkowa,
            int maksymalnaPredkoscObrotowa);
};

#endif // WIERTLO_H
