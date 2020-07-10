#include <iostream>

using namespace std;

int main()
{
    short n;
    long fact = 1;
    cout << "Hallar el factorial de n." << endl;
    cout << "Entero n: " << endl;
    cin >> n;
    for(int i=1; i<=n; i++)
        fact *= i;
    cout << n << "! = " << fact;

    return 0;
}
