#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem
template <typename Sos>
std::size_t polejSosem(const Tagliatelle& makaron, const Sos& sos) //makaron i sos - sta�a referencja
{
    return sos.polej(makaron); //wynik wywo�ania metody polej drugiego argumentu na pierwszym argumencie
}