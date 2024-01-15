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
    cout << "Digite um caractere: ";
    cin >> caractere;

    caractereCod = codificar(caractere);
    cout << "Caractere codificado: " << caractereCod << endl;

    caractereDecod =  decodificar(caractereCod);
    cout << "Caractere decodificado: " << caractereDecod << endl;

	return 0;
}
