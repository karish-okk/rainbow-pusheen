#include <iostream>

using namespace std;

int main()
{
    float a, b, s, r, p, c, a2, b2;
    setlocale(LC_ALL, "Russian");
    cout << "Первое число: ";
    cin >> a;
    cout << "Второе число: ";
    cin >> b;
    a2 = a * a;
    b2 = b * b;
    s = a2 + b2;
    r = a2 - b2;
    p = a2 * b2;
    c = a2 / b2;
    cout << "Сумма квадратов: " << s << "\nРазность квадратов: " << r << "\nПроизведение квадратов: " << p << "\nЧастное квадратов: " << c;
}