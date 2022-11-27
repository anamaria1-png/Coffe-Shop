//
// Created by Ana-Maria on 10/12/2022.
//

#include "Client.h"

int Client::next_id=0;

Client::Client() : id(next_id) {
    baniCheltuiti = 100;
    nrProduseCumparate = 2;
    next_id++;
}

Client::Client(const std::string &nume, const std::string &prenume, const std::string &oras, int varsta,
               int nrProduseCumparate, int baniCheltuiti) : Persoana(nume, prenume, oras, varsta),
                                                            nrProduseCumparate(nrProduseCumparate),
                                                            baniCheltuiti(baniCheltuiti), id(next_id) {

    next_id++;
}

Client::Client(const Client &other) : Persoana(other), id(next_id) {
    next_id++;
    nrProduseCumparate = other.nrProduseCumparate;
    baniCheltuiti = other.baniCheltuiti;
}

Client &Client::operator=(const Client &other) {
    nrProduseCumparate=other.nrProduseCumparate;
    baniCheltuiti = other.baniCheltuiti;
    nume = other.nume;
    prenume = other.prenume;
    oras = other.oras;
    varsta = other.varsta;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Client &client) {
    os << static_cast<const Persoana &>(client) << " nrProduseCumparate: " << client.nrProduseCumparate << " baniCheltuiti: " << client.baniCheltuiti;
    return os;
}

double Client::pretProdus(const Produs &produs, const Data &data) {
    double pret = produs.getPret();
    if(varsta > 60)
        pret=pret*0.9;
    if(data.diferentaData(produs.getExpirare()) < 0) // produsul e expirat
        return 0;
    if(data.diferentaData(produs.getExpirare()) <= 1)
        pret=pret*0.5;
    return pret;
}

Client::~Client() = default;
