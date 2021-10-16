#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int number_lesson = 100;
    float a, a2;
    float x, y, z;
    float b, b2;
    float c, c2;

    while (number_lesson != 0)
    {
        cout << "\nВведите номер задания от 1 до 6. Если хотите выйти из программы, введите 0.\nНомер задания: ";
        cin >> number_lesson;
        switch (number_lesson)
        {
        case 0:
            cout << "Вы вышли из программы!";
            break;


        case 1:
            cout << "Введите значение угла в градусах: ";
            cin >> a;
            if ((a < 0) || (a > 360))
            {
                cout << "Введите значение от 0 до 360: ";
                cin >> a;
            }
            a2 = a / 180;
            cout << "Значение введенного угла в радианах = " << a2 << "\n";
            break;


        case 2:
            cout << "Введите значение угла в радианах: ";
            cin >> a;
            if ((a < 0) || (a > 2 * 3.14))
            {
                cout << "Введите значение от 0 до 2*Pi: ";
                cin >> a;
            }
            a2 = a * 180;
            cout << "Значение введенного угла в градусах = " << a2 << "\n";
            break;


        case 3:
            cout << "Введите, сколько кг конфет вы купили: ";
            cin >> x;
            cout << "Введите, за сколько рублей вы купили " << x << " кг концет: ";
            cin >> a;
            z = a / x;
            cout << "Введите Y: ";
            cin >> y;
            x = z + z * y;
            cout << "1 + " << y << " кг конфет будет стоить: " << x;
            break;


        case 4:
            cout << "Введите скорость первого автомобиля: ";
            cin >> x;
            cout << "Введите скорость второго автомобиля: ";
            cin >> y;
            cout << "Введите расстояние между ними: ";
            cin >> z;
            cout << "Введите, через какое время вы хотите рассчитать расстояние между автомобилями: ";
            cin >> a;
            a2 = x * a + y * a + z;
            cout << "Расстояние между ними будет " << a2;
            break;


        case 5:
            cout << "Введите коэффициент А: ";
            cin >> a;
            cout << "Введите коэффициент В: ";
            cin >> y;
            x = (0 - y) / a;
            cout << "x = " << x;
            break;


        case 6:
            cout << "Введите коэффициенты\n" << "А1 = ";
            cin >> a;
            cout << "A2 = ";
            cin >> a2;
            cout << "B1 = ";
            cin >> b;
            cout << "B2 = ";
            cin >> b2;
            cout << "Введите значения\n" << "C1 = ";
            cin >> c;
            cout << "C2 = ";
            cin >> c2;
            z = a * b2 - a2 * b;//opredelitel 1
            x = c * b2 - c2 * b;
            y = a * c2 - a2 * c;
            x = x / z;
            y = y / z;
            cout << "x = " << x << "\ny = " << y;


        default:
            cout << "\nОшибка!"<<endl;
            break;
        }
    }
    
}
