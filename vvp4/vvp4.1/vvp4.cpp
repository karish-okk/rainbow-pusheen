#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    float s;
    cout << "Введите значчения величин: \nДлина: ";
    cin >> a;
    cout << "Ширина: ";
    cin >> b;
    s = a * b;
    cout << "Площадь равна: " << s;
}