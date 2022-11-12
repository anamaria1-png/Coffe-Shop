//
// Created by Ana-Maria on 11/5/2022.
//

#ifndef OOP_STL_H
#define OOP_STL_H
#include <iostream>
#include <vector>

template <typename T>
std::enable_if_t<!std::is_convertible_v<T, std::string>, std::ostream&>
operator<<(std::ostream& os, const T& obj);



#endif //OOP_STL_H
