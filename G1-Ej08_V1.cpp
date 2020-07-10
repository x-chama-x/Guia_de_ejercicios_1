#include <iostream>

using namespace std;

int main()
{

    short n;
    long acum = 0;

    cout << "sumatoria de los numeros naturales hasta n incluido" << endl;
    cout << "ingrese valor n" << endl;
    cin >> n;
    acum = n*((n+1)/2);
    cout << "el resultado es " << acum;
    return 0;
}
