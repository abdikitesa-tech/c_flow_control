/* an algorithm that accepts the a, b and c of a quadratic equation , as an input, and compute the real root and display , as an output.
written date - 26-jan-2021
written by - abdikitesa-tech
DISPLAY "input the a, b and c of quadratic equation with formula a(x*x)+bx+c = 0"
GET a, b, c

COMPUTE discrim --<--(b*b) - (4*a*c))
        if discrim = 0 then
           root1=root2= (-b+sqrt(discrim))/2 * a =(-b-sqrt(discrim))/2 * a

            DISPLAY "THE ROOTS ARE EQUAL ROOT1=ROOT2=" + root1

        else if discrim > 0 then
                root1 = (-b+sqrt(discrim))/2 * a
                root2 = (-b-sqrt(discrim))/2 * a

                DISPLAY "THE ROOTS ARE DISTINCT, ROOT1 =" + root1 + "ROOT2 =" + root2

        else discrim < 0 then
                DISPLAY "roots are not real (they are complex)"
*/

#include <iostream>
#include <cmath>
int main()
{   float root1, root2, a, b, c, discrim;
    a = b = c = discrim = 0;
    root1 = root2 = 0;

    std::cout << "input the cofficients separated by space " <<std::endl;

    std::cin >> a >> b >> c;
        discrim = (b * b) - (4 * a * c);

    if (discrim > 0)
        {
            root1 = (-b + sqrt(discrim))/(2 * a);
            root2 = (-b - sqrt(discrim))/(2 * a);
        std::cout << "the equation has two real roots, Root - 1 =" << root1 << "Root - 2 =" << root2 << std::endl;
        }
    else if (discrim == 0)
        {
            root1 = root2 = (-b + sqrt(discrim))/(2 * a);
           std::cout << "THE ROOTS ARE EQUAL ROOT1=ROOT2= " << root1 << std::endl;
        }

    else if (discrim < 0)
    {
        std::cout << "equation roots are not real (they are complex)" << std::endl;
    }

return 0;
}
