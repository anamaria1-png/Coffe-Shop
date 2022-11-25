//
// Created by Ana-Maria on 11/10/2022.
//

#ifndef OOP_CAFENEA_H
#define OOP_CAFENEA_H
#include<iostream>
#include<vector>
#include <memory>
#include "Caffe_latte.h"
#include "Irish_coffee.h"
#include "Expresso.h"


class Cafenea {
    std::vector<std::shared_ptr<Caffe_latte>> caffees_latte;
    std::vector<std::shared_ptr<Irish_coffee>> irish_coffees;
    std::vector<std::shared_ptr<Expresso>>expressos;

public:
    Cafenea();
    Cafenea& operator=(const Cafenea &obj);
    void dynamiccast();
    friend void swap(Cafenea& obj1, Cafenea& obj2);
    virtual ~Cafenea();

};


#endif //OOP_CAFENEA_H
