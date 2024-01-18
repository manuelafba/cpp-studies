#include <iostream>
#include <cmath>
using namespace std;

void bhaskara(double a, double b, double c){
    double delta = b * b - (4 * a * c);
    double x, x1, x2;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "As raizes da equacao sao: " << x1 << " e " << x2;
    } else if (delta == 0) {
        x = (-b + sqrt(delta)) / (2 * a);
        cout << "A raiz da equação e: " << x;
    } else {
        cout << "A equacao nao possui raizes reais.";
    }

}

int main()
{
    double a, b, c;
    cout << "Digite os valores dos coeficientes a, b e c: ";
    cin >> a >> b >> c;
    bhaskara(a, b, c);

    return 0;
}
