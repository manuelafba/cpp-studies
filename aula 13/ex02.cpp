#include <iostream>
using namespace std;

enum mes { Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez };

const char meses[12][20] =
{
	"Janeiro", 
	"Fevereiro", 
	"Marco", 
	"Abril", 
	"Maio", 
	"Junho", 
	"Julho", 
	"Agosto", 
	"Setembro", 
	"Outubro", 
	"Novembro", 
	"Dezembro"
};

istream & operator>>(istream &, mes &);
ostream & operator<<(ostream &, mes &);


int main()
{
	mes inicio, fim;	

	inicio = Mar;	
	fim = Jun;			

	cout << "Digite o numero do mes atual: ";
	mes atual;
	cin >> atual;	

	if (atual >= inicio && atual <= fim)
		cout << atual << "Voce esta em periodo de aulas.\n";
	else
		cout << atual << "Ferias!\n";

	return 0;
}

istream & operator>>(istream & is, mes & m)
{
	int temp;
	is >> temp;

	if (temp >= Jan && temp <= Dez)
		m = mes(temp);

	return is;
}

ostream & operator<<(ostream & os, mes & m)
{
	os << meses[m - 1];

	return os;
}