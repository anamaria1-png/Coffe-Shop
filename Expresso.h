//
// Created by Ana-Maria on 10/12/2022.
//

#ifndef OOP_EXPRESSO_H
#define OOP_EXPRESSO_H


#include "Produs.h"

class Expresso: public Produs {
    std::string aroma;
public:
    Expresso();
    Expresso(const std::string &denumire, double pret, Data &expirare, Data &fabricatie, int temperatura, std::string aroma);
    Expresso(const Expresso &other);
    Expresso& operator =(const Expresso &other);
    void incalzeste() override;
    friend std:: ostream & operator<<(std::ostream &os, const Expresso & expresso);
    ~Expresso() override;
};


#endif //OOP_EXPRESSO_H
