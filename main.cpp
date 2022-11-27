#include "Angajat.h"
#include "Client.h"
#include "Comanda.h"
#include "Expresso.h"
#include "Irish_coffee.h"
#include "Data.h"
#include "Persoana.h"
#include "Caffe_latte.h"
#include "Produs.h"
#include "Cafenea.h"
#include "erori.h"
#include<vector>
#include<memory>


int main() {
    Angajat angajat("Bob", "Bob", "Bucuresti", 18, 1000, false, true, 8);
    Client client("Tom", "Tom", "Bucuresti", 60, 0, 0);
    Data f(1, 9, 2022); // creem un obiect de tip Data pentru a il folosi in Irish
    Data ex(1,12,2022);
    Expresso expresso("Vanilla delight",15,f,ex,27, "vanilie");
    Irish_coffee irish("Haloween expresso",12,f,ex,27,50,30,  20);
    Caffe_latte cl("Latte", 14,f,ex,27,30,25,50);
    Angajat a("Ana","Maria","Brasov",21,1500,true,false,8);
    Data an(3,5,2022);
    Client ca("Sam","Jack","Craiova",40,5,50);
    std:: vector<Produs*>produse;
    //std:: vector<std::shared_ptr <Produs >> produ;
    produse.push_back(new Irish_coffee(irish));
    //produ.push_back(std::make_shared<Caffe_latte>(cl));
    //produse.push_back(new Expresso(expresso));
    Comanda comanda(produse,an,ca,a);
    std::cout << irish.stareProdus(an) << '\n';
    std::cout << client.pretProdus(irish, an) << '\n';
    std::cout << an.diferentaData(f) << '\n';
    irish.incalzeste();
    irish.alcool();
    expresso.amar();
    cl.eliminareAlergeni();
    comanda.verificare_comanda();
    Comanda c1=comanda;
    c1.verificare_comanda();
    int x = 0;
    std::cin >> x;
    Cafenea cafi;
    Produs *tempProdus;
    if (x == 1)
        tempProdus = new Expresso;
    else if (x == 2)
        tempProdus = new Irish_coffee;
    else
        tempProdus = new Caffe_latte;
    try {
        cafi.dynamiccast(tempProdus);
    }
    catch (eroare_comanda &e) { std::cout << e.what(); }
    delete tempProdus;
    return 0;
}
