#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x1, x2, y1, y2;
    double x3, x4, y3, y4;
    double r24, r23, s, p;
    cout << "Введите координаты первой точки (х, у)\n";
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки (х, у)\n";
    cin >> x2 >> y2;
    x3 = x2; x4 = x1;
    y3 = y1; y4 = y2;
    r24 = sqrt((x4-x2)*(x4-x2) + (y4-y2)*(y4-y2));
    r23 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    s = r24 * r23;
    p = r24 * 2 + r23 * 2;
    cout << "Площадь равна: " << s << "\nПериметр равен: " << p;
}
