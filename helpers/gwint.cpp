#include "helpers/gwint.h"

Gwint::Gwint(TypNarzedzia typNarzedzia,
             double srednicaSkrawania,
             double maksymalnaGlebokoscSkrawania,
             double dlugoscUzytkowa,
             int maksymalnaPredkoscObrotowa,
             int srednicaGwintu,
             double skokGwintu,
             double srednicaOtworuWstepnego):
    Narzedzie (typNarzedzia, srednicaSkrawania,
               maksymalnaGlebokoscSkrawania, dlugoscUzytkowa,
               maksymalnaPredkoscObrotowa),
    srednicaGwintu_(srednicaGwintu),
    skokGwintu_(skokGwintu),
    srednicaOtworuWstepnego_(srednicaOtworuWstepnego)
{

}

int Gwint::srednicaGwintu() const
{
    return srednicaGwintu_;
}

double Gwint::skokGwintu() const
{
    return skokGwintu_;
}

double Gwint::srednicaOtworuWstepnego() const
{
    return srednicaOtworuWstepnego_;
}
