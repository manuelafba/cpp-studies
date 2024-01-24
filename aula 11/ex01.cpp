#include <iostream>
using namespace std;

int main(){
    const int tamVet = 20;
    char primeiroNome[tamVet];
    char segundoNome[tamVet];

    cout << "Primeiro nome: " << endl;
    cin >> primeiroNome;
    cout << "Segundo nome: " << endl;
    cin >> segundoNome;

    cout << "Bom dia, " << primeiroNome << " " << segundoNome << endl;
    cout << "Seja bem vindo " << primeiroNome[0] << segundoNome[0] << "!";


    return 0;
}