#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)
class Makaron {
public:
    virtual ~Makaron() = default;
    virtual double ileMaki(unsigned P) const = 0;

    static Makaron* gotujMakaron(const std::string& tekst);
};



// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle : public Makaron
{
private:
    double              L; // Długość kawałka makaronu
    double              W; // Szerokość kawałka makaronu
    double              R; // Proporcja jajek do mąki
    static const double C; // Stała, której definicja znajdzie się w kodzie z testami

public:
    // Konstruktor parametryczny
    Tagliatelle(double dlugosc, double szerokosc, double proporcja)
        : L(dlugosc), W(szerokosc), R(proporcja)
    {}

    // Konstruktor domyślny
    Tagliatelle() : L(0.5), W(0.5), R(0.5) {}

    // Metoda obliczająca masę mąki potrzebną do przygotowania liczby porcji
    double ileMaki(unsigned P) const { return P * L * W * (1.0 - R) * C; }
};