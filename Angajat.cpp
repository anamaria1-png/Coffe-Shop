//
// Created by Ana-Maria on 10/12/2022.
//

#include "Angajat.h"

int Angajat::next_nr_angajat = 0;

Angajat::Angajat() : nr_angajat(next_nr_angajat) {

    salariu = 2000;
    lucreazaInWeekend = false;
    lucreazaPartTime = true;
    oraStartProgram = 9;
    next_nr_angajat++;
}

Angajat::Angajat(const std::string &nume, const std::string &prenume, const std::string &oras, int varsta,
                 double salariu, bool lucreazaInWeekend, bool lucreazaPartTime, int oraStartProgram) : Persoana(nume,
                                                                                                                prenume,
                                                                                                                oras,
                                                                                                                varsta),
                                                                                                       salariu(salariu),
                                                                                                       lucreazaInWeekend(
                                                                                                               lucreazaInWeekend),
                                                                                                       lucreazaPartTime(
                                                                                                               lucreazaPartTime),
                                                                                                       oraStartProgram(
                                                                                                               oraStartProgram),
                                                                                                       nr_angajat(
                                                                                                               next_nr_angajat) {
    next_nr_angajat++;
}

Angajat::Angajat(const Angajat &other) : Persoana(other), nr_angajat(next_nr_angajat) {
    next_nr_angajat++;
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
    os << static_cast<const Persoana &>(angajat) << " salariu: " << angajat.salariu << " lucreazaInWeekend: "
       << angajat.lucreazaInWeekend << " lucreazaPartTime: " << angajat.lucreazaPartTime << " oraStartProgram: "
       << angajat.oraStartProgram;
    os << angajat.nr_angajat;
    return os;
}

Angajat::~Angajat() = default;
