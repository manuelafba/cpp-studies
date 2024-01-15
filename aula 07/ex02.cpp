#include <iostream>
using namespace std;

void alerta();
int lerSenha();

int main()
{
	alerta();
	cout << "Iniciando com um som...";
	cout << "Digite sua senha: ______\b\b\b\b\b\b";
	int senha = lerSenha();
	cout << "Obrigada!";

	return 0;

}

void alerta() {
	cout << "\a";
}

int lerSenha() {
	int senha;
	cin >> senha;
	return senha;
}