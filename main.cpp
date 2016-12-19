#include "Complex.h"
#include <iostream>

using namespace std;

int main() {

    cout << "Hello Fractals !" << endl;

    Complex c0;
    Complex c1;
    c1 = c1.FromCartesian(1, -1);

    c0.Display();
    c1.Display();

    return 0;
}