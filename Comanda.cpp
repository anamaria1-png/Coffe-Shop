//
// Created by Ana-Maria on 10/12/2022.
//

#include "Comanda.h"
#include "erori.h"
#include <utility>
#include <memory>

int Comanda::nrInregMax=0;

Comanda::Comanda() : nrInreg(nrInregMax), data(), client(), angajat() {
    nrInregMax++;
}

Comanda::Comanda(std::vector<Produs *> produse, Data &data, Client &client, Angajat &angajat) : nrInreg(nrInregMax),
                                                                                                produse(std::move(
                                                                                                        produse)),
                                                                                                data(data),
                                                                                                client(client),
                                                                                                angajat(angajat) {
    nrInregMax++;
}


Comanda::Comanda(const Comanda &other): nrInreg(nrInregMax), data(other.data),client(other.client),angajat(other.angajat){
    for(auto &produs:other.produse)
        produse.push_back(produs->clone());
}

Comanda &Comanda::operator=(const Comanda &other) {
    produse = other.produse;
    data = other.data;
    client = other.client;
    angajat = other.angajat;
    stareComanda = other.stareComanda;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Comanda &comanda) {
    os<<"nrInreg: "<<comanda.nrInreg;
    os << "produse: ";
    for (const auto &it: comanda.produse) {
        os << it << " ";
    }
    os << "data: " << comanda.data << " client: " << comanda.client << " angajat: " << comanda.angajat;
    return os;
}

void Comanda::verificare_comanda() {
    switch (stareComanda) {
        case PLASATA:
            break;
        case ANULATA:
            throw eroare_comanda_anulata();
        case INTARZIATA:
            throw eroare_comanda_incurcata();
    }
}

Comanda::~Comanda() {
    for (auto &produs: produse) { delete produs; }
}
