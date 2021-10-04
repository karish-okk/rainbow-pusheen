#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float A, B, C;
	float sac, sbc, sum;
	cout << "Точка А: ";
	cin >> A;
	cout << "Точка В: ";
	cin >> B;
	cout << "Точка С: ";
	cin >> C;
	if ((A<B) && (B<C)) {
		sac = C - A;
		sbc = C - B;
		sum = sac + sbc;
	}
	else if((A<C) && (C<B)) {
		sac = C - A;
		sbc = B - C;
		sum = sac + sbc;
	}
	else if ((B<A) && (A<C)) {
		sac = C - A;
		sbc = C - B;
		sum = sac + sbc;
	}
	else if ((B<C) && (C<A)) {
		sac = A - C;
		sbc = C - B;
		sum = sac + sbc;
	}
	else if ((C < A) && (A < B)) {
		sac = A - C;
		sbc = B - C;
		sum = sac + sbc;
	}
	else {
		sac = A - C;
		sbc = B - C;
		sum = sac + sbc;
	}
	cout << "Отрезок АС = " << sac << "\nОтрезок ВС = " << sbc << "\nСумма отрезков АС и ВС = " << sum;
}