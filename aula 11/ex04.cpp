#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char senhaDef[30] = "ProgComp";
    char senha[30];

    cout << "Digite sua senha: " << endl;
    cin >> senha;

    if (strcmp(senha, senhaDef) == 0) {
        cout << "Senha correta";
    } else {
        cout << "Senha incorreta";
    }

    return 0;
}