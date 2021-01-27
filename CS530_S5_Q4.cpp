/*an algorithm that accepts two numbers ,as an input, implements simple calculation(+, -, *, /) and display the output .
written by - abdikitesa-tech
written date - 27-jan-2021

*/

#include <iostream>

int main()

{
    int x, y, opr;
    std::cout << "enter the two numbers?" <<std::endl;
    std::cin >> x >> y;
    std::cout << "*******************************" << std::endl;
    std::cout << "*       CHOOSE ACCORDINGLY    *" << std::endl;
    std::cout << "*   1 ---------------ADDITION *" << std::endl;
    std::cout << "*   2 ------------SUBTRACTION *" << std::endl;
    std::cout << "*   3 ---------------DIVISION *" << std::endl;
    std::cout << "*   4 ---------MULTIPLICATION *" << std::endl;
    std::cout << "*******************************" << std::endl;

    std::cin >> opr;

    switch (opr)
    {
    case 1:{std::cout << "summation = " << x + y ;
    break;}
    case 2:{std::cout << "difference = " << x - y ;
    break;}
    case 3:{std::cout << "cofficient = " << x / y ;
    break;}
    case 4:{std::cout << "product = " << x * y ;
    break;}
    default:std::cout << "invalid entry" <<std::endl;

    return 0;
    }
}
