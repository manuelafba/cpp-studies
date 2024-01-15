#include <iostream>
using namespace std;

void codigoAscii(int);

int main()
{
    codigoAscii(80);
	codigoAscii(114);
	codigoAscii(111);
	codigoAscii(103);
	codigoAscii(67);
	codigoAscii(109);
	codigoAscii(112);
	cout << endl;

	return 0;

}

void codigoAscii(int n){
	char ch = n;
	cout << ch;
}