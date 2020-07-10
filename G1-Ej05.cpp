#include <iostream>

using namespace std;
float a,b,potencia;

int main()
{
    cout << "Hallar la potencia de a ^ b" << endl;
    do
    {
        cout << "entero a: ";
        cin >> a;
        cout << "entero b: ";
        cin >> b;
    }
    while (a+b==0);
    potencia = pow(a,b);
    cout << a << " ^ " << b << " = " << potencia;


    return 0;
}
