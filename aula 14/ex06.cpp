#include <iostream>
#include <string>
using namespace std;

struct Horario {
    int horas;
    int minutos;
};

void mostrarHorario (Horario * horario) {
    cout << horario->horas << ":" << horario->minutos << endl;
}

int main()
{
    Horario horario;
    Horario * ptrHorario = &horario;
    char sep;

    cout << "Que horas são? (HH:MM)" << endl;
    cin >> ptrHorario->horas >> sep >> ptrHorario->minutos;

    ptrHorario->horas++; // incrementar o horário

    cout << "Seu relógio está atrasado, o horário correto é "; 
    mostrarHorario(ptrHorario);
    
    return 0;

}