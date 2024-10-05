#ifndef KOLEJKA_PRIORYTETOWA_H
#define KOLEJKA_PRIORYTETOWA_H

#include <string>

struct Zadanie
{
    std::string tresc;
    int priorytet;
};

class KolejkaPriorytetowa
{
public:
    ~KolejkaPriorytetowa();

    void dodajZadanie(std::string zadanie, int priorytet);

    void usunNajwyzszeZadanie();

    Zadanie pobierzNajwyzszeZadanie();

    const Zadanie &zajrzyjDoNajwyzszegoZadania() const;

    bool czyPusta() const;

private:
    Zadanie *zadania;

    int dlugosc;
};

#endif // KOLEJKA_PRIORYTETOWA_H
