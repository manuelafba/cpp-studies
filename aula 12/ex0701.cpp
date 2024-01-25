#include <iostream>
using namespace std;

struct contaBancaria
{
    char nome[30];
    double saldo;
};

void exibir(contaBancaria conta) {
    cout << conta.nome << ", seu saldo é de R$" << conta.saldo;
}

int main(){
    contaBancaria conta = {"", 0};

    cout << "Digite seu nome: " << endl;
    cin >> conta.nome;
    cout << "Digite o valor que deseja depositar: " << endl;
    cin >> conta.saldo;
    exibir(conta);

    return 0;
}