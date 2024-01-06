#include <iostream>
using namespace std;

void UmTres();
void Dois();

int main()
{
	cout << "Começando agora:\n";
    UmTres();
    cout << "Pronto!";
	
	return 0;
}

void Dois() {
    cout << " Dois ";
}

void UmTres() {
    cout << "Um";
    Dois();
    cout << "Três" << endl;
}
