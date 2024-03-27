#include "Complex.h"
#include <iostream>
using namespace std;

int main() {
    Complex c1(2.0, 5.0);
    
    Complex c2;
    cout << "Enter complex number c2:" << endl;
    cin >> c2;

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    Complex c3 = c1 + c2;
    cout << "c1 + c2 = " << c3 << endl;

    Complex c4 = c1 * c2;
    cout << "c1 * c2 = " << c4 << endl;

    if (c1 == c2) {
        cout << "c1 is equal to c2" << endl;
    } else {
        cout << "c1 is not equal to c2" << endl;
    }

    cout << "c1 before increment: " << c1 << endl;

    ++c1;
    cout << "c1 after prefix increment: " << c1 << endl;

    c1++;
    cout << "c1 after postfix increment: " << c1 << endl;

    --c1;
    cout << "c1 after prefix decrement: " << c1 << endl;

    c1--;
    cout << "c1 after postfix decrement: " << c1 << endl;

    cout << "Number of objects created: " << Object::getCount() << endl;

    return 0;
}
