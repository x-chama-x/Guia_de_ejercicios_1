#include <iostream>

using namespace std;

int main()
{

    float a,b,c;


    cout << "ingrese cateto a" << endl;
    cin >> a;
    cout << "ingrese cateto b" << endl;
    cin >> b;
    c = sqrt(pow(a,2) + pow(b,2));
    cout << "La hipotenusa es " << c;

    return 0;
}
