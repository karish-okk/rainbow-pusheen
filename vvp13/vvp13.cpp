#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Лабораторная работа №13 \n";
    int konec;
    int number_lesson;

    float a, zz;
    float kb, temp;
    int n;
    
    cout << "\nВведите номер задания от 1 до 5. Введите 0, если хотите выйти из программы. \nНомер задания: ";
    cin >> number_lesson;
    while (number_lesson != 0)
    {
        //
        if (number_lesson == 0) {
            cout << "Вы вышли из программы!\n";
            break;
        }

        //
        else if (number_lesson == 1) {
            cout << "\nЗадание 1.";
            cout << "\nВведите цену одного кг конфет: ";
            cin >> a;
            for (float i = 0.1; i <= 1.1; i += 0.1) {
                cout << "Стоимость " << i << " кг конфет = " << a * i << " руб\n";
            }
        }

        //
        else if (number_lesson == 2) {
            cout << "\nЗадание 2.";
            cout << "\nДано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).";
            cout << "N = ";
            cin >> kb;
            a = 1;
            temp = (kb - 1) * 10;
            zz = 1.1f;
            for (int i = 1; i <= temp; i++) {
                a *= zz;
                if (fabs(kb - zz) < 0.0001) cout << zz << " = ";
                else cout << zz << " * ";
                zz += 0.1f;
            }
            cout << a << "\n";
        }

        //
        else if (number_lesson == 3) {
            cout << "\nЗадание 3.";
            cout << "\nНужно найти квадрат числа N\nN = ";
            cin >> n;
            temp = 0;
            cout << "Текущие значения суммы: ";
            for (int i = 1; i <= (2 * n) - 1; i += 2) {
                temp += i;
                cout << temp << " ";
            }
            cout << "\n" << n << "^2 = " << temp << " \n";
        }

        //
        else if (number_lesson == 4) {
            cout << "\nЗадание 3.";
            cout << "\nДано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A2 + A3 + . . . + AN\n";
            cout << "A = ";
            cin >> a;
            cout << "N = ";
            cin >> n;
            temp = 0;
            for (int i = 0; i <= n; i++) {
                temp += pow(a, i);
            }
            cout << "Сумма равна " << temp << "\n";
        }

        //
        else if (number_lesson == 5) {
            cout << "\nЗадание 5.";
            cout << "\nВведите вещественное число А, чобы найти значение выражения 1 - A + A2 - A3 + . . . ± AN . \nА = ";
            cin >> a;
            cout << "Введите N: ";
            cin >> n;
            a *= -1;
            temp = 0;
            for (int i = 0; i <= n; i++) {
                temp += pow(a, i);
                //это не часть алгоритма, условие нужно для красивого вывода выражения и его значения через =
                if (i == n) cout << pow(a, i) << " = ";
                else cout << pow(a, i) << " * ";
            }
            cout << temp;
        }

        //
        else {
            cout << "\nОшибка!\n";
        }
        cout << "\nВведите номер задания от 1 до 5. Введите 0, чтобы выйти из пограммы.\n";
        cout << "Номер задания:";
        cin >> number_lesson;
        konec = 2;
        while ((number_lesson < 1) || (number_lesson > 5)) {
            cout << "\nВведите номер задания от 1 до 5. Введите 0, чтобы выйти из пограммы.\nУ вас осталось " << konec << " попыток!\n"
                << "Номер задания: ";;
            cin >> number_lesson;
            konec--;
            if (konec == -1) {
                cout << "Ваши попытки закончились!\n" << "Вы вышли из программы!\n";
                break;

            }
        }
    }
    return 0;
}