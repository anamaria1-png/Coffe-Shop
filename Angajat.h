//
// Created by Ana-Maria on 10/12/2022.
//

#ifndef OOP_ANGAJAT_H
#define OOP_ANGAJAT_H

#include <ostream>
#include "Persoana.h"

template<typename T>
class Angajat;

template<typename T>
std::ostream &operator<<(std::ostream &os, const Angajat<T> &angajat);

template<typename T>
class Angajat : public Persoana {
private:
    double salariu;
    bool lucreazaInWeekend;
    bool lucreazaPartTime;
    int oraStartProgram;
    T identificator;

public:
    static Angajat<T> *
    createAngajat(const std::string &nume, const std::string &prenume, const std::string &oras, int varsta,
                  double salariu, bool lucreazaInWeekend, bool lucreazaPartTime, int oraStartProgram,
                  T identificator);

    Angajat(const std::string &nume, const std::string &prenume, const std::string &oras, int varsta, double salariu,
            bool lucreazaInWeekend, bool lucreazaPartTime, int oraStartProgram, T identificator);

    Angajat(const Angajat<T> &other);

    Angajat<T> &operator=(const Angajat<T> &other);

    void printidentificator();

    void sum(const Angajat<T> &b);

    friend std::ostream &operator<<<>(std::ostream &os, const Angajat<T> &angajat);

    ~Angajat() = default;
};




/*class Angajat : public Persoana {
private:
    double salariu=2000;
    bool lucreazaInWeekend=false;
    bool lucreazaPartTime=true;
    int oraStartProgram = 8;
    const int nr_angajat;
    static int next_nr_angajat;
public:
    Angajat();// reda un obiect gol
    Angajat(const std::string &nume, const std::string &prenume, const std::string &oras, int varsta, double salariu, bool lucreazaInWeekend, bool lucreazaPartTime, int oraStartProgram);
    Angajat(const Angajat &other);// copiaza obiecte
    Angajat& operator=(const Angajat &other);// copiaza operatiile de tip =
    friend std::ostream &operator<<(std::ostream &os, const Angajat &angajat);// operator << de afisare
    ~Angajat();
};*/

#include "Angajat.cpp"
#endif //OOP_ANGAJAT_H
