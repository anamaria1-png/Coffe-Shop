//
// Created by Ana-Maria on 11/10/2022.
//

#include "Cafenea.h"

void swap(Cafenea &obj1, Cafenea &obj2) {
    std::swap(obj1.caffees_latte, obj2.caffees_latte);
    std::swap(obj1.irish_coffees, obj2.irish_coffees);
    std::swap(obj1.expressos, obj2.expressos);
}

void Cafenea::dynamiccast() {
    Data f(1, 9, 2022);
    Data ex(1,12,2022);
    Produs *tempProdus = new Caffe_latte{"Latte", 14,f,ex,27,25,50, 30};
    if(auto* tempProdus2 = dynamic_cast<Expresso *>(tempProdus)) {
        //temp.o fucntie din derivata care sa nu fie in baza
        tempProdus2->amar();
        std::cout<<"Convertire la expresso amar reusit \n";
    }
    else {
        std::cout << "Convertire nereusita\n";
    }
    if(auto* tempProdus2 = dynamic_cast<Irish_coffee *>(tempProdus)) {
        tempProdus2->alcool();
        std::cout<<"Convertire la irish coffee reusita\n";
    }
    else {
        std::cout << "Convertire nereusita\n";
    }
    if(auto* tempProdus2 = dynamic_cast<Caffe_latte*>(tempProdus)) {

        tempProdus2->eliminareAlergeni();
        std::cout<<"Convertire la caffee latte reusita\n";
    }
    else {
        std::cout << "Convertire nereusita\n";
    }
    delete tempProdus;
}