#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int number_lesson = 17;
    bool popitka = false;
    int konec;


    int a, b;
    int temp;
    int funt, funt1, shil, shil1, pens, pens1;
    int znac1, znac2, znac3;
    float f, ff, s, temps;
    char symbol, operation;

    cout << "Лабораторная №2. Циклы и ветвления.\n";
    
    while (number_lesson != 0)
    {
        if (!popitka) {
            cout << "\nВведите номер задания от 4 до 12. Введите 0, если хотите выйти из программы.\nНомер задания: ";
            cin >> number_lesson;
        }
        else popitka = false;

        switch (number_lesson)
        {
        case 0:
            cout << "\nВы вышли из программы!\n";
            break;


        case 5:
            cout << "\nЗадание 5.\n";
            a = 4;
            temp = 1;
            for (int i = 0; i < 5; i++) 
            {
                for (int i = a; i > 0; i--)
                {
                    cout << " ";
                }
                for (int i = temp; i > 0; i--)
                {
                    cout << "x";
                }
                for (int i = a; i > 0; i--)
                {
                    cout << " ";
                }
                cout << endl << endl << endl << endl;
                a -= 1;
                temp += 2;
            }
            break;


        case 6:
            cout << "\nЗадание 6.\n\n";
            f = 2;
            ff = 1;
            while (f != 0) {
                cout << "Введите число, факториал которого вы хотите знать, или 0, чтобы перейти в меню выбора заданий. \nВаше число: ";
                cin >> f;
                if (f == 0) { break; }
                for (int j =f ; j > 0; j--) //multiply 1 by 
                    ff *= j; //numb, numb-1, ..., 2, 1 
                cout << "Факториал = " << ff << endl;

            }
            cout << "Вы вышли из задания.";
            break;


        case 7:
            cout << "\nЗадание 7.\n\n";
            cout << "Введите первоначальную сумму: ";
            cin >> ff; //kapital
            cout << "Введите количество лет: ";
            cin >> b; // years
            cout << "Процентная ставка: ";
            cin >> f;
            f *= 0.01;

            for (int i = 1; i <= b; i++)
            {
                ff += ff * f;
            }
            cout << "Через " << b << " лет вы получите " << ff << " долларов.\n";
            break;


        case 8:
            cout << "\nЗадание 8.\n";
            do
            {
                cout << "\nВведите сумму в старых фунтов: ";
                cin >> funt >> symbol >> shil >> symbol >> pens;
                while (shil >= 20 || pens >= 12)
                {
                    cout << "0 <= Пенсы <= 12, 0 <= Шиллинги <= 20. Повторите попытку: ";
                    cin >> funt >> symbol >> shil >> symbol >> pens;
                }
                cout << "Введите вторую сумму в старых фунтов: ";
                cin >> funt1 >> symbol >> shil1 >> symbol >> pens1;
                while (shil1 >= 20 || pens1 >= 12)
                {
                    cout << "0 <= Пенсы <= 12, 0 <= Шиллинги <= 20. Повторите попытку: ";
                    cin >> funt1 >> symbol >> shil1 >> symbol >> pens1;
                }
                funt += funt1;
                if (pens + pens1 >= 12) 
                { 
                    shil += 1;
                    pens = pens + pens1 - 12;
                }
                else pens += pens1;
                if (shil + shil1 >= 20) 
                { 
                    funt += 1;
                    shil = shil + shil1 - 20;
                }
                else shil += shil1;
                cout << "Всего " << funt << "." << shil << "." << pens << endl << "Продолжить? y/n: ";
                cin >> symbol;
            } while (symbol == 'y');
            break;


        case 9:
            cout << "\nЗадание 9.\n\n";
            cout << "Сколько у вас стульев? (введите число) ";
            cin >> a;
            cout << "Сколько гостей пришло? (введите число) ";
            cin >> b;
            temp = 1;
            while (a > b)
            {
                cout << "Гостей должно быть меньше стульев. Введите количество гостей еще раз: ";
                cin >> b;
            }
            for (int i = a; i > 0; i--)
            {
                temp *= b;
                b--;
            }
            cout << "Число возможных рассадок гостей за столом равно: " << temp << endl;
            break;


        case 10:
            cout << "\nЗадание 10.\n\n";
            cout << "Введите первоначальную сумму: ";
            cin >> ff; //kapital
            cout << "Введите желаемую сумму: ";
            cin >> s; // years
            cout << "Процентная ставка: ";
            cin >> f;
            f *= 0.01;
            b = 0;
            do
            {
                b++;
                ff = ff + (ff * f);
            } while (ff < s);
            cout << "Вам понадобится " << b << " лет.\n";
            break;


        case 11:
            cout << "\nЗадание 11.\n\n";
            cout << "\nВведите сумму в старых фунтов: ";
            cin >> funt >> symbol >> shil >> symbol >> pens;
            while (shil >= 20 || pens >= 12)
            {
                cout << "0 <= Пенсы <= 12, 0 <= Шиллинги <= 20. Повторите попытку: ";
                cin >> funt >> symbol >> shil >> symbol >> pens;
            }
            cout << "Введите операцию (+, - или *)";
            cin >> operation;
            if (operation == '*')
            {
                cout << "Введите множитель: ";
                cin >> s;
            }
            else 
            {
                cout << "Введите вторую сумму в старых фунтов: ";
                cin >> funt1 >> symbol >> shil1 >> symbol >> pens1;
                while (shil1 >= 20 || pens1 >= 12)
                {
                    cout << "0 <= Пенсы <= 12, 0 <= Шиллинги <= 20. Повторите попытку: ";
                    cin >> funt1 >> symbol >> shil1 >> symbol >> pens1;
                }
            }
            cout << "Ответ: ";

            switch (operation)
            {
            case '+':
                znac1 = znac2 = znac3 = 0;
                znac3 = pens + pens1;
                if (znac3 > 11)
                {
                    znac3 -= 12;
                    znac2++;
                }
                znac2 = znac2 + shil + shil1;
                if (znac2 > 19)
                {
                    znac2 -= 20;
                    znac1++;
                }
                znac1 = znac1 + funt + funt1;

                cout << znac1 << "." << znac2 << "." << znac3;
                break;

            case '-':
                if (funt1 > funt)
                {
                    swap(funt, funt1);
                    swap(shil, shil1);
                    swap(pens, pens1);
                }
                znac1 = znac2 = znac3 = 0;
                znac3 = pens - pens1;
                if (znac3 < 0)
                {
                    pens += 12;
                    shil -= 1;
                    znac3 = pens - pens1;
                }
                znac2 = shil - shil1;
                if (znac2 < 0)
                {
                    shil += 20;
                    znac2 = shil - shil1;
                    funt -= 1;
                }
                znac1 = funt - funt1;
                if (funt1 > funt) { cout << "-" << znac1 << "." << znac2 << "." << znac3; }
                else cout << znac1 << "." << znac2 << "." << znac3;
                break;

            case '*':
                znac1 = znac2 = znac3 = 0;
                znac3 = pens * s;
                if (znac3 >= 12) 
                {
                    znac2 += int(znac3 / 12);
                    znac3 -= int(znac3 / 12) * 12;
                }
                znac2 = znac2 + (shil * s);
                if (znac2 > 19)
                {
                    znac1 += int(znac2 / 20);
                    znac2 -= int(znac2 / 20) * 20;
                }
                znac1 = znac1 + funt * s;
                cout << znac1 << "." << znac2 << "." << znac3;
                break;
            }


        case 12:
            cout << "\nЗадание 12.\n\n";
            do
            {
                cout << "";
                cin >> a >> symbol >> b;
                cout << "";
                cin >> operation;
                cout << "";
                cin >> znac1 >> symbol >> znac2;
                cout << "Ответ: ";
                //processing
                switch (operation)
                {
                case '+':
                    cout << a * znac2 + b * znac1 << "/" << b * znac2;
                    break;

                case '-':
                    cout << a * znac2 - b * znac1 << "/" << b * znac2;
                    break;

                case '*':
                    cout << a * znac1 << "/" << b * znac2;
                    break;

                case '/':
                    cout << a * znac2 << "/" << b * znac1;
                }
            } while (symbol == 'y');
            break;


        default:
            cout << "Введено неверное число!\nВы вышли из программы!\n";
            number_lesson = 0;

            /*popitka = true;
            konec = 4;
            while ((number_lesson <= 3) && (number_lesson >= 13))
            {
                konec--;
                cout << "Вы ввели неверный номер!\nВведите номер задания от 4 до 12. Введите 0, если хотите выйти из программы.\nНомер задания: ";
                cout << "Осталось попыток: " << konec << "\n";
                cin >> number_lesson;
                if ((konec == 1) && (number_lesson > 3) && (number_lesson < 13))
                {
                    cout << "Попытки закончились!\n";
                    number_lesson = 0;
                    break;
                }
            }*/
        }
    }
}
