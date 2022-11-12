//
// Created by Ana-Maria on 11/10/2022.
//

#include "Cafenea.h"

void swap(Cafenea &obj1, Cafenea &obj2) {
    std::swap(obj1.caffees_latte, obj2.caffees_latte);
    std::swap(obj1.irish_coffees, obj2.irish_coffees);
    std::swap(obj1.expressos, obj2.expressos);
}
