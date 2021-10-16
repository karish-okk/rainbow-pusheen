#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x, y;
    cout << "Введите х: ";
    cin >> x;
    y = 4 * pow((x-3), 6) - 7 * pow((x-3), 3) + 2;
    cout << "y = " << y;
}
