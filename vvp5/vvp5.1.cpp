#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float x1, x2, y1, y2, s;
	cout << "Введите координаты первой точки (х1, у1): ";
	cin >> x1 >> y1;
	cout << "Введите координаты второй точки (х2, у2): ";
	cin >> x2 >> y2;
	s = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "Расстояние между данными точками = " << s;
}
