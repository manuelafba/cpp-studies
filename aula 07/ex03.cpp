#include <iostream>
using namespace std;

char charada(char, int);

int main()
{
    cout << charada('<', 20);
    cout << charada('\a', 90);
    cout << charada('(', 72);
    cout << charada('5', 48);
    cout << charada('\1', 107);

	return 0;
}

char charada(char ch, int cod){
    return ch + cod;

}
