#include <iostream>
using namespace std;

#define segundosAno 3.156e7

float idadeSegundos(int anos){
    return anos * segundosAno;
}

int main()
{
    int anos;
    float segundos;

    cout << "Digite sua idade: ";
    cin >> anos;

    segundos = idadeSegundos(anos);
    cout << anos << " anos equivalem a " << segundos << " segundos." << endl;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(1);

    cout << anos << " anos equivalem a " << segundos << " segundos.";

    return 0;
}
