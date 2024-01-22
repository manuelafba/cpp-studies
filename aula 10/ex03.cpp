#include <iostream>
using namespace std;

double resultado(double valores[]){
    return valores[0] * valores[2] - valores[1];
}

int main()
{
    double valores[3] = {};

    cout << "Entre com os valores do vetor: " << endl;
    cin >> valores[0] >> valores[1] >> valores[2];

    double result = resultado(valores);
    cout << valores[0] << " * " << valores[2] << " - " << valores[1] << " = " << result;

    return 0;
}
