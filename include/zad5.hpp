#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>



template < typename Iterator >
void sortujTagliatelle(Iterator poczatek, Iterator koniec)
{
    std::sort(poczatek, koniec, [](const Tagliatelle& a, const Tagliatelle& b) {
        return a.ileMaki(1) > b.ileMaki(1); // Sortowanie malej¹ce wed³ug ileMaki dla 1 porcji
    });
}
