#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

short n;
long double fact = 1;
long double e = 1;

    cout << setprecision (30); // precisión de los decimales

    cout << "Hallar el numero irracional e" << endl;
    cout << "Entero n: " << endl;
    cin >> n;
    for(short i=1; i<=n; i++)
    {
        fact*=i;
        e=e+1.0/fact;
    }
    cout << "e~= " << e;
    return 0;
}
