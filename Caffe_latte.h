//
// Created by Ana-Maria on 10/12/2022.
//

#ifndef OOP_CAFFE_LATTE_H
#define OOP_CAFFE_LATTE_H

#include <ostream>
#include "Produs.h"


class Caffe_latte : public Produs {
    double cream;
    double lapte;
    double zahar;
public:
    Caffe_latte();
    Caffe_latte(const std::string &denumire, double pret, Data &expirare, Data &fabricatie,int temperatura, double cream, double lapte, double zahar);
    Caffe_latte(const Caffe_latte& other);
    void incalzeste() override;
    friend std::ostream &operator<<(std::ostream &os, const Caffe_latte &latte);
    ~Caffe_latte() override;
};


#endif //OOP_CAFFE_LATTE_H
