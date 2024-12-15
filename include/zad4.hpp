#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector<Tagliatelle>& f)
{
    double M = 0;
    int    licznik = 1;
    for (auto it = f.rbegin(); it != f.rend(); it++, licznik++)
    {
        M += it->ileMaki(licznik);
    }
    if (M > 100)
    {
        throw 1;
    }
    else if (M > 50)
    {
        throw 2.0;
    }
    return M;

}