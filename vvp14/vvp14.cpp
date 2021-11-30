﻿#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int number_lesson;
	int konec;


	int a, b;
	int temp, c;
	float p, s;
	int buf = 1;
	int buf2 = 0;


	cout << "\nВведите номер задания от 1 до 6. Введите 0, чтобы выйти из программы.\nНомер задания: ";
	cin >> number_lesson;

	while (number_lesson != 0) {
		switch (number_lesson) {
		case 0:
			break;


		case 1:
			cout << "\nЗадание 1.\nДаны целые положительные числа A и B (A < B). Вывести все целые числа от A до B включительно; \nпри этом каждое число должно выводиться столько раз, каково его значение.\n";
			cout << "Введите А: ";
			cin >> a;
			cout << "Введите B: ";
			cin >> b;
			if (b < a) {
				cout << "Числа не соответствуют условию!\n";
				break;
			}
			for (int i = a; i <= b; i++) {
				for (int j = 1; j <= i; j++) {
					cout << i;
				}
				cout << " \n";
			}
			break;


		case 2:
			cout << "\nЗадание 2. \nДаны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное \nколичество отрезков длины B (без наложений). Не используя операции умножения и деления,\nнайти длину незанятой части отрезка A.";
			cout << "\nВведите А: ";
			cin >> a;
			cout << "Введите B: ";
			cin >> b;
			if (b > a) {
				cout << "Числа не соответствуют условию!\n";
				break;
			}
			temp = 0;
			c = 0;
			while ((a - temp) > b)
			{
				temp += b;
				c = a - temp;
			}
			cout << "Незанятая часть отрезка А = " << c << "\n";
			break;


		case 3:
			cout << "\nЗадание 3." << "\nДано целое число N (> 1). Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K \nбудет больше или равна N, и саму эту сумму.\n";
			cout << "Введите N: ";
			cin >> a;
			c = 0;
			temp = 1;
			if (a <= 1) {
				cout << "Числo не соответствуeт условию!\n";
				break;
			}
			while (c < a)
			{
				c += temp;
				temp++;
			}
			cout << "Сумма равна: " << c;
			cout << "\nПоследнее число в сумме равно: " << temp - 1 << "\n";
			break;


		case 4:
			cout << "\nЗадание 4.\n" << "Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается \nна P процентов от имеющейся суммы (P — вещественное число, 0 < P < 25)\n";
			cout << "";
			cin >> p;
			s = 1000;
			c = 0;
			while (s <= 1100)
			{
				s += s / 100 * p;
				c++;
			}
			cout << "Итоговый размер вклада: " << s << "\n";
			cout << "Количество месяцев: " << c << "\n";
			break;


		case 5:
			cout << "\nЗадание 5.\n" << "Даны целые положительные числа A и B. Найти их наибольший общий делитель (НОД), \nиспользуя алгоритм Евклида\n";
			cout << "Введите А: ";
			cin >> a;
			cout << "Введите B: ";
			cin >> b;
			if (a < b) swap(a, b);
			c = 17;
			temp = b;
			while (a != b)
			{
				if (a > b)
					a -= b;
				else
					b -= a;
			}
			cout << a;
			break;


		case 6:
			cout << "\nЗадание 6.\n" << "Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK. \nНайти целое число K — порядковый номер числа Фибоначчи N\n";
			cout << "N = ";
			cin >> a;
			temp = 1;
			for (int i = 4; i < 50; i++)
			{
				buf2 = buf;
				buf = temp;
				temp = temp + buf2;
				if (a == temp) {
					cout << "Порядковый номер числа фибоначчи " << a << ": " << i << " \n";
					break;
				}
				else if (i == 49) {
					cout << "Ввденное число не является числом фибоначчи.\n";
				}
			}
			break;


		default:
			cout << "\nОшибка!";
			break;
		}

		cout << "\nВведите номер задания от 1 до 6. Введите 0, чтобы выйти из программы.\nНомер задания: ";
		cin >> number_lesson;
	}

	cout << "\nВы вышли из программы!";
}