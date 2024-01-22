#include <iostream>
using namespace std;

float mediaAntiga(float pesos[], float notas[]){
    return ((pesos[0] * notas[0]) + (pesos[1] * notas[1]) + (pesos[2] * notas[2])) / 9;
}

float mediaNova(float notas[]){
    return (notas[0] + notas[1] + notas[2]) / 3;
}

int main()
{
    float pesos[3] = {2, 3, 4};
    float notas[3] = {};

    cout << "Digite sua nota da 1 AV: " << endl;
    cin >> notas[0];
    cout << "Digite sua nota da 2 AV: " << endl;
    cin >> notas[1];
    cout << "Digite sua nota da 3 AV: " << endl;
    cin >> notas[2];

    float notaAntiga = mediaAntiga(pesos, notas);
    float notaNova = mediaNova(notas);

    cout << "Media antiga: " << notaAntiga << endl;
    cout << "Media nova: " << notaNova;

    return 0;
}
