#ifndef FREZTRZPIENIOWY_H
#define FREZTRZPIENIOWY_H

#include "helpers/narzedzie.h"



class FrezTrzpieniowy : public Narzedzie
{
public:
    FrezTrzpieniowy(
            TypNarzedzia typNarzedzia,
            double srednicaSkrawania,
            double maksymalnaGlebokoscSkrawania,
            double dlugoscUzytkowa,
            int maksymalnaPredkoscObrotowa);
};

#endif // FREZTRZPIENIOWY_H
