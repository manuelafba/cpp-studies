#include <iostream>
using namespace std;

int main(){
    const int tamVet = 20;
    char nome[tamVet];
    char conceito;

    cout << "Digite seu nome: " << endl;
    cin.getline(nome, tamVet);
    cout << "Qual conceito voce merece: " << endl;
    cin >> conceito;
    cin.get();

    conceito = conceito + 1; // próximo caractere na tabela ASCII
    cout << "Bom dia, " << nome << ". Seu conceito é " << conceito;

    return 0;
}