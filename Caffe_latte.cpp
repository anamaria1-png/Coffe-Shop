//
// Created by Ana-Maria on 10/12/2022.
//

#include "Caffe_latte.h"

Caffe_latte::Caffe_latte() {
    cream = 0;
    lapte = 0;
    zahar = 0;
}

Caffe_latte::Caffe_latte(const std::string &denumire, double pret, Data &expirare, Data &fabricatie, double cream, double lapte, double zahar) : Produs(denumire, pret, expirare, fabricatie), cream(cream), lapte(lapte), zahar(zahar) {}

Caffe_latte::Caffe_latte(const Caffe_latte &other) : Produs(other) {
    cream = other.cream;
    lapte = other.lapte;
    zahar = other.zahar;
}

Caffe_latte &Caffe_latte::operator=(const Caffe_latte &other) {
    lapte = other.lapte;
    zahar = other.zahar;
    cream = other.cream;
    denumire = other.denumire;
    pret = other.pret;
    expirare = other.expirare;
    fabricatie = other.fabricatie;
    return *this;
}


std::ostream &operator<<(std::ostream &os, const Caffe_latte &caffe_latte) {
    os << static_cast<const Produs &>(caffe_latte) << " frisca: " << caffe_latte.cream << " zahar: " << caffe_latte.zahar << " lapte: " << caffe_latte.lapte << " oraStartProgram: " << caffe_latte.lapte;
    return os;
}

Caffe_latte::~Caffe_latte() = default;
