#include <iostream>
using namespace std;

struct livro
{
    char nome[30];
    char genero[30];
};

struct jogo 
{
    char nome[30];
    char genero[30];
};

int main(){
    livro livrosEmprestados= {"Amêndoas", "Ficção"};

    jogo jogosEmprestados = {"Gris", "Indie"};

    int opcao;
    cout << "Digite 0 para emprestar um jogo ou 1 para emprestar um livro " << endl;
    cin >> opcao;

    if (opcao == 0) {
        cout << "Aqui está seu jogo!" << endl;
        cout << "Nome: " << jogosEmprestados.nome << endl;
        cout << "Gênero: " << jogosEmprestados.genero;
    } else {
        cout << "Aqui está seu livro!" << endl;
        cout << "Nome: " << livrosEmprestados.nome << endl;
        cout << "Gênero: " << livrosEmprestados.genero;
    }


    return 0;
}