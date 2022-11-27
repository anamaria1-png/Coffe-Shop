//
// Created by Ana-Maria on 10/12/2022.
//

#ifndef OOP_CLIENT_H
#define OOP_CLIENT_H
#include<list>
#include <ostream>
#include "Persoana.h"
#include "Produs.h"

class Client : public Persoana {
    int nrProduseCumparate=3;
    int baniCheltuiti=400;
    int id;
    static int next_id;
public:
    Client();
    Client(const std::string &nume, const std::string &prenume, const std::string &oras, int varsta, int nrProduseCumparate, int baniCheltuiti);
    Client(const Client &other);
    double pretProdus(const Produs &produs, const Data &data);
    Client& operator=(const Client &other);
    friend std::ostream &operator<<(std::ostream &os, const Client &client);
    ~Client() override;
};


#endif //OOP_CLIENT_H
