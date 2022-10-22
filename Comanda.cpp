//
// Created by Ana-Maria on 10/12/2022.
//

#include "Comanda.h"

Comanda::Comanda() : data(*new Data), client(*new Client), angajat(*new Angajat) {}

Comanda::Comanda(const std::vector<Produs> &produse, Data &data, Client &client, Angajat &angajat) : produse(produse), data(data), client(client), angajat(angajat) {}

Comanda::Comanda(const Comanda &other) = default;

Comanda &Comanda::operator=(const Comanda &other) {
    produse = other.produse;
    data = other.data;
    client = other.client;
    angajat = other.angajat;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Comanda &comanda) {
    os << "produse: ";
    for(auto &it : comanda.produse) {
        os << it << " ";
    }
    os << "data: " << comanda.data << " client: " << comanda.client << " angajat: " << comanda.angajat;
    return os;
}

Comanda::~Comanda() = default;
