#include <iostream>
using namespace std;

int main()
{
	int idade, dias;
	cout << "Digite sua idade: ";
	cin >> idade;
    dias = 365 * idade;
	cout << idade << " anos equivalem a " << dias << " dias.";
	
	return 0;
}