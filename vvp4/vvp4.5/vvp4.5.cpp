#include <iostream>

using namespace std;

int main() {
    float a, b, s, r, p, c, a2, b2;
    setlocale(LC_ALL, "Russian");
    cout << "Первое число: ";
    cin >> a;
    while (a == 0) {
        cout << "Введите число, отличное от нуля: ";
        cin >> a;
    }
    cout << "Второе число: ";
    cin >> b;
    while (b == 0) {
        cout << "Введите число, отличное от нуля: ";
        cin >> b;
    }
    a2 = abs(a);
    b2 = abs(b);
    s = a2 + b2;
    r = a2 - b2;
    p = a2 * b2;
    c = a2 / b2;
    cout << "Сумма модулей: " << s << "\nРазность модулей: " << r << "\nПроизведение модулей: " << p << "\nЧастное модулей: " << c;
}