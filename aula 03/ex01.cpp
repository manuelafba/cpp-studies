#include <iostream>

using namespace std;

int main()
{
    float comp;
    float largura;
    float altura;
    
    cout << "Digite a altura, a largura e o comprimento:\n";
    cin >> altura >> largura >> comp;
    
    float volume = altura * largura * comp;
    
    cout << "Volume = " << volume;

    return 0;
}