#include <iostream>
using namespace std;

int main()
{
    const int horasDia = 24;
    const int minutosHora = 60;
    const int segundosMinutos = 60;

    int segundos, dias, horas, minutos, seg, resto;

    cout << "Entre com o numero de segundos: ";
    cin >> segundos;

    dias = segundos / (horasDia * minutosHora * segundosMinutos);
    resto = segundos % (horasDia * minutosHora * segundosMinutos);
    horas = resto / (minutosHora * segundosMinutos);
    resto = resto % (minutosHora * segundosMinutos);
    minutos = resto / segundosMinutos;
    seg = resto % segundosMinutos;

    cout << segundos << " segundos = " << dias << " dias, "
                    << horas << " horas, " << minutos << " minutos e "
                    << seg << " segundos.";

    return 0;
}
