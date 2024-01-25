#include <iostream>
using namespace std;

struct data
{
    int dia;
    int mes;
    int ano;
};

int diasVida (data nasc, data hoje) {

    int inicio = (nasc.ano * 365) + ((nasc.mes * 31) - 1) + nasc.dia;
    int fim = (hoje.ano * 365) + (hoje.mes * 31) + hoje.dia - 1;

    return fim - inicio;
}

int main(){
    data nasc, hoje;
    char sep; // "/"
    
    cout << "Data de nascimento: " << endl;
    cin >> nasc.dia >> sep >> nasc.mes >> sep >> nasc.ano;
    cout << "Data de hoje: " << endl;
    cin >> hoje.dia >> sep >> hoje.mes >> sep >> hoje.ano;

    cout << "Você tem " << diasVida(nasc, hoje) << " dias de vida";
    return 0;
}