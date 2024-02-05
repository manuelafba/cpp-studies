#include <iostream>
#include <string>
using namespace std;

struct Tigela {
    string estado;
    string alimento;
};

void fome (Tigela * tigela) {
    tigela->estado = "vazia";
}

int main()
{
    Tigela tigela = {"cheia", "sopa"};
    Tigela * ptrTigela = &tigela;

    cout << "Antes da janta:" << endl;
    cout << "Estado: " << ptrTigela->estado << endl;
    cout << "Tipo de alimento: " << ptrTigela->alimento << endl;

    fome(ptrTigela);

    cout << "Depois da janta:" << endl;
    cout << "Estado: " << ptrTigela->estado << endl;
    cout << "Tipo de alimento: " << ptrTigela->alimento << endl;

    return 0;

}