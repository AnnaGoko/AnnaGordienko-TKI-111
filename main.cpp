#include <iostream>
#include <cmath>

using namespace std;

double FindThirdSide(double a, double b, double y) {
    const double pi = 3.14;
    double side = a*a + b*b - (2*a*b*cos((y*pi)/180));
    side = sqrt(side);
    return side;
}

double FindSqure(double a, double b, double y) {
    const double pi = 3.14;
    double s = ((a / 2)*b*sin((y*pi)/180)) / 2;
    return s;
}

double RadiusOutside(double a, double b, double c) {
    double p = (a + b + c) / 2;
    double r = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    return r;
}

int main()
{
    setlocale(0, "");
    double a;
    double b;
    double y;
    cout << "Введите первую сторону: " << endl;
    cin >> a;
    cout << "Введите вторую сторону: " << endl;
    cin >> b;
    cout << "Введите угол между ними: " << endl;
    cin >> y;
    if (!cin)
    {
        cout << "Input Error. Enter THE NUMBER." << endl;
        cin.clear();
        fflush(stdin);
    }
    else {
        double c = FindThirdSide(a, b, y);
        cout << "Третья сторона = " << c << " Площадь = " << FindSqure(a, b, y) << " Радиус описанной окружности = " << RadiusOutside(a, b, c) << endl;
    }
}
