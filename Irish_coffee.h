//
// Created by Ana-Maria on 10/12/2022.
//

#ifndef OOP_IRISH_COFFEE_H
#define OOP_IRISH_COFFEE_H

#include <ostream>
#include "Produs.h"

class Irish_coffee : public Produs{
    double whiskey;
    double cream;
    double zahar;
public:
    Irish_coffee();
    Irish_coffee(const std::string &denumire, double pret, Data &expirare, Data &fabricatie, double whiskey, double cream, double zahar);
    Irish_coffee(const Irish_coffee& other);
    Irish_coffee& operator=(const Irish_coffee &other);
    void incalzeste() override{};
    friend std::ostream &operator<<(std::ostream &os, const Irish_coffee &coffee);
    ~Irish_coffee() override;
};


#endif //OOP_IRISH_COFFEE_H
