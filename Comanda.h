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
    int nrInreg;
    static int nrInregMax;
    std::vector<Produs*> produse;
    Data data;
    Client client;
    Angajat angajat;
    bool ANULATA, INTARZIATA;
    char stareComanda;
public:
    Comanda();
    Comanda(std::vector<Produs*> produse, Data &data, Client &client, Angajat &angajat);
    Comanda(const Comanda& other);
    Comanda& operator=(const Comanda &other);
    friend std::ostream &operator<<(std::ostream &os, const Comanda &comanda);
    virtual ~Comanda();
    [[nodiscard]] int getStareComanda() const;
    void verificare_comanda(const std::shared_ptr<Comanda> &comanda1, const std::shared_ptr<Comanda> &comanda2);
    void comanda_anulata_client();
    void comanda_anulata_intarziata();
};


#endif //OOP_COMANDA_H
