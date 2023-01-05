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
    int cafeina = 15;
    std::string denumire;
    double pret=15;
    Data expirare;
    Data fabricatie;
    const int id;
    static int next_id;
    int temperatura=27;
public:
    Produs();

    Produs(int cafeina, std::string denumire, double pret, Data &expirare, Data &fabricatie, int temperatura);

    Produs(const Produs &other);

    Produs &operator=(const Produs &other);

    //[nodiscard]]double getPret() const;

    std::string stareProdus(const Data &data);

    //[[nodiscard]]const Data &getExpirare() const;

    virtual void incalzeste();

    [[nodiscard]]virtual Produs *clone() const = 0;

    friend std::ostream &operator<<(std::ostream &os, const Produs &produs);
    virtual ~Produs();
    virtual void eliminareAlergeni();
};


#endif //OOP_PRODUS_H
