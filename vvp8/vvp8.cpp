#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    int number_lesson = 17;
    float x, y, z;
    int kb;
    int konec = 0;
    int temp;
    
    while (number_lesson != 0)
    {
        cout << "\nВведите номер задания от 1 до 5, или 0, если хотите выйти из программы. \nНомер задания: ";
        cin >> number_lesson;

        switch (number_lesson)
        {
        case 0:
            cout << "\nВы вышли из программы!";
            break;


        case 1:
            cout << "Введите число байтов: ";
            cin >> x; // kol-vo bait
            kb = x / 1024;
            cout << kb << " целых килобайтов в " << x << " байтах";
            break;


        case 2:
            cout << "Введите значение отрезка А: ";
            cin >> x;
            cout << "Введите значение отрезка B (В < А): ";
            cin >> y;
            if ((x < 0) || (y < 0))
            {
                cout << "Ошибка! Отрезки не могут иметь отрицательно е значение!";
                break;
            }
            kb = x / y;
            cout << "В отрезке А " << kb << " отрезков В";
            break;


        case 3:
            cout << "Введите значение отрезка А: ";
            cin >> x;
            cout << "Введите значение отрезка B (В < А): ";
            cin >> y;
            if ((x < 0) || (y < 0))
            {
                cout << "Ошибка! Отрезки не могут иметь отрицательно е значение!";
                break;
            }
            kb = x / y; //otrezkov B v A (int)
            z = kb * y;
            x = x - z;
            cout << "Длина незанятой части отрезка А = " << x;
            break;

        case 4:
            cout << "Введите двузначное число: ";
            cin >> temp;
            konec = 0;
            while ((temp >= 100) || (temp <= 9))
            {
                cout << "Попробуйте ещё раз. У вас осталось " << 3 - konec << " попыток." << "\nВведите двузначное число: ";
                cin >> temp;
                konec++;
                if ((konec == 3) && ((temp >= 100) || (temp <= 9)))
                {
                    number_lesson = 8;
                    cout << "\nСлишком много попыток.\nВы вышли из задания!";
                    break;
                }
            }
            if ((temp < 100) && (temp > 9))
            {
                kb = temp / 10;
                y = temp % 10;
                z = y * 10 + kb;
                cout << z;
            }
            break;
            

        case 5:
            cout << "Введите трехзначное число: ";
            cin >> temp;
            konec = 0;
            while ((temp >= 1000) || (temp <= 99))
            {
                cout << "Попробуйте ещё раз. У вас осталось " << 3-konec << " попыток." << "\nВведите трехзначное число: ";
                cin >> temp;
                konec++;
                if ((konec == 3) && ((temp >= 1000) || (temp <= 99)))
                {
                    number_lesson = 8;
                    cout << "\nСлишком много попыток.\nВы вышли из задания!";
                    break;
                }
            }
            if ((temp < 1000) && (temp > 99))
            {
                x = temp % 100;
                kb = temp / 100;
                kb = x * 10 + kb;
                cout << kb;
            }
            break;

        default:
            cout << "\nВведите номер задания от 1 до 5, или 0, если хотите выйти из программы. \nНомер задания: ";
            cin >> number_lesson;
            break;
        }
        
    }
    
}
