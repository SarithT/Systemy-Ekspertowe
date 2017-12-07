#include "gwint.h"
#include "nardzedziafactory.h"
#include "wiertlo.h"
#include <iostream>

NardzedziaFactory::NardzedziaFactory()
{
    fillVector();
}

void NardzedziaFactory::fillVector()
{
    Gwint EP09PM8(TypNarzedzia::Gwintownik, 8, 35, 90, 0, 8, 1.25, 6.8);
    Wiertlo D2000L2504(TypNarzedzia::Wiertlo, 20, 80, 80, 17500);
    narzedzia_.push_back(EP09PM8);
    narzedzia_.push_back(D2000L2504);
    std::cout << narzedzia_[9].maksymalnaGlebokoscSkrawania() << std::endl;

}

std::vector<Narzedzie> NardzedziaFactory::narzedzia() const
{
    return narzedzia_;
}
