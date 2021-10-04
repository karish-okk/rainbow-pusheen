#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x1, x2, x3, y1, y2, y3;
    double r1, r2, r3;
    double s, p;
    cout << "Введите координаты первой точки(х, у)\n";
    cin >> x1 >> y1;
    cout << "Введите координаты второй точки(х, у)\n";
    cin >> x2 >> y2;
    cout << "Введите координаты третьей точки(х, у)\n";
    cin >> x3 >> y3;
    r1 = sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));
    r2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    r3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    p = r1 + r2 + r3;
    s = sqrt((p / 2) * ((p / 2) - r1) * ((p / 2) - r2) * ((p / 2) - r3));
    cout << "Периметр треугольника равен: " << p << "\nПлощадь треугольника равна: " << s;
}
