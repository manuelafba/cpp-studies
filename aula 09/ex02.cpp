#include <iostream>
using namespace std;

int main()
{
    double numero;
    cout << "Digite um ponto-flutuante: ";
    cin >> numero;

    cout << "Notacao padrao: " << numero << endl;
    
    cout << scientific;
    cout << "Notacao cientifica: " << numero << endl;

    cout << fixed;
    cout.precision(2);
    cout << "Notacao decimal: " << numero << endl;
    
    return 0;
}
