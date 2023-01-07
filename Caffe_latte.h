//
// Created by Ana-Maria on 10/12/2022.
//

#ifndef OOP_CAFFE_LATTE_H
#define OOP_CAFFE_LATTE_H

#include <ostream>
#include "Produs.h"


class Caffe_latte : public Produs {
    double cream=0;
    double lapte=20;
    double zahar = 0;
public:
    Caffe_latte();

    Caffe_latte(int cafeina, const std::string &denumire, double pret, Data &expirare, Data &fabricatie,
                int temperatura, double cream, double lapte, double zahar);

    Caffe_latte(const Caffe_latte &other);

    std::shared_ptr<Produs> clone() const override;

    void incalzeste() override;

    //[[nodiscard]] Produs *clone() const override;
    void eliminareAlergeni() override;

    friend std::ostream &operator<<(std::ostream &os, const Caffe_latte &latte);

    ~Caffe_latte() override;
};


#endif //OOP_CAFFE_LATTE_H
