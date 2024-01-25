#include <iostream>
using namespace std;

struct contaBancaria
{
    char nome[30];
    double saldo;
};

int main(){
    contaBancaria conta[10] {
        {"", 0}
    };

    cout << "Digite seu nome: " << endl;
    cin >> conta[0].nome;
    cout << "Digite o valor que deseja depositar: " << endl;
    cin >> conta[0].saldo;

    cout << conta[0].nome << ", seu saldo é de R$" << conta[0].saldo;


    return 0;
}