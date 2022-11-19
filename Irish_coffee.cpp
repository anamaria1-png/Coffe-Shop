//
// Created by Ana-Maria on 10/12/2022.
//

#include "Irish_coffee.h"

Irish_coffee::Irish_coffee()=default;

Irish_coffee::Irish_coffee(const std::string &denumire, double pret, Data &expirare, Data &fabricatie, int temperatura, double whiskey, double cream, double zahar) : Produs(denumire, pret, expirare, fabricatie, temperatura), whiskey(whiskey), cream(cream), zahar(zahar) {}

Irish_coffee &Irish_coffee::operator=(const Irish_coffee &other) {
    whiskey = other.whiskey;
    cream = other.cream;
    zahar = other.zahar;
    denumire = other.denumire;
    pret = other.pret;
    expirare = other.expirare;
    fabricatie = other.fabricatie;
    temperatura=other.temperatura;
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

void Irish_coffee::incalzeste() {
    if(temperatura <15)std::cout<<"Irish coffee-ul este ice";
    else std::cout<<"Irish coffee cald";
}

Irish_coffee::~Irish_coffee() = default;
