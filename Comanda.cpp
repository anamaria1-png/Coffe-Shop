//
// Created by Ana-Maria on 10/12/2022.
//

#include "Comanda.h"
#include "erori.h"
#include <utility>
#include <memory>

int Comanda::nrInregMax=0;

Comanda::Comanda() : data(), client(), angajat() {nrInreg= nrInregMax;
nrInregMax++;
}

Comanda::Comanda(std::vector<Produs*> produse, Data &data, Client &client, Angajat &angajat) : produse(std::move(produse)), data(data), client(client), angajat(angajat) {nrInreg= nrInregMax;
    nrInregMax++;}

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
    for (const auto &it: comanda.produse)
        os << it << " ";
    os << "data: " << comanda.data << " client: " << comanda.client << " angajat: " << comanda.angajat;
    return os;
}

void Comanda::verificare_comanda(const std::shared_ptr<Comanda> &comanda1, const std::shared_ptr<Comanda> &comanda2) {
    if (comanda1->getStareComanda() == Comanda::ANULATA)
        throw new class comanda_anulata_client();

    if(comanda2->getStareComanda() == Comanda::ANULATA) {
        throw new class comanda_anulata_intarziata();
    }

}
/*bool operator==(const Comanda& comanda, const Comanda& comanda2) {
    if(port.tara == port2.tara && port.oras == port2.oras)
        return true;
    return false;
}*/

void Comanda::comanda_anulata_client() {
    this->stareComanda=ANULATA;

}

void Comanda::comanda_anulata_intarziata() {
    this->stareComanda=INTARZIATA;
}

int Comanda::getStareComanda() const {
    return stareComanda;
}

Comanda::~Comanda() = default;
