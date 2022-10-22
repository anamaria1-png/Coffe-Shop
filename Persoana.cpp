//
// Created by Ana-Maria on 10/12/2022.
//

#include "Persoana.h"

#include <utility>

Persoana::Persoana() {
    varsta = 0;
}

Persoana::Persoana(std::string nume, std::string prenume, std::string oras, int varsta) : nume(std::move(nume)), prenume(std::move(prenume)), oras(std::move(oras)), varsta(varsta) {}

Persoana::Persoana(const Persoana &other) = default;

Persoana& Persoana::operator=(const Persoana &other) {
    nume = other.nume;
    prenume = other.prenume;
    oras = other.oras;
    varsta = other.varsta;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Persoana &persoana) {
    os << "nume: " << persoana.nume << " prenume: " << persoana.prenume << " oras: " << persoana.oras << " varsta: " << persoana.varsta;
    return os;
}

Persoana::~Persoana() = default;

