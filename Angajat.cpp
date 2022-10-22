//
// Created by Ana-Maria on 10/12/2022.
//

#include "Angajat.h"


Angajat::Angajat() = default;

Angajat::Angajat(const std::string &nume, const std::string &prenume, const std::string &oras, int varsta, double salariu, bool lucreazaInWeekend, bool lucreazaPartTime, int oraStartProgram) : Persoana(nume, prenume, oras, varsta), salariu(salariu), lucreazaInWeekend(lucreazaInWeekend), lucreazaPartTime(lucreazaPartTime), oraStartProgram(oraStartProgram) {}

Angajat::Angajat(const Angajat &other) : Persoana(other) {
    salariu = other.salariu;
    lucreazaInWeekend = other.lucreazaInWeekend;
    lucreazaPartTime = other.lucreazaPartTime;
    oraStartProgram = other.oraStartProgram;
}

Angajat &Angajat::operator=(const Angajat &other) {
    salariu = other.salariu;
    lucreazaInWeekend = other.lucreazaInWeekend;
    lucreazaPartTime = other.lucreazaPartTime;
    oraStartProgram = other.oraStartProgram;
    nume = other.nume;
    prenume = other.prenume;
    oras = other.oras;
    varsta = other.varsta;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Angajat &angajat) {
    os << static_cast<const Persoana &>(angajat) << " salariu: " << angajat.salariu << " lucreazaInWeekend: " << angajat.lucreazaInWeekend << " lucreazaPartTime: " << angajat.lucreazaPartTime << " oraStartProgram: " << angajat.oraStartProgram;
    return os;
}

Angajat::~Angajat() = default;
