#include <iostream>
using namespace std;

int main()
{
    float distancia, litros;
    cout << "Distância percorrida (km): ";
    cin >> distancia;
    cout << "Litros de combustível: ";
    cin >> litros;

    cout << "O consumo do seu carro foi de " << distancia / litros << " km/litro";
    return 0;

}
