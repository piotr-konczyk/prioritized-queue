#include "KolejkaPriorytetowa.h"

KolejkaPriorytetowa::~KolejkaPriorytetowa()
{
    delete[] zadania;
    zadania = nullptr;
}

void KolejkaPriorytetowa::dodajZadanie(std::string zadanie, int priorytet)
{
    dlugosc++;

    Zadanie *nowe_zadania = new Zadanie[dlugosc];
    for (int i = 0; i < dlugosc - 1; i++)
    {
        nowe_zadania[i] = zadania[i];
    }
    nowe_zadania[dlugosc - 1] = {zadanie, priorytet};

    delete[] zadania;
    zadania = nowe_zadania;
}

void KolejkaPriorytetowa::usunNajwyzszeZadanie()
{
    int maks_indeks = -1;
    int maks_priorytet = -1;

    for (int i = 0; i < dlugosc; i++)
    {
        if (zadania[i].priorytet > maks_priorytet)
        {
            maks_priorytet = zadania[i].priorytet;
            maks_indeks = i;
        }
    }

    dlugosc--;

    for (int i = maks_indeks; i < dlugosc; i++)
    {
        zadania[i] = zadania[i + 1];
    }

    Zadanie *nowe_zadania = new Zadanie[dlugosc];

    for (int i = 0; i < dlugosc; i++)
    {
        nowe_zadania[i] = zadania[i];
    }

    delete[] zadania;
    zadania = nowe_zadania;
}

Zadanie KolejkaPriorytetowa::pobierzNajwyzszeZadanie()
{
    int maks_indeks = -1;
    int maks_priorytet = -1;

    for (int i = 0; i < dlugosc; i++)
    {
        if (zadania[i].priorytet > maks_priorytet)
        {
            maks_priorytet = zadania[i].priorytet;
            maks_indeks = i;
        }
    }

    Zadanie zadanie = zadania[maks_indeks];

    dlugosc--;

    for (int i = maks_indeks; i < dlugosc; i++)
    {
        zadania[i] = zadania[i + 1];
    }

    Zadanie *nowe_zadania = new Zadanie[dlugosc];

    for (int i = 0; i < dlugosc; i++)
    {
        nowe_zadania[i] = zadania[i];
    }

    delete[] zadania;
    zadania = nowe_zadania;

    return zadanie;
}

const Zadanie &KolejkaPriorytetowa::zajrzyjDoNajwyzszegoZadania() const
{
    int maks_indeks = -1;
    int maks_priorytet = -1;

    for (int i = 0; i < dlugosc; i++)
    {
        if (zadania[i].priorytet > maks_priorytet)
        {
            maks_priorytet = zadania[i].priorytet;
            maks_indeks = i;
        }
    }

    return zadania[maks_indeks];
}

bool KolejkaPriorytetowa::czyPusta() const
{
    return dlugosc == 0;
}
