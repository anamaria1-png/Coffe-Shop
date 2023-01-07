//
// Created by Ana-Maria on 10/12/2022.
//

#include "Expresso.h"

#include <utility>

Expresso::Expresso() = default;

Expresso::Expresso(int cafeina, const std::string &denumire, double pret, Data &expirare, Data &fabricatie,
                   int temperatura, std::string aroma) : Produs(cafeina, denumire, pret, expirare, fabricatie,
                                                                temperatura), aroma(std::move(aroma)) {}

Expresso &Expresso::operator=(const Expresso &other) {
    aroma = other.aroma;
    cafeina = other.cafeina;
    denumire = other.denumire;
    pret = other.pret;
    expirare = other.expirare;
    fabricatie = other.fabricatie;
    return *this;
}

Expresso::Expresso(const Expresso &other) : Produs(other) {
    aroma = other.aroma;

}


std::ostream &operator<<(std::ostream &os, const Expresso &expresso) {
    os << static_cast<const Produs &>((const Produs &) expresso) << " aroma: " << expresso.aroma;
    return os;
}

void Expresso::incalzeste() {

    if (temperatura > 30)std::cout << "Expresso este incalzit";
    else std::cout << "Expresso-ul s-a racit";
}

void Expresso::amar() {
    if (aroma == "amara")
        denumire = "Cafea cu aroma amara";
    std::cout << denumire;
}

std::shared_ptr<Produs> Expresso::clone() const {
    return std::make_shared<Expresso>(*this);
}

void Expresso::eliminareAlergeni() {
    if (temperatura > 27)cafeina = 0;
    aroma = "fara aroma de cafea";
    std::cout << aroma;
}

Expresso::~Expresso() = default;
