/* an algorithm that accepts two digit hexadecimal, as an input, print its decimal equivalent as an output.
written date - 1/26/2021
written by - AbdiKitesa-tech
*/

#include <iostream>

int main()
{
    int baseTen, D2, D1;
    char scndDgt, frstDgt;
    scndDgt = frstDgt = 0;

    const int BASE10 = 10;
    const int BASE16 = 16;

    std::cout << "input a two digit hexadecimal number?" << std::endl;
    std::cin >> scndDgt >> frstDgt;
    if (scndDgt >= 'A' && scndDgt <= 'F' || scndDgt >= 'a' && scndDgt <= 'f' || frstDgt >= 'A' && frstDgt <= 'F' || frstDgt >= 'a' && frstDgt <= 'f'||scndDgt >= '0' && scndDgt <='9'||frstDgt<= '0' && frstDgt >= '9')
    {
        if (scndDgt >= 'a' && scndDgt <= 'f')
        {
            D2=scndDgt - 32;
        }
        if (scndDgt >='A' && scndDgt <= 'F')
            D2= scndDgt -'A'+10;
        else if (scndDgt >= '0' && scndDgt <='9')
            D2 = scndDgt - '0';

        if (frstDgt >= 'a' && frstDgt <= 'f')
        {
            D1=scndDgt - 32;
        }
        if(frstDgt >= 'A' && frstDgt <= 'F')
        {
            D1 = frstDgt -'A'+10;
        }
        else if (frstDgt<= '0' && frstDgt >= '9')
            D1 = frstDgt - '0';
    }
    baseTen = D2 * BASE16 + D1;
    std::cout << "decimal equivalent of >>>" <<scndDgt<<frstDgt<< " is " << baseTen;
    return 0;
}
