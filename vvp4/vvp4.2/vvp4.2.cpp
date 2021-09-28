#include <iostream>

using namespace std;

int main()
{
    float d, L, p = 3.14;
    setlocale(LC_ALL, "Russian");
    cout << "Введите диаметр: ";
    cin >> d;
    L = p * d;
    cout << "Длина окружности с данным диаметром: " << L;
}