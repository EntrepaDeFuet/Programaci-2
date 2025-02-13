#include<iostream>
using namespace std;


struct producte {
    double preu;
    string nom;
};

int establirMenu(producte menu[7]){

    menu[0].nom = "Hamburguesa";
    menu[0].preu = 5.0;

    menu[1].nom = "Hamburguesa amb Formatge";
    menu[1].preu = 8.0;

    menu[2].nom = "Hamburguesa doble";
    menu[2].preu = 10.0;

    menu[3].nom = "Patates fregides";
    menu[3].preu = 5.0;

    menu[4].nom = "Patates braves";
    menu[4].preu = 6.0;

    menu[5].nom = "Refresc";
    menu[5].preu = 2.0;

    menu[6].nom = "Café";
    menu[6].preu = 1.5;

    return 0;
}

double recompte(producte menu[7]){
    double preu = 0.0;
    int quantitat;
    for (int i = 0; i < 7; i++){
        cout << "Quantitat de " << menu[i].nom << " consumit/des ?" << endl;
        cin >> quantitat;
        preu += menu[i].preu * quantitat;
    }
    return preu;
}

int main(){

    producte menu[7];

    establirMenu(menu);

    double pagar = recompte(menu);

    cout << "Has de pagar " << pagar << " €" << endl;
    

    return 0;
}