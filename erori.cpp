//
// Created by Ana-Maria on 11/5/2022.
//

#include "erori.h"

const char *eroare_comanda::what() const noexcept {
    return "Comanda a fost anulata de client";

}

const char *eroare_comanda_anulata::what() const noexcept {
    return "Comanda a fost anulata din cauza intarzierii ";
}

const char *eroare_comanda_incurcata::what() const noexcept {
    return "Comanda este inversata intre doi clienti";
}
