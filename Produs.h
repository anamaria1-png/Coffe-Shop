//
// Created by Ana-Maria on 10/12/2022.
//

#ifndef OOP_PRODUS_H
#define OOP_PRODUS_H
#include<iostream>
#include<string>
#include"Data.h"

class Produs {
protected:
    std::string denumire;
    double pret;
    Data& expirare;
    Data& fabricatie;
public:
    Produs();
    Produs(std::string denumire, double pret, Data &expirare, Data &fabricatie);
    Produs(const Produs &other);
    Produs& operator=(const Produs &other);
    double getPret() const;
    std::string stareProdus(const Data&data);
    const Data &getExpirare() const;
    friend std::ostream &operator<<(std::ostream &os, const Produs &produs);
    virtual ~Produs();
};


#endif //OOP_PRODUS_H
