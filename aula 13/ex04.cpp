#include <iostream>
#include <string>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Horario {
    int hora;
    int minuto;
};

struct Evento {
    Data data;
    Horario horario;
    string descricao;
};

int main() {

    Evento eventos[10];

    for (int i = 0; i < 2; i++) {
        cout << "Evento " << i+1 << ":\n";
        
        cout << "Data (dia mês ano): ";
        cin >> eventos[i].data.dia >> eventos[i].data.mes >> eventos[i].data.ano;
        
        cout << "Horário (hora minuto): ";
        cin >> eventos[i].horario.hora >> eventos[i].horario.minuto;
        
        cout << "Descrição (máximo 18 caracteres): ";
        cin.ignore(); 
        getline(cin, eventos[i].descricao);
    }

    cout << "----------------------\n";
    cout << "Eventos cadastrados:\n";
    for (int i = 0; i < 2; i++) {
        cout << "Evento " << i+1 << ":\n";
        cout << "Data: " << eventos[i].data.dia << "/" << eventos[i].data.mes << "/" << eventos[i].data.ano << endl;
        cout << "Horário: " << eventos[i].horario.hora << ":" << eventos[i].horario.minuto << endl;
        cout << "Descrição: " << eventos[i].descricao << endl;
    }

    return 0;
}
