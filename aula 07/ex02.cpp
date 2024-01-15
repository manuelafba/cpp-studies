#include <iostream>
using namespace std;

void beep();
int  lerSenha();

int main()
{
	cout << "Iniciando com um som..." << endl;
	beep();
	cout << "Digite sua senha: ______\b\b\b\b\b\b";
	int senha = lerSenha();
	cout << "Obrigada!" << endl;

	return 0;
}

void beep()
{
	cout << "\a";
}

int lerSenha()
{
	int temp;
	cin >> temp;
	return temp;
}