#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    int b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    swap(a, b);
    cout << "Новое первое число: " << a << "\nНовое второе число: " << b;
}
