#include <iostream>
#include <math.h>
#include <cctype>
#include<iomanip>
using namespace std;

int main()
    {
        setlocale(LC_ALL, "rus");
        cout << "Объектно-ориентированное программирование. Лабораторная №1";

        
        bool popitka = false;
        int konec;
        int number_lesson = 17;


        char symbol;
        double dollar;
        int a, b, c, d;
        float itog;
        float funt, shil, pens, dfunt, dshil;
        float despounds, temp1, temp2;


        while (number_lesson != 0) {
            if (!popitka) {
                cout << "\n\n\nВведите номер задания от 4 до 12, или 0, если хотите выйти из программы\nНомер задания: ";
                cin >> number_lesson;
            }
            else popitka = false;


            switch (number_lesson)
            {
            case 0:
                cout << "\nВы вышли из программы!";
                break;


            case 4:
                cout << "\nЗадание 4. Напишите программу, выводящую па экран ваше любимое стихотворение.\n";
                cout << "Ясное утро не жарко," << endl << "Лугом бежишь налегке." << endl << "Медленно тянется барка" << endl << "Вниз по Оке." << endl 
                    <<"\nНесколько слов поневоле\nВсe повторяешь подряд.\nГде - то бубенчики в поле\nСлабо звенят." << endl;
                break;


            case 5:
                cout << "\nЗадание 5. Библиотечная функция islower() принимает в качестве аргумента один символ(букву) и возвращает \n"
                    << "ненулевое целое значение в том случае, если буква является строчной, и нулевое, если буква является заглавной.\n";
                cout << "\nВведите заглавную или строчную букву: ";
                cin >> symbol;
                cout << islower(symbol) << endl;
                break;


            case 6:
                cout << "\nЗадание 6. Перевод валюты.\n";
                cout << "Введите количество $$$: ";
                cin >> dollar;
                cout << "$" << dollar << "= ";
                cout << (dollar/1.487) << " фунтов стрерлингов\n";
                cout << "$" << dollar << "= ";
                cout << (dollar/0.172) << " франков\n";
                cout << "$" << dollar << "= ";
                cout << (dollar/0.584) << " немецких марок\n";
                cout << "$" << dollar << "= ";
                cout << (dollar/0.00955) <<" японских йены\n";
                break;


            case 7:
                cout << "\nЗадание 7. Перевод температуры из градусов Цельсия в ее эквивалент по Фаренгейту\n";
                cout << "Температура в градусах по Цельсию: ";
                cin >> dollar;
                cout << "Ответ:" << dollar * (9 / 5) + 32 << "F";
                break;


            case 8:
                cout << "\nЗадание 8. Разделить пары столбцов точками.\n";
                cout << "Город " << setw(15) << setfill('.') << " Население " << endl
                    << "Москва " << setw(14) << setfill('.') << 12632409 << endl
                    << "Омск " << setw(14) << setfill('.') << 1154077 << endl
                    << "Томск " << setw(8) << setfill('.') << 522940 << "\n";
                break;


            case 9:
                cout << "\nЗадание 9. Написать программу, которая выводит сумму дробей в виде дроби.\n";
                cout << "Введите первую дробь: ";
                cin >> a >> symbol >> b;
                cout << "введите вторую дробь: ";
                cin >> c >> symbol >> d;
                cout << "Ответ: " << a << "/" << b << " + " << c << "/" << d << " = " << (a * d + b * c) << "/" << (b * d) << "\n";
                break;


            case 10:
                cout << "\nЗадание 10. Напишите программу, которая будет преобразовывать сумму, записанную в старом формате (фунты, шиллинги,\n" 
                    << "пенсы), в новый формат(фунты, пенсы).\n";                
                cout << "Введите количество фунтов: ";
                cin >> funt;
                cout << "Введите количество шиллингов: ";
                cin >> shil;
                cout << "Введите количество пенсов: ";
                cin >> pens;
                symbol = '₤';
                itog = (((funt*20.0*12.0) + (shil*12.0) + pens) / 100.0) / 2.4;
                cout << "Десятичных фунтов: " << itog;
                
                break;


            case 11:
                cout << "\nЗадание 11. Произвести вывод с помощью манипулятора setiosflags(ios::left)\n";
                cout << setiosflags(ios::left) << setw(10) << "Фамилия" << setw(10) << "Имя" << setw(15) << "Адрес" << setw(12) << "Город" << "\n\n"
                    << setw(10) << "Петров" << setw(10) << "Василий" << setw(15) << "Кленовая 16" << setw(12) << "Санкт-Петербург" << "\n"
                    << setw(10) << "Иванов" << setw(10) << "Сергей" << setw(15) << "Осиновая 3" << setw(12) << "Находка" << "\n"
                    << setw(10) << "Сидоров" << setw(10) << "Иван" << setw(15) << "Березовая 21" << setw(12) << "Калининград" << "\n";
                break;


            case 12:
                cout << "\nЗадание 12. Сумму, указанную в десятичных фунтах, и переводящую ее в старую систему фунтов, шиллингов и пенсов\n";
                cout << "Введите число десятичных фунтов: ";
                cin >> despounds;
                temp1 = (despounds * 240) - (static_cast<int>(despounds) * 240);
                temp1 = static_cast<int>(temp1);
                shil = temp1 / 12;
                shil = static_cast<int>(shil);
                temp2 = shil * 12;
                pens = temp1 - temp2;
                cout << "Эквивалентная сумма в старой форме записи: " << static_cast<int>(despounds) << "." << shil << "." << pens << "\n";
                break;


            default:
                popitka = true;
                konec = 3;
                cout << "\nОшибка! Ведите номер задания от 4 до 12. Если хотите выйти из программы введите 0." <<
                    "\nПопыток осталось: " << konec << "!\nНомер задания : ";
                cin >> number_lesson;
                while ((number_lesson < 4) || (number_lesson > 12))
                {
                    konec -= 1;
                    cout << "\nОшибка! Ведите номер задания от 4 до 12. Если хотите выйти из программы введите 0." <<
                        "\nПопыток осталось: " << konec << "!\nНомер задания: ";
                    cin >> number_lesson;
                    if (konec == 0)
                    {
                        cout << "\nВы вышли из программы!";
                        number_lesson = 0;
                        break;
                    }
                }
                break;
            }

            

        }
}
