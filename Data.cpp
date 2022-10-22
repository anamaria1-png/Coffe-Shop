//
// Created by Ana-Maria on 10/12/2022.
//

#include "Data.h"

Data::Data() {
    zi = 0;
    luna = 0;
    an = 0;
}

Data::Data(int zi, int luna, int an) : zi(zi), luna(luna), an(an) {}

Data::Data(const Data &other) = default;

Data &Data::operator=(const Data &other) {
    zi = other.zi;
    luna = other.luna;
    an = other.an;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Data &data) {
    os << "zi: " << data.zi << " luna: " << data.luna << " an: " << data.an;
    return os;
}

int Data::diferentaData(const Data &data) const { // presupunem ca lunile au 30 de zile
    int zile = 365 * an + 30 * (luna - 1) + zi - 1;
    int zileData = 365 * data.an + 30 * (data.luna - 1) + data.zi - 1;
    return zileData - zile;
}

Data::~Data() = default;
