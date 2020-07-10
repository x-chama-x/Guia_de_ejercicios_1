#include <iostream>

using namespace std;

int main()
{
    int n,acum = 0,valor_max = 0,memoria = 0;
    cout << "Hallar el dato con mayor valor de la lista" << endl;
    cout << "ingrese valores n ";
    while (true)
    {
      cin >> n;
      if(n >= valor_max)
      {
        valor_max = n;
        acum = acum ++;
        memoria = acum;
      }
      else
      {
         acum = acum ++;
      }
      cout << "el valor mayor es " << valor_max << " su posicion es " << memoria << endl;
    }

    return 0;
}
