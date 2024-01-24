#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char nome[30];
    char data[11]; // dd/mm/aaaa + \0
    char concat[50];

    cout << "Nome:\n";
    cin.getline(nome, 30);
    cout << "Data:\n";
    cin.getline(data, 11);

    strcpy(concat, nome);
    strcat(concat, " esteve aqui em ");
    strcat(concat, data);

    cout << concat;

    return 0;
}