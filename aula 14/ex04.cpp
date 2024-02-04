#include <iostream>
using namespace std;

union Color
{
    struct 
    {
        unsigned char r; 
        unsigned char g; 
        unsigned char b; 
        unsigned char a; 
    } rgba;

    unsigned coded; 
};

void readRGBA(Color * pcolor);
void readInt32(Color * pcolor);
void showColor(Color * pcolor, bool type);

int main()
{
    cout << "Digite uma cor no formato RGBA:\n";
    Color corRgba;
    readRGBA(&corRgba); 

    cout << "Digite uma cor no formato Int32:\n";
    Color corInt32;
    readInt32(&corInt32);

    cout << "Formatos invertidos:\n";
    showColor(&corRgba, false);
    showColor(&corInt32, true);  
}

void readRGBA(Color * pcolor)
{
    short r, g, b, a;
    cin >> r >> g >> b >> a; 

    pcolor->rgba.r = static_cast<unsigned char>(r);
    pcolor->rgba.g = static_cast<unsigned char>(g);
    pcolor->rgba.b = static_cast<unsigned char>(b);
    pcolor->rgba.a = static_cast<unsigned char>(a);
}

void readInt32(Color * pcolor)
{
    cin >> pcolor->coded; 
}

void showColor(Color * pcolor, bool type)
{
    if (type == true)
    {
        cout << "RGBA("
            << static_cast<int>(pcolor->rgba.r) << ","
            << static_cast<int>(pcolor->rgba.g) << ","
            << static_cast<int>(pcolor->rgba.b) << ","
            << static_cast<int>(pcolor->rgba.a) << ")"
            << endl;
    } else {
        cout << pcolor->coded << endl;
    }
}
