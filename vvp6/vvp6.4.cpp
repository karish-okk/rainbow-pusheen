#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x, y;
    cout << "Введите х: ";
    cin >> x;
    y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    cout << "y = " << y;
}
