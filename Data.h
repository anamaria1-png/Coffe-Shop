//
// Created by Ana-Maria on 10/12/2022.
//

#ifndef OOP_DATA_H
#define OOP_DATA_H
#include<iostream>

class Data {
private:
    int zi;
    int luna;
    int an;
public:
    Data();
    Data(int zi, int luna, int an);
    Data(const Data &other);
    int diferentaData(const Data &data) const;
    Data& operator=(const Data &other);
    friend std::ostream &operator<<(std::ostream &os, const Data &data);
    virtual ~Data();
};


#endif //OOP_DATA_H
