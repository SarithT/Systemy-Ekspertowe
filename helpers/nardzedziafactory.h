#ifndef NARDZEDZIAFACTORY_H
#define NARDZEDZIAFACTORY_H

#include "narzedzie.h"
#include "vector"


class NardzedziaFactory
{
public:
    NardzedziaFactory();
    std::vector<Narzedzie> narzedzia() const;

private:
    void fillVector();
    std::vector<Narzedzie> narzedzia_;
};

#endif // NARDZEDZIAFACTORY_H
