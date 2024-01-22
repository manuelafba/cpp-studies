#include <iostream>
using namespace std;

int soma(int valores[]){
    return valores[0] + valores[1] + valores[2] + valores[3] + valores[4];
}

int main()
{
    int valores[5] = {};

    cout << "Digite 5 valores: " << endl;
    cin >> valores[0] >> valores[1] >> valores[2] >> valores[3] >> valores[4];

    int resultado = soma(valores);
    cout << "Soma do vetor = " << resultado;

    return 0;
}
