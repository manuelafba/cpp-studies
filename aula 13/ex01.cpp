#include <iostream>
using namespace std;

union CorAuto {
	char nome[20];
	int num;
	char codigo[20];
};

struct Auto
{
	char modelo[20];
	unsigned ano;
	CorAuto cor;
	float preco;
};


int main() {
    Auto carros[10] {
		{"Vectra", 2009, "Azul", 58000.00},
		{"Polo", 2008, "Preto", 45000.00}
	};

	cout << "Digite os dados do carro: " << endl;
	cout << "Modelo: " << endl;
	cin >> carros[2].modelo;
	cout << "Ano de fabricacao: " << endl;
	cin >> carros[2].ano;
	cout << "Codigo da cor: " << endl;
	cin >> carros[2].cor.codigo;
	cout << "Preco: " << endl;
	cin >> carros[2].preco;

	cout << "\nEstoque\n";
	cout << "-----------------\n";
	cout << carros[0].modelo << "\t";
	cout << carros[0].ano << "\t";
	cout << carros[0].cor.nome << "\t";
	cout << carros[0].preco << endl;

	cout << carros[1].modelo << "\t";
	cout << carros[1].ano << "\t";
	cout << carros[1].cor.nome << "\t";
	cout << carros[1].preco << endl;

	cout << carros[2].modelo << "\t";
	cout << carros[2].ano << "\t";
	cout << carros[2].cor.codigo << "\t";
	cout << carros[2].preco << endl;


    return 0;
}
