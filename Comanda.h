//
// Created by Ana-Maria on 10/12/2022.
//

#ifndef OOP_COMANDA_H
#define OOP_COMANDA_H
#include "Produs.h"
#include "Data.h"
#include "Client.h"
#include "Angajat.h"
#include<iostream>
#include<string>
#include<vector>
#include <memory>
#include <unordered_set>

class Comanda {
private:
    const int nrInreg;
    static int nrInregMax;
    std::vector<std::shared_ptr<Produs>> produse;
    Data data;
    Client client;
    Angajat angajat;
    enum stare{PLASATA, ANULATA, INTARZIATA};
    stare stareComanda=PLASATA;
public:
    Comanda();
    Comanda(std::vector<std::shared_ptr<Produs>> produse, Data &data, Client &client, Angajat &angajat);
    Comanda(const Comanda &other);
    Comanda& operator=(const Comanda &other);
    friend std::ostream &operator<<(std::ostream &os, const Comanda &comanda);
    virtual ~Comanda();
    void verificare_comanda();
};


#endif //OOP_COMANDA_H
