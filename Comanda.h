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

class Comanda {
private:
    std::vector<Produs> produse;
    Data& data;
    Client& client;
    Angajat& angajat;
public:
    Comanda();
    Comanda(std::vector<Produs> produse, Data &data, Client &client, Angajat &angajat);
    Comanda(const Comanda& other);
    Comanda& operator=(const Comanda &other);
    friend std::ostream &operator<<(std::ostream &os, const Comanda &comanda);
    virtual ~Comanda();
};


#endif //OOP_COMANDA_H
