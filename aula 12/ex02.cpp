#include <iostream>
using namespace std;

struct chocolate
{
    char marca[10];
    double peso;
    int kcals;
};


int main(){
    chocolate lanches[3] =
    {
        {"Charge", 2.3, 350},
        {"Twix", 5.6, 225},
        {"KitKat", 8.4, 300}
    };

    cout << "Marcas: " << lanches[0].marca << ", " << lanches[1].marca << " e " << lanches[2].marca << endl;
    cout << "Peso: " << lanches[0].peso << ", " << lanches[1].peso << " e " << lanches[2].peso << endl;
    cout << "Calorias: " << lanches[0].kcals << ", " << lanches[1].kcals << " e " << lanches[2].kcals << endl;

    return 0;
}