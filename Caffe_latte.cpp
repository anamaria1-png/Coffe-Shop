//
// Created by Ana-Maria on 10/12/2022.
//

#include "Caffe_latte.h"

Caffe_latte::Caffe_latte()=default;

Caffe_latte::Caffe_latte(const std::string &denumire, double pret, Data &expirare, Data &fabricatie, int temperatura, double cream,
                         double lapte, double zahar) : Produs(denumire, pret, expirare, fabricatie, temperatura), cream(cream),
                                                       lapte(lapte), zahar(zahar) {}

Caffe_latte::Caffe_latte(const Caffe_latte &other): Produs(other) {
        lapte = other.lapte;
        cream = other.cream;
        zahar = other.zahar;
}

std::ostream &operator<<(std::ostream &os, const Caffe_latte &latte) {
    os << static_cast<const Produs &>(latte) << " cream: " << latte.cream << " lapte: " << latte.lapte << " zahar: " << latte.zahar;
    return os;
}

void Caffe_latte::incalzeste() {
    temperatura=27;
    std::cout<<"Caffee latte la temperatura camerei\n";
}

void Caffe_latte::eliminareAlergeni() {
    if(denumire=="Produsul poate contine lactoza")
        lapte=0;
     std::cout<<"Laptele a fost eliminat din cafea\n";
}

Produs *Caffe_latte::clone() const {
    return new Caffe_latte(*this);
}

Caffe_latte::~Caffe_latte()=default;


