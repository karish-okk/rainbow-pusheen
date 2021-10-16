#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Введите А: ";
    cin >> a;
    cout << "\nВведите В: ";
    cin >> b;
    cout << "\nВведите С: ";
    cin >> c;
    float temp; //vremennoe znacenie
    temp = c;
    c = a; // v b now a; d temp now b
    swap(b, temp);
    a = temp;
    cout << "Новое значение А: " << a << "\nНовое значение В: " << b << "\nНовое значение С:" << c;
}
