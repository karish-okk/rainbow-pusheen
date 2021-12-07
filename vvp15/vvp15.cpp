#include <iostream>
using namespace std;

int powerA3(int a)
{
	int b;
	b = a * a * a;
	return b;
}

int sign(float a) {
	if (a < 0) return -1;
	else if (a > 0) return 1;
	else return 0;
}

float ringS(float r1, float r2) {
	float r;
	if (r1 < r2) {
		cout << "Ошибка!";
		return 0;
	}
	else {
		r1 = r1 * r1 * 3.14;
		r2 = r2 * r2 * 3.14;
		r = r1 - r2;
		return r;
	}
}

int quarter(int x, int y) {
	cout << "\nВведите значение х: ";
	cin >> x;
	cout << "Введите значение y: ";
	cin >> y;
	if ((x == 0) || (y == 0)) {
		cout << "Ошибка!";
		return 0;
	}
	else {
		if ((x > 0)) {
			if (y > 0) return 1;
			else return 4;
		}
		else {
			if (y > 0) return 2;
			else return 3;
		}
	}
}

float fact2(int n) {
	if (n % 2 == 0) {
		if (n == 2) return 2;
		else return n * fact2(n - 2);
	}
	else {
		if (n == 1) return 1;
		else return n * fact2(n - 2);
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	int number_lesson;
	int konec = 4;


	int a = 0, b = 0;
	float a2, b2;
	float r1, r2;


	cout << "ЛАБОРАТОРНАЯ РАБОТА №15.\n";
	cout << "\nВведите номер задания от 1 до 5. Введите 0, чтобы выйти из программы.\nНомер задания: ";
	cin >> number_lesson;

	while (number_lesson != 0) {
		switch (number_lesson) {
		case 0:
			break;


		case 1:
			cout << "\nЗадание 1.\nОписать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B\n"
				<< "С помощью этой функции найти третьи степени пяти данных чисел.\n";
			for (int i = 1; i <= 5; i++) {
				cout << "Введите " << i << "-oe число: ";
				cin >> a;
				b = powerA3(a);
				cout << a << " в третьей степени = " << b << "\n";
			}
			break;


		case 2:
			cout << "\nЗадание 2.\nОписать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:\n"
				<< "-1, если X < 0; 0, если X = 0; 1, если X > 0. \n" 
				<< "С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.\n";
			cout << "A = ";
			cin >> a2;
			cout << "B = ";
			cin >> b2;
			cout << "Ответ: " << sign(a2) + sign(b2) << "\n";
			break;


		case 3:
			cout << "\nЗадание 3.\nОписать функцию RingS(R1, R2) вещественного типа. С ее помощью найти площади трех колец, для которых \nданы внешние и внутренние радиусы.\n";
			for (int i = 1; i <= 3; i++) {
				cout << "Введите радиус бОльшей окружности: ";
				cin >> r1;
				cout << "Введите радиус меньшей окружности: ";
				cin >> r2;
				cout << "Ответ: " << ringS(r1, r2);
				cout << "\n";
			}
			break;


		case 4:
			cout << "\nЗадание 4. \nОписать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, в которой находится \nточка с ненулевыми вещественными координатами (x, y). ";
			cout << "Четверть первой точки: " << quarter(a, b) << "\n";
			cout << "Четверть второй точки: " << quarter(a, b) << "\n";
			cout << "Четверть третьей точки: " << quarter(a, b) << "\n";
			break;


		case 5:
			cout << "\nЗадание 5. \nОписать функцию Fact2(N) вещественного типа, вычисляющую двойной факториал.\n";
			cout << "N = ";
			cin >> a;
			cout << "Ответ: " << fact2(a) << "\n";
			break;



		default:
			cout << "\nОшибка!";
			break;
		}

		if ((number_lesson < 0) || (number_lesson > 5)) {
			while ((number_lesson < 0) || (number_lesson > 5))
			{
				konec--;
				cout << "\nВведите номер задания от 1 до 6. Введите 0, чтобы выйти из программы. У вас осталось " << konec << " попыток.\nНомер задания: ";
				cin >> number_lesson;
				if (konec == 1) {
					cout << "\nПопытки закончились!\n";
					break;
				}
			}
		}
		else {
			cout << "\nВведите номер задания от 1 до 6. Введите 0, чтобы выйти из программы.\nНомер задания: ";
			cin >> number_lesson;
		}
		if (konec == 1) break;
	}

	cout << "\nВы вышли из программы!";
}