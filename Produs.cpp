//
// Created by Ana-Maria on 10/12/2022.
//

#include "Produs.h"

#include <utility>

int Produs::next_id=0;
Produs::Produs() : expirare(*new Data()), fabricatie(*new Data()) {
    pret = 0;
    temperatura=15;
    id=next_id;
    next_id++;
}

Produs::Produs(std::string denumire, double pret, Data &expirare, Data &fabricatie, int temperatura) : denumire(std::move(denumire)), pret(pret), expirare(expirare), fabricatie(fabricatie),temperatura(temperatura){id=next_id;
    next_id++;}

Produs::Produs(const Produs &other) = default;

Produs &Produs::operator=(const Produs &other) {
    denumire = other.denumire;
    pret = other.pret;
    expirare = other.expirare;
    fabricatie = other.fabricatie;
    temperatura=other.temperatura;
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

void Produs::incalzeste() {
    if (temperatura <10)denumire="Iced-coffee";
    std::cout<<denumire<<" produs";
}

Produs::~Produs() = default;
