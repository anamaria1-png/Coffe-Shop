//
// Created by Ana-Maria on 10/12/2022.
//

#ifndef OOP_PRODUS_H
#define OOP_PRODUS_H
#include<iostream>
#include<string>
#include<vector>
#include"Data.h"


class Produs {
protected:
    std::string denumire;
    double pret;
    Data expirare;
    Data fabricatie;
    int id;
    static int next_id;
    int temperatura;
public:
    Produs();
    Produs(std::string denumire, double pret, Data &expirare, Data &fabricatie,int temperatura);
    Produs(const Produs &other);
    Produs& operator=(const Produs &other);
    double getPret() const;
    std::string stareProdus(const Data&data);
    const Data &getExpirare() const;
    virtual void incalzeste();
    virtual Produs*clone() const=0;
    friend std::ostream &operator<<(std::ostream &os, const Produs &produs);
    friend void swap(Produs& obj1,Produs& obj2);
    virtual ~Produs();
    void eliminareAlergeni();
};


#endif //OOP_PRODUS_H
