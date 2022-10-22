//
// Created by Ana-Maria on 10/12/2022.
//

#include "Persoana.h"

Persoana::Persoana() {
    varsta = 0;
}

Persoana::Persoana(const std::string &nume, const std::string &prenume, const std::string &oras, int varsta) : nume(nume), prenume(prenume), oras(oras), varsta(varsta) {}

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

