//
// Created by Ana-Maria on 11/5/2022.
//

#ifndef OOP_ERORI_H
#define OOP_ERORI_H
#include<exception>

class comanda_anulata_client : public std::exception {
public:
    [[nodiscard]] const char* what() const noexcept override;
};

class comanda_anulata_intarziata : public std::exception {
public:
    [[nodiscard]] const char* what() const noexcept override;
};

class comanda_inversata: public std::exception {
public:
    [[nodiscard]] const char* what() const noexcept override;
};

#endif //OOP_ERORI_H
