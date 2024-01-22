#include <iostream>
using namespace std;

int main()
{
    double precos[3] = {1.50, 2.00, 1.00};
    double quantidades[3] = {};
    cout << "Prezado cliente, digite a quantidade de quilos desejados: " << endl;

    cout << "Alface: " << endl;
    cin >> quantidades[0];

    cout << "Beterraba: " << endl;
    cin >> quantidades[1];

    cout << "Cenoura: " << endl;
    cin >> quantidades[2];

    cout << fixed;
    cout.precision(2);
    cout << "Resumo da compra" << endl;
    cout << "----------------------" << endl;
    cout << "Alface: R$" << precos[0] * quantidades[0] << endl;
    cout << "Beterraba: R$" << precos[1] * quantidades[1] << endl;
    cout << "Cenoura: R$" << precos[2] * quantidades[2] << endl;
    cout << "----------------------" << endl;
    cout << "Total: R$" <<  precos[0] * quantidades[0]
                         +  precos[1] * quantidades[1]
                         +  precos[2] * quantidades[2];

    return 0;
}
