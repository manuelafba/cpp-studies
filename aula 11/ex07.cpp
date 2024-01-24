#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int qtdDatas = 3;
    const int tamDatas = 30;
    const int tamConcat = 100;

    char datas[qtdDatas][tamDatas];
    char concat[tamConcat];
    char natal[6] = "Natal";

    for (int i = 0; i < qtdDatas; ++i) {
        cout << "Digite a " << i + 1 << "ª data comemorativa: ";
        cin.getline(datas[i], tamDatas);
    }

    strcpy(concat, datas[0]);
    strcat(concat, ", ");
    strcat(concat, datas[1]);
    strcat(concat, " e ");
    strcat(concat, datas[2]);
    strcat(concat, " são belas datas.");

    cout << concat << endl;

    if (strstr(concat, natal) != 0) {
        cout << "O Natal também é uma das minhas datas preferidas!" << endl;
    } else {
        cout << "Você não mencionou o Natal como uma das datas." << endl;
    }

    return 0;
}
