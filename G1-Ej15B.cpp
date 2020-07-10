/* 
    G1-Ej15B
    Desarrollar un algoritmo para obtener y emitir los tres primeros n�meros perfectos.
    aplicando el siguiente m�todo:
    1 + 2 = 3; 3 * 2 = 6
    3 + 4 = 7; 7 * 4 = 28.
    7 + 8 = 15; 15 + 16 = 31; 31 * 16 = 496
    Programa hecho por x_chama_x 
*/ 

#include <fstream.h>
using namespace std;

int main () 
{
    cout << "Generar los 3 primeros numeros perfectos" << endl;
    int num = 1,Resultado,acum=1;
    for(short i=2;i<=16;i*=2)
    {
        num=num+i;
        if(i!=8)
        {
            Resultado=num*i;
            cout << acum++ << "�: " << Resultado << endl;
        }
    }

return 0;    
}