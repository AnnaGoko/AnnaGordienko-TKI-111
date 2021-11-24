#include <iostream>

using namespace std;

float Resistance(int a, int b) { //R = ρ · L/S
    const float ro = 0.0295;
    float resistance = ro * (a / b);
    return resistance;
}

int main()
{
    setlocale(0, "");
    int l;
    int s;
    cout << "Введите длину провода в метрах:" << endl;
    cin >> l;
    cout << "Введите площадь поперечного сечения провода в милиметрах:" << endl;
    cin >> s;
    if (!cin)
    {
        cout << "Input Error. Enter THE NUMBER." << endl;
        cin.clear();
        fflush(stdin);
    }
    else
    {
        cout << Resistance(l, s) << endl;
    }
}