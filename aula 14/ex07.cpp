#include <iostream>
#include <string>
using namespace std;

enum TipoImagem {
    JPG, PNG, BMP
};

struct Imagem {
    char nome[20];
    int altura;
    int largura;
    TipoImagem tipo;
};

string tipoString(TipoImagem tipo) {
    const string tipos[] = {"JPG", "PNG", "BMP"};
    return tipos[tipo];
}


void detalhes(Imagem * imagem) {
    cout << "A imagem " << imagem->nome << " com tamanho " << imagem->largura <<
                        "x" << imagem->altura << " tem formato " << tipoString(imagem->tipo);
}

int main()
{
    Imagem imagem = {"backg.png", 1920, 1080, PNG};
    detalhes(&imagem);

    return 0;

}