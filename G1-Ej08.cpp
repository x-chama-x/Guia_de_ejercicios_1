#include <fstream>

using namespace std;

int main()
{
    int n,i;
    long anteult,ult,sum;
    cout << "Hallar sucesion Fibonacci desde 0 hasta n" << endl;
    cout << "ingrese valor n: ";
    cin >> n;
    switch (n)
    {

        case 0:
        cout << 0;
        break;
        case 1:
        cout << 0 << ", " << 1;
        break;
        default:
        anteult = 0;
        ult = 1;
        cout << anteult << ", " << ult << ", ";
        for (i=2; i<=n; i++)
        {

            sum = ult + anteult;
            anteult = ult;
            ult = sum;
            cout << sum << ", ";

        }
    }
    cout << '\b' << '\b' << '.';
    return 0;
}
