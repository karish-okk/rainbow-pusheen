#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    setlocale(LC_ALL, "Russian");
    cout << "Первое число: ";
    cin >> a;
    cout << "Второе число: ";
    cin >> b;
    c = (a + b) / 2;
    cout << "Среднее арифметическое этих чисел: " << c;
}