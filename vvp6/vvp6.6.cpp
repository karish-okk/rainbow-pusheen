#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, z;
    cout << "Введите a: ";
    cin >> a;
    z = a * a;
    z = z * z;
    z = z * z;
    cout << "a^8 = " << z;
}
