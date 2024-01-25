#include <iostream>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Horario {
    int hora;
    int minutos;
    int segundos;
};

struct Evento {
    Data data;
    Horario horario;
    string local;
};

int main() {
    Evento evento;
    char sepData, sepHora; 

    cout << "Digite a data do evento (DD/MM/AAAA): ";
    cin >> evento.data.dia >> sepData >> evento.data.mes >> sepData >> evento.data.ano;

    cout << "Digite o horário do evento (HH:MM:SS): ";
    cin >> evento.horario.hora >> sepHora >> evento.horario.minutos >> sepHora >> evento.horario.segundos;

    cin.ignore();

    cout << "Digite o local do evento: ";
    getline(cin, evento.local);

    cout << "\nDados do evento:" << endl;
    cout << "Data: " << evento.data.dia << sepData << evento.data.mes << sepData << evento.data.ano << endl;
    cout << "Horário: " << evento.horario.hora << sepHora << evento.horario.minutos << sepHora << evento.horario.segundos << endl;
    cout << "Local: " << evento.local << endl;

    return 0;
}
