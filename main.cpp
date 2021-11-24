#include <iostream>
#include <cmath>

using namespace std;

static void exersise(double x)
{
    double y;
    y = sqrt(1 - x) - cos(sqrt(1 - x));
    printf("x = %f", x);
    printf("  ");
    printf("y = %f", y);
    printf("\n");

}

int main()
{
    setlocale(0, "");
    double x = 0;
    double x2 = 1;
    double stap = 0.1;
    while (x != (x2 + stap))
    {

        if (x <= x2)
        {
            exersise(x);
            x = x + stap;
            if (x >= x2)
            {
                x = x2;
                exersise(x); break;
            }
        }


    }
}
