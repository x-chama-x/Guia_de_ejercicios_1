#include <iostream>

using namespace std;

int main()
{
    float a,b;

    cout << "Ingrese un numero entero" << endl;
    cin >> a;
    do
     {
        cout << "Ingrese otro numero entero" << endl;
        cin >> b;
     }
    while (a==b);
    if (a>b)
    {
     cout << "a>b" << endl;
    }
    else
    {
     cout << "a<b" << endl;
    }

    return 0;
}
