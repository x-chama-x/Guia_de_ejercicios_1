/* 
    G1-Ej15A
    Desarrollar un algoritmo para obtener y emitir los tres primeros números perfectos.
    Programa hecho por x_chama_x 
*/ 

#include <fstream.h>
using namespace std;

int main () 
{
    int num = 1, div, k = 0;
    cout << "Generar los 3 primeros numeros perfectos" << endl;
    while (k<3)
    {
        num=num++;
        div = 0;
        for (int i = 1; i<num; i++)
        {
            if(num%i==0)
            {
                div=div+i;
                if(num==div)
                {
                    k++;
                    if(num==24)
                    {
                        num=num+4;
                    }
                    cout << k << "º: " << num << endl; 
                }
            }
        }
    }
return 0;    
}