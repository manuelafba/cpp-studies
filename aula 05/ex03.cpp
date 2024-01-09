#include <iostream>
using namespace std;

double converterTemp(double);

int main()
{
	double tempCelsius, tempFahr;
	cout << "Digite uma temperatura em graus Celsius: ";
	cin >> tempCelsius;

	tempFahr = converterTemp(tempCelsius);
	cout << tempCelsius << " graus Celsius equivalem a " << tempFahr << " graus Fahrenheit.";

	return 0;
}

double converterTemp(double temp)
{
	return 1.8 * temp + 32.0;	
}