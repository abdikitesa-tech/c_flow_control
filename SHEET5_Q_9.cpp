/*a program that accepts two numbers, as an input, determine the GCD
(GREATEST COMMON DIVISIOR) and LCM(LEAST COMMON MULTIPLE)
WRITTEN DATE: 7-FEB-2021
WRITTEN BY: ABDI KITESA*/

#include <iostream>

using namespace std;

int main()
{
    int GCD, LCM, a, b, x, y, r;

    cout << "please enter two numbers: " << endl;

    cin >> x >> y;

    a = x;
    b = y;

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    GCD = a;
    LCM = (x * y)/ GCD;

    cout << "greatest common divisor is " << GCD << endl;
    cout << "least common multiple is " << LCM;

return 0;
}
