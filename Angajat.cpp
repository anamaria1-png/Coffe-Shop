//
// Created by Ana-Maria on 10/12/2022.
//

#include "Angajat.h"

template<typename T>
Angajat<T>::Angajat(const Angajat &other) : Persoana(other) {
    salariu = other.salariu;
    lucreazaInWeekend = other.lucreazaInWeekend;
    lucreazaPartTime = other.lucreazaPartTime;
    oraStartProgram = other.oraStartProgram;
    templateAtribut = other.templateAtribut;
}

template<typename T>
Angajat<T> &Angajat<T>::operator=(const Angajat &other) {
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

template<typename T>
std::ostream &operator<<(std::ostream &os, const Angajat<T> &angajat) {
    os << static_cast<const Persoana &>(angajat) << " salariu: " << angajat.salariu << " lucreazaInWeekend: "
       << angajat.lucreazaInWeekend << " lucreazaPartTime: " << angajat.lucreazaPartTime << " oraStartProgram: "
       << angajat.oraStartProgram << " templateAtribut: " << angajat.templateAtribut;
    os << angajat.nr_angajat;
    return os;
}


template<typename T>
T Angajat<T>::getTemplateAtribut() const {
    return templateAtribut;
}


template<typename T>
Angajat<T> *
Angajat<T>::createAngajat(const std::string &nume, const std::string &prenume, const std::string &oras, int varsta,
                          double salariu, bool lucreazaInWeekend, bool lucreazaPartTime, int oraStartProgram,
                          T templateAttribute) {
    return new Angajat<T>(nume, prenume, oras, varsta, salariu, lucreazaInWeekend, lucreazaPartTime, oraStartProgram,
                          templateAttribute);
}

template<typename T>
void Angajat<T>::printTemplateAtribut() {
    std::cout << "Template attribute: " << templateAtribut << std::endl;
}

template<typename T>
T sum(T a, T b) {
    return a + b;
}

template<typename T>
class Angajat;

template<typename T>
void printSum(const Angajat<T> &a, const Angajat<T> &b) {
    std::cout << "Sum of template attributes: " << sum(a.getTemplateAtribut(), b.getTemplateAtribut()) << std::endl;
}

/*int Angajat::next_nr_angajat = 0;

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
*/