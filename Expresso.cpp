//
// Created by Ana-Maria on 10/12/2022.
//

#include "Expresso.h"

#include <utility>

Expresso::Expresso() = default;

Expresso::Expresso(const std::string &denumire, double pret, Data &expirare, Data &fabricatie, std::string aroma) : Produs(denumire, pret, expirare, fabricatie), aroma(std::move(aroma)) {}

Expresso::Expresso(const Expresso &other) = default;

Expresso &Expresso::operator=(const Expresso &other) {
    aroma = other.aroma;
    denumire = other.denumire;
    pret = other.pret;
    expirare = other.expirare;
    fabricatie = other.fabricatie;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Expresso &expresso) {
    os << static_cast<const Produs &>(expresso) << " aroma: " << expresso.aroma;
    return os;
}

Expresso::~Expresso() = default;
