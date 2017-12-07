#ifndef FREZWALCOWOCZOLOWY_H
#define FREZWALCOWOCZOLOWY_H

#include "helpers/narzedzie.h"



class FrezWalcowoCzolowy : public Narzedzie
{
public:
    FrezWalcowoCzolowy(
            TypNarzedzia typNarzedzia,
            double srednicaSkrawania,
            double maksymalnaGlebokoscSkrawania,
            double dlugoscUzytkowa,
            int maksymalnaPredkoscObrotowa);
};

#endif // FREZWALCOWOCZOLOWY_H
