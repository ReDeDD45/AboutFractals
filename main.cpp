#include "Complex.h"
#include "RecSequence.h"
#include "RecSeqBrot.h"
#include <iostream>

using namespace std;

int main() {

    cout << "Hello Fractals !" << endl;

    Complex c0;
    Complex c1,c2,c3;
    c1 = Complex::FromCartesian(1, -1);

    c0.Display();

    c1.Display();
    cout << "Angle is : " << c1.GetAngle() << endl;
    cout << "Radius is : " << c1.GetRadius() << endl;

    c2 = c1 * c1;
    c2.Display();
    c3 = c1.Pow(2);
    c3.Display();
    cout << "Angle is : " << c2.GetAngle() << endl;
    cout << "Radius is : " << c2.GetRadius() << endl;
    cout << "Angle is : " << c3.GetAngle() << endl;
    cout << "Radius is : " << c3.GetRadius() << endl;

    RecSeqBrot seqTest0();  // z0 = 0  &  z(n+1) = z(n)^2 + 0   (c = 0) (N = 10 000)
    Complex cTest = Complex::FromCartesian(-1,0);
    RecSeqBrot seqTestNeg1(cTest, 2);

    // cout << "Convergence value (c = 0) : " << seqTest0.IsConvergent();

    cout << "Convergence value (c = -1) : " << seqTestNeg1.IsConvergent();


    return 0;
}