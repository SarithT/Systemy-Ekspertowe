#include "helpers/narzedzie.h"

Narzedzie::Narzedzie(
        TypNarzedzia typNarzedzia,
        double srednicaSkrawania,
        double maksymalnaGlebokoscSkrawania,
        double dlugoscUzytkowa,
        int maksymalnaPredkoscObrotowa)
    : typNarzedzia_(typNarzedzia),
      srednicaSkrawania_(srednicaSkrawania),
      maksymalnaGlebokoscSkrawania_(maksymalnaGlebokoscSkrawania),
      dlugoscUzytkowa_(dlugoscUzytkowa),
      maksymalnaPredkoscObrotowa_(maksymalnaPredkoscObrotowa)
{

}

double Narzedzie::srednicaSkrawania() const
{
    return srednicaSkrawania_;
}

double Narzedzie::maksymalnaGlebokoscSkrawania() const
{
    return maksymalnaGlebokoscSkrawania_;
}

double Narzedzie::dlugoscUzytkowa() const
{
    return dlugoscUzytkowa_;
}

int Narzedzie::maksymalnaPredkoscObrotowa() const
{
    return maksymalnaPredkoscObrotowa_;
}
