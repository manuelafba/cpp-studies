#include <iostream>
using namespace std;

float imc(float altura, float peso) {
    return peso / (altura * altura);
}

double imc(double altura, double peso) {
    return peso / (altura * altura);
}

int main()
{
    float imcFloat;
    double imcDouble;

    imcFloat = imc(1.75f, 80.0f);
    imcDouble = imc(1.75, 80.0);

    cout << "IMC (float): " << imcFloat << endl;
    cout << "IMC (double): " << imcDouble << endl; 

    cout << fixed;
    cout.precision(10);
    cout << "IMC (float): " << imcFloat << endl;
    cout << "IMC (double): " << imcDouble << endl; // As duas saídas serão diferentes, pois o float reconhece até 6 dígitos significativos, enquanto o double reconhece até 15. Portanto, o resultado em double será mais preciso.

	return 0;
}
