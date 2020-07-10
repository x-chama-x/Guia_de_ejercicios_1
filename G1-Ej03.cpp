#include <iostream>

using namespace std;

int main()
{

    float a,b,c,sup;

    cout << "ingrese cateto a" << endl;
    cin >> a;
    cout << "ingrese cateto b" << endl;
    cin >> b;
    c = sqrt(pow(a,2) + pow(b,2));
    cout << "La hipotenusa es " << c << endl;
    if(c>100)
    {
        sup=pow(c,2);
    }
    else
    {
        sup=pow(2*c,2);
    }
    cout << "La superficie es " << sup << endl;

    return 0;
}
