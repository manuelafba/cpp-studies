#include <iostream>
using namespace std;

int main()
{
    float aposta1, aposta2;
    double premio;

    cout << "Digite a quantia apostada pelo jogador 1: ";
    cin >> aposta1;
    cout << "Digite a quantia apostada pelo jogador 2: ";
    cin >> aposta2;
    cout << "Entre com o valor do premio: ";
    cin >> premio;

    double premio1 = (premio * aposta1) / (aposta1 + aposta2);
    double premio2 = premio - premio1;
    
    cout << fixed;
    cout.precision(0);
    
    cout << "O jogador 1 tem direito a R$" << premio1 << endl;
    cout << "O jogador 2 tem direito a R$" << premio2;
    return 0;
}
