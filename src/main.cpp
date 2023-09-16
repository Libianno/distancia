#include <iostream>

#include "linha.cpp"

using namespace std;

int main()
{
    Ponto ponto1;
    Ponto ponto2;
    Linha linha1;

    linha1.setPonto1(ponto1);
    linha1.setPonto2(ponto2);

    cout << "O comprimento é:" << linha1.getComprimento() << endl;

}

void printCoordenadas(Ponto ponto_)
{
    static int counter;
    cout << "[Impressão no. " << counter <<  "] : Coordenadas de p ("  
        << ponto_.getX() << ", " 
        << ponto_.getY() << ", " 
        << ponto_.getZ()  << ")" << endl; 
}