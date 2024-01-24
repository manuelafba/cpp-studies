#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char primeiroNumero[10];
    int segundoNumero;

    cout << "Digite o primeiro numero: " << endl;
    cin >> primeiroNumero;
    cout << "Digite o segundo numero: " << endl;
    cin >> segundoNumero;

    int primeiroNumInt = atoi(primeiroNumero); // função para converter a string em int

    cout << "Multiplicacao entre eles = " << primeiroNumInt * segundoNumero;

    return 0;
}