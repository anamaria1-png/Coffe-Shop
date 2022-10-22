//
// Created by Ana-Maria on 10/12/2022.
//

#ifndef OOP_ANGAJAT_H
#define OOP_ANGAJAT_H

#include <ostream>
#include "Persoana.h"

class Angajat : public Persoana {
private:
    double salariu;
    bool lucreazaInWeekend;
    bool lucreazaPartTime;
    int oraStartProgram;
public:
    Angajat();// reda un obiect gol
    Angajat(const std::string &nume, const std::string &prenume, const std::string &oras, int varsta, double salariu, bool lucreazaInWeekend, bool lucreazaPartTime, int oraStartProgram);
    Angajat(const Angajat &other);// copiaza obiecte
    Angajat& operator=(const Angajat &other);// copiaza operatiile de tip =
    friend std::ostream &operator<<(std::ostream &os, const Angajat &angajat);// operator << de afisare
    ~Angajat() override;
};


#endif //OOP_ANGAJAT_H
