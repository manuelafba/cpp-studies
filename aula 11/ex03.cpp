#include <iostream>
#include <string.h>
using namespace std;

char ultimaLetra(char palavra[]){
    int pos = strlen(palavra) - 1;
    return palavra[pos];
}

int main(){
    char palavra[30];
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;

    cout << "Ultima letra: " << ultimaLetra(palavra);

    return 0;
}