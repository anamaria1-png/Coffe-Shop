//
// Created by Ana-Maria on 10/12/2022.
//

#include "Produs.h"

#include <utility>

int Produs::next_id=0;
Produs::Produs() : expirare(Data()), fabricatie(Data()), id(next_id) {
    cafeina = 10;
    pret = 0;
    temperatura = 15;
    next_id++;
}

Produs::Produs(int cafeina, std::string denumire, double pret, Data &expirare, Data &fabricatie, int temperatura)
        : cafeina(cafeina), denumire(
        std::move(denumire)), pret(pret), expirare(expirare), fabricatie(fabricatie), id(next_id),
          temperatura(temperatura) {
    next_id++;
}

Produs::Produs(const Produs &other) = default;

Produs &Produs::operator=(const Produs &other) {
    cafeina = other.cafeina;
    denumire = other.denumire;
    pret = other.pret;
    expirare = other.expirare;
    fabricatie = other.fabricatie;
    temperatura = other.temperatura;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Produs &produs) {
    os << "cafeina" << produs.cafeina << "denumire: " << produs.denumire << " pret: " << produs.pret << " expirare: "
       << produs.expirare
       << " fabricatie: " << produs.fabricatie << produs.id;
    return os;
}

//double Produs::getPret() const {
// return pret;
//}

//const Data &Produs::getExpirare() const {
// return expirare;
//}

std::string Produs::stareProdus(const Data &data) {
    if (fabricatie.diferentaData(data) < 0)
        return "Produsul nu e inca fabricat";
    else if (expirare.diferentaData(data) < 0)
        return "Produsul e valabil";
    else return "Produsul e expirat";
}

void Produs::incalzeste() {
    if (temperatura <10)denumire="Iced-coffee";
    std::cout<<denumire<<" produs";
}

void Produs::eliminareAlergeni() {
    if (temperatura > 27)cafeina = 0;
    std::cout << "Cafeina eliminata din produs\n";

}

Produs::~Produs() = default;
