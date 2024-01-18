#include <iostream>
using namespace std;

#define massaMoleculaAgua 3e-23
#define pesoGalao 3800

int main()
{
    float galoes, moleculas, pesoTotal;

    cout << "Digite a quantidade de galoes de agua: ";
    cin >> galoes;

    pesoTotal = galoes * pesoGalao;
    moleculas = pesoTotal / massaMoleculaAgua;

    cout << "Em " << galoes << "galoes existem " << moleculas << "moleculas de agua.";

    return 0;
}
