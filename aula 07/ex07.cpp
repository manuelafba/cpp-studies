#include <iostream>
using namespace std;

char codificar(char ch) {
    return ch + 3;
}

char decodificar(char ch) {
    return ch - 3;
}


int main()
{
    char caractere, caractereCod, caractereDecod;
    bool opcao;

    cout << "Digite um caractere: ";
    cin >> caractere;

    cout << "Digite 1 para codificar o caractere ou 0 para decodificar: ";
    cin >> opcao;

    if (opcao == true) {
        caractereCod = codificar(caractere);
        cout << "Caractere codificado: " << caractereCod << endl;
    } else {
        caractereDecod = decodificar(caractere);
        cout << "Caractere decodificado: " << caractereDecod << endl;
    }

	return 0;
}
