//
// Created by Ana-Maria on 11/5/2022.
//

#ifndef OOP_ERORI_H
#define OOP_ERORI_H
#include<exception>

class eroare_comanda: public std::exception {
public:
    [[nodiscard]] const char* what() const noexcept override;
};

class eroare_comanda_anulata : public eroare_comanda {
public:
    [[nodiscard]] const char* what() const noexcept override;
};

class eroare_comanda_incurcata: public eroare_comanda {
public:
    [[nodiscard]] const char* what() const noexcept override;
};

#endif //OOP_ERORI_H
