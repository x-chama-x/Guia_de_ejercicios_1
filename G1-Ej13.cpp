#include <iostream>

using namespace std;

int main()
{
    int n,acum = 0,x = 15,memoria = 0;
    cout << "Hallar el valor x" << endl;
    cout << "ingrese valores de la lista" << endl;
    while (true)
    {
      cin >> n;
      if(n == x)
      {
        acum = acum ++;
        cout << "enhorabuena! x = " << x << ", valor encontrado en la posicion " << acum << endl;
      }
      else
      {
         acum = acum ++;
         cout << "No se ha encontrado el valor de x en la posicion " << acum << endl;
      }

    }

}
