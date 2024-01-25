#include <iostream>
using namespace std;

struct palavra
{
    char port[30];
    char ing[30];
    char esp[30];
};

int main(){
    palavra dicionario[10] {
        {"Doce", "Candy", "Dulce"},
        {"Morango", "Strawberry", "Fresa"}
    };

    cout << "Digite uma palavra em português: " << endl;
    cin >> dicionario[2].port;
    cout << "Digite esse palavra em inglês: " << endl;
    cin >> dicionario[2].ing;
    cout << "Digite esse palavra em espanhol: " << endl;
    cin >> dicionario[2].esp;

    cout << "Dicionário" << endl;
    cout << "Português - Inglês - Espanhol" << endl;
    cout << dicionario[0].port << " - " << dicionario[0].ing << " - " << dicionario[0].esp << endl;
    cout << dicionario[1].port << " - " << dicionario[1].ing << " - " << dicionario[1].esp << endl;
    cout << dicionario[2].port << " - " << dicionario[2].ing << " - " << dicionario[2].esp << endl;

    return 0;
}