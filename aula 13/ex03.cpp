#include <iostream>
#include <string>
using namespace std;

union Jogador {
    char nome[25]; 
    int numero;     
};

struct Gol {
    union Jogador jog; 
    int hora, min;  
};

int main() {
    Gol gols[3];

    cout << "Digite os dados dos 3 últimos gols:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Gol: ";
        cin >> gols[i].jog.nome >> gols[i].jog.numero >> gols[i].hora;
        char sep;
        cin >> sep >> gols[i].min;
    }

    cout << "3 últimos gols:\n";
    for (int i = 0; i < 3; i++) {
        cout << gols[i].jog.nome << " camisa " << gols[i].jog.numero << " as " << gols[i].hora << ":" << gols[i].min << endl;
    }

    return 0;
}
