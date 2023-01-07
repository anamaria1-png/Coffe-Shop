//
// Created by Ana-Maria on 11/10/2022.
//

#include "Cafenea.h"
Cafenea::Cafenea() = default;

Cafenea &Cafenea::operator=(const Cafenea&obj) {
    Cafenea temp(obj);
    swap(*this, temp);
    return *this;
}

Cafenea::Cafenea(const Cafenea &other) {
   for(auto &produs:other.produse)
       produse.push_back(produs->clone());
}

void swap(Cafenea &obj1, Cafenea &obj2) {
    std::swap(obj1.produse, obj2.produse);

}

void Cafenea::servire_speciala(Produs *tempProdus) {
    Data f(1, 9, 2022);
    Data ex(1, 12, 2022);
    if (auto *tempProdus2 = dynamic_cast<Expresso *>(tempProdus)) {
        //temp.o functie din derivata care sa nu fie in baza
        tempProdus2->amar();
        std::cout << "Convertire la expresso amar reusit \n";
    } else {
        std::cout << "Convertire nereusita\n";
    }


}

Cafenea::~Cafenea() {

//    for (auto &produs: produse) { delete produs; }
}

void Cafenea::insert(Produs &prod) {
    produse.push_back(prod.clone());
}

Produs &Cafenea::search(std::string text) {
    for (auto &pro: produse)
        if (pro->getDenumire().contains(text))
            return *pro;
    throw eroare_comanda{};
}

