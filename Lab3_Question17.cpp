#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, r1, r2, d, r, i;
    cout << "Enter coefficients a, b and c:\n ";
    cin >> a >> b >> c;
    d = b*b - 4*a*c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "r1 = " << r1 << endl;
        cout << "r2 = " << r2 << endl;
    }

    else if (d == 0) {
        cout << "Roots are real and same." << endl;
        r1 = (-b + sqrt(d)) / (2*a);
        cout << "r1 = r2 =" << r1 << endl;
    }

    else {
        r = -b/(2*a);
        i =sqrt(-d)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "r1 = " << r << "+" << i << "i" << endl;
        cout << "r2 = " << r << "-" << i << "i" << endl;
    }
    return 0;
}
