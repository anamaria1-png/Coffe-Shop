//
// Created by Ana-Maria on 10/12/2022.
//

#include "Irish_coffee.h"

Irish_coffee::Irish_coffee()=default;

Irish_coffee::Irish_coffee(const std::string &denumire, double pret, Data &expirare, Data &fabricatie, double whiskey, double cream, double zahar) : Produs(denumire, pret, expirare, fabricatie), whiskey(whiskey), cream(cream), zahar(zahar) {}

Irish_coffee &Irish_coffee::operator=(const Irish_coffee &other) {
    whiskey = other.whiskey;
    cream = other.cream;
    zahar = other.zahar;
    denumire = other.denumire;
    pret = other.pret;
    expirare = other.expirare;
    fabricatie = other.fabricatie;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Irish_coffee &coffee) {
    os << static_cast<const Produs &>((const Produs &) coffee) << " whiskey: " << coffee.whiskey << " cream: " << coffee.cream
       << " zahar: " << coffee.zahar;
    return os;
}

Irish_coffee::Irish_coffee(const Irish_coffee &other): Produs(other) {
        whiskey = other.whiskey;
        cream = other.cream;
        zahar = other.zahar;
}

Irish_coffee::~Irish_coffee() = default;
