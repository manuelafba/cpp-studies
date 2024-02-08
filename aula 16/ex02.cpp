#include <iostream>
#include <string>
using namespace std;

struct Carro {
    string fabricante;
    int ano;
};

int main()
{
    int num;
    cout << "Quantos carros para catalogar? ";
    cin >> num;

    Carro * vet = new Carro[num];

    for (int i = 0; i < num; i++) {
        cout << "Carro #" << i+1 << endl;
        cout << "Marca: ";
        cin >> vet[i].fabricante;
        cout << "Ano: ";
        cin >> vet[i].ano;
    }

    cout << "Aqui está sua coleção: " << endl;
    
    for (int i = 0; i < num; i++) {
        cout << vet[i].ano << "  " << vet[i].fabricante << endl;
    }

    return 0;

}