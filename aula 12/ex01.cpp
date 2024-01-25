#include <iostream>
using namespace std;

struct chocolate
{
    char marca[10];
    double peso;
    int kcals;
};


int main(){
    chocolate lanche = {"Charge", 2.3, 350};

    cout << "Marca: " << lanche.marca << endl;
    cout << "Peso: " << lanche.peso << endl;
    cout << "Calorias: " << lanche.kcals << endl;

    return 0;
}