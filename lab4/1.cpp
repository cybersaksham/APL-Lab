#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    Complex c1(1.0, 2.0);
    Complex c2(3.0, 4.0);
    Complex c3;

    cout << "Enter a complex number in the format (real, imaginary): " << endl;
    cin >> c3;
    cout << "c3 = " << c3 << endl;

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    c3 = c1 + c2;
    cout << "c1 + c2 = " << c3 << endl;

    c3 = c1 - c2;
    cout << "c1 - c2 = " << c3 << endl;

    c3 = c1 * c2;
    cout << "c1 * c2 = " << c3 << endl;

    if (c1 == c2) cout << "c1 and c2 are equal" << endl;
    if(c1 != c2) cout << "c1 and c2 are not equal" << endl;

    return 0;
}

