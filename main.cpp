#include <iostream>
#include <cmath>

using namespace std;

double CalculateA(double x, double y, double z) {
    double a = (x * x * (x + 1)) / (y - pow(sin(x + z), 2));
    return a;
}

double CalculateB(double x, double y, double z) {
    double b = (sqrt((x * y) / z)) + pow(cos(pow(x + y, 2)), 2);
    return b;
}

int main()
{
    setlocale(0, "");
    const double x = 0.5;
    const double y = 0.05;
    const double z = 0.7;
    cout << "X = " << x << " Y = " << y << " Z = " << z << endl;
    printf("Otvet:");
    cout << "a = " << CalculateA(x, y, z) << "b = " << CalculateB(x, y, z) << endl;
}
