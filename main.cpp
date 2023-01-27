#include "Angajat.h"
#include "Client.h"

#include "Expresso.h"
#include "Irish_coffee.h"
#include "Data.h"
#include "Persoana.h"
#include "Caffe_latte.h"
#include "Produs.h"
#include "Cafenea.h"
#include "erori.h"
#include "Comanda.h"
#include<vector>


int main() {
    Angajat<int> angajat("Bob", "Bob", "Bucuresti", 18, 1000, false, true, 8, 9);
    Client client("Tom", "Tom", "Bucuresti", 60, 0, 0);
    Data f(1, 9, 2022); // creem un obiect de tip Data pentru a il folosi in Irish
    Data ex(1, 12, 2022);
    Expresso expresso(12, "Vanilla delight", 15, f, ex, 27, "vanilie");
    Irish_coffee irish(11, "Haloween expresso", 12, f, ex, 27, 50, 30, 20);
    Caffe_latte cl(10, "Latte", 14, f, ex, 27, 30, 25, 50);
    Angajat<int> a("Ana", "Maria", "Brasov", 21, 1500, true, false, 8, 9);
    Data an(3, 5, 2022);
    Client ca("Sam", "Jack", "Craiova", 40, 5, 50);
    //std::vector<Produs *> produse;
    std::vector<std::shared_ptr<Produs >> produse;
    produse.push_back(irish.clone());
    //produ.push_back(std::make_shared<Caffe_latte>(cl));
    //produse.push_back(new Expresso(expresso));
    Comanda comanda(produse, an, ca, a);
    std::cout << irish.stareProdus(an) << '\n';
    std::cout << client.pretProdus(irish, an) << '\n';
    std::cout << an.diferentaData(f) << '\n';
    irish.alcool();
    expresso.amar();
    cl.eliminareAlergeni();
    comanda.verificare_comanda();
    Comanda c1 = comanda;
    std::cout << c1;
    c1.verificare_comanda();
    Cafenea *servire = Cafenea::getInstanta();


    try {
        servire->insert(irish);
        auto &prod = servire->search("Lapte");
        Cafenea::servire_speciala(&prod);
        prod = servire->search("Cafea");
        std::cout << prod;
    }
    catch (eroare_comanda &e) { std::cout << e.what(); }
    Angajat<int> *a1 = Angajat<int>::createAngajat("John", "Doe", "New York", 25, 3000, true, false, 9, 5);
    Angajat<int> *b = Angajat<int>::createAngajat("Jane", "Doe", "Los Angeles", 30, 3500, false, true, 10, 10);

    a1->printidentificator();
    a1->sum(*b);
    Angajat<float> c("John", "Doe", "New York", 25, 3000, true, false, 9, 5), d(c);
    d.printidentificator();
    std::cout << d << std::endl;
    std::cout << *a1 << std::endl;
    std::cout << *b << std::endl;
    delete a1;
    delete b;
    delete Cafenea::getInstanta();
    return 0;
}
