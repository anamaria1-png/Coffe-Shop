//
// Created by Ana-Maria on 10/12/2022.
//

#include "Produs.h"

Produs::Produs() : expirare(*new Data()), fabricatie(*new Data()) {}

Produs::Produs(const std::string &denumire, double pret, Data &expirare, Data &fabricatie) : denumire(denumire), pret(pret), expirare(expirare), fabricatie(fabricatie) {}

Produs::Produs(const Produs &other) : expirare(other.expirare), fabricatie(other.fabricatie) {
    denumire = other.denumire;
    pret = other.pret;
}

Produs &Produs::operator=(const Produs &other) {
    denumire = other.denumire;
    pret = other.pret;
    expirare = other.expirare;
    fabricatie = other.fabricatie;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Produs &produs) {
    os << "denumire: " << produs.denumire << " pret: " << produs.pret << " expirare: " << produs.expirare << " fabricatie: " << produs.fabricatie;
    return os;
}

double Produs::getPret() const {
    return pret;
}

const Data &Produs::getExpirare() const {
    return expirare;
}

std::string Produs::stareProdus(const Data &data) {
    if(fabricatie.diferentaData(data) < 0)
        return "Produsul nu e inca fabricat";
    else if(expirare.diferentaData(data) < 0)
        return "Produsul e valabil";
    else return "Produsul e expirat";
}


Produs::~Produs() = default;
