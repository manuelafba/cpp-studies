#include <iostream>
using namespace std;

int main()
{
    int vet[5] = {10, 80, 30, 45, 15};
    int posicao;

    cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4] << endl;
    cout << "----------------------" << endl;

    cout << "Alterar posicao: " << endl;
    cin >> posicao;
    cout << "Novo valor: " << endl;
    cin >> vet[posicao];

    cout << "----------------------" << endl;
    cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4] << endl;

    return 0;
}
