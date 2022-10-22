#include "Angajat.h"
#include "Client.h"
#include "Comanda.h"
#include "Expresso.h"
#include "Irish_coffee.h"
#include "Data.h"
#include "Persoana.h"
#include "Caffe_latte.h"
#include "Produs.h"
#include<vector>


int main() {
    Angajat angajat("Bob", "Bob", "Bucuresti", 18, 1000, false, true, 8);
    Client client("Tom", "Tom", "Bucuresti", 60, 0, 0);
    Data f(1, 9, 2022); // creem un obiect de tip Data pentru a il folosi in Irish
    Data ex(1,12,2022);
    Expresso expresso("Vanilla delight",15,f,ex,"vanilie");
    Irish_coffee irish("Haloween expresso",12,f,ex,50,30,  20);
    Caffe_latte cl("Latte", 14,f,ex,30,25,50);
    Angajat a("Ana","Maria","Brasov",21,1500,true,false,8);
    Data an(3,5,2022);
    Client ca("Sam","Jack","Craiova",40,5,50);
    std:: vector<Produs>produse;
    produse.push_back(irish);
    produse.push_back(cl);
    produse.push_back(expresso);
    Comanda comanda(produse,an,ca,a);
    std::cout << irish.stareProdus(an) << '\n';
    std::cout << client.pretProdus(irish, an) << '\n';
    std::cout << an.diferentaData(f) << '\n';
    return 0;
}
