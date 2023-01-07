//
// Created by Ana-Maria on 10/12/2022.
//

#ifndef OOP_IRISH_COFFEE_H
#define OOP_IRISH_COFFEE_H

#include <ostream>
#include "Produs.h"

class Irish_coffee : public Produs{
    double whiskey=5;
    double cream=0;
    double zahar=0;
public:
    Irish_coffee();

    Irish_coffee(int cafeina, const std::string &denumire, double pret, Data &expirare, Data &fabricatie,
                 int temperatura, double whiskey, double cream, double zahar);

    Irish_coffee(const Irish_coffee &other);
    Irish_coffee& operator=(const Irish_coffee &other);

    void incalzeste() override;
    void eliminareAlergeni() override;

    std::shared_ptr<Produs> clone() const override;

    //[[nodiscard]]Produs *clone() const override;
    void alcool();
    friend std::ostream &operator<<(std::ostream &os, const Irish_coffee &coffee);
    ~Irish_coffee() override;
};


#endif //OOP_IRISH_COFFEE_H
