#include <iostream>
using namespace std;

void mostrarTempo(int, int);

int main()
{
    int horas, minutos;
	cout << "Entre com o número de horas: ";
    cin >> horas;
    cout << "Entre com o número de minutos: "
    cin >> minutos;

    cout << "Agora são ";
    mostrarTempo(horas, minutos);
    cout << endl;
	
	return 0;
}

void mostrarTempo(int horas, int minutos) {
    cout << horas << ":" << minutos;

}
