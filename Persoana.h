//
// Created by Ana-Maria on 10/12/2022.
//

#ifndef OOP_PERSOANA_H
#define OOP_PERSOANA_H
#include<string>
#include<iostream>

class Persoana {
protected:
    std::string nume;
    std::string prenume;
    std::string oras;
    int varsta=18;
    ~Persoana();
public:
    Persoana();
    Persoana(std::string nume, std::string prenume, std::string oras, int varsta);
    Persoana(const Persoana &other);

    Persoana &operator=(const Persoana &other);

//    virtual void afisare(std::ostream &) const{
//    }
    friend std::ostream &operator<<(std::ostream &os, const Persoana &persoana);

};


#endif //OOP_PERSOANA_H
