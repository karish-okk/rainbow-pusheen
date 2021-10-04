#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	double ac, bc, p;
	cout << "Ведите числа А, В, С:\n";
	cin >> a >> b >> c;
	while ((a < b) && !((c > a) && (c < b)) || ((a>b) && !((c>b) && (c<a))) || (a==b)) {
		cout << "Введите числа заново (точка С должна быть между А и В):\n";
		cin >> a >> b >> c;
	}
	if (a>b) {
		ac = a - c;
		bc = c - b;
	}
	else {
		bc = b - c;
		ac = c - a;
	}
	pp = ac * bc;
	cout << "СВ * АС = " << pp;
}
