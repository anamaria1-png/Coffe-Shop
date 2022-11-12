//
// Created by Ana-Maria on 11/5/2022.
//

#include "erori.h"

const char *comanda_anulata_client::what() const noexcept {
    return "Comanda a fost anulata de client";
}

const char *comanda_anulata_intarziata::what() const noexcept {
    return "Comanda a fost anulata din cauza intarzierii ";
}

const char *comanda_inversata::what() const noexcept {
    return "Comanda este inversata intre doi clienti";
}
