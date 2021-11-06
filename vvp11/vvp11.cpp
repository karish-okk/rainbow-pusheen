#include <iostream>
#include <algorithm> //библиотека для сортировки массива
#include <cmath>
using namespace std;

int main()
{
    int number_lesson = 17;
    int konec;

    int temp;
    int a, b, c, d;
    int x1, y1, x2, y2;
    double s1, s2;
    int arr[3];


    cout << 99 % 1000;
    cout << 100 % 1000;
    cout << 897 % 1000;
    setlocale(LC_ALL, "rus");
    while (number_lesson != 0) {
        cout << "\nВведите номер задания от 1 до 6, или 0, если хотите выйти из программы\n";
        cin >> number_lesson;
        switch (number_lesson)
        {
        case 0:
            cout << "Вы вышли из программы!";
            break;

        case 1:
            cout << "A = ";
            cin >> a;
            cout << "B = ";
            cin >> b;
            if (a == b) {
                a = 0;
                b = 0;
            }
            else if (a > b)
            {
                b = a;
            }
            else a = b;
            cout << "New value for A = " << a << "\n";
            cout << "New value for B = " << b;
            break;


        case 2:
            cout << "A = ";
            cin >> arr[0];
            cout << "B = ";
            cin >> arr[1];
            cout << "C = ";
            cin >> arr[2];
            
            sort(arr, arr + 3);
            cout << arr[1] + arr[2];
            break;


        case 3:
            cout << "Если вы хотите работать на координатной плоскости, введите нечетное число.\n" <<
                "Если хотите работать с координатной прямой, введите четное число.\n";
            cin >> temp;
            if (temp % 2 != 0) {
                cout << "Вы находитесь в режиме работы с координатной плоскостью.\n";
                cout << "Enter coordinates of point A:\nx = ";
                cin >> a;
                cout << "y = ";
                cin >> b;
                cout << "Enter coordinates of point B:\nx = ";
                cin >> x1;
                cout << "y = ";
                cin >> y1;
                cout << "Enter coordinates of point C:\nx = ";
                cin >> x2;
                cout << "y = ";
                cin >> y2;

                s1 = sqrt((a - x1) * (a - x1) + (b - y1) * (b - y1)); //AB
                s2 = sqrt((a - x2) * (a - x2) + (b - y2) * (b - y2)); //AC
                if (s1 > s2) {
                    cout << "Точка С расположена ближе к А. Расстояние от А до С = " << s2;
                    break;
                }
                else if (s2 > s1) {
                    cout << "Точка B расположена ближе к А. Расстояние от А до B = " << s1;
                    break;
                }
                else {
                    cout << "Расстояния от А до В и от А до С одинаковы и равны " << s1;
                    break;
                }
            }
            else {
                cout << "Вы в режиме работы с числовой прямой.\n" <<
                    "Enter coordinate of point A: ";
                cin >> a;
                cout << "Enter coordinate of point B: ";
                cin >> x1;
                cout << "Enter coordinate of point C: ";
                cin >> x2;
                b = abs(x1 - a);
                c = abs(x2 - a);
                if (b > c) {
                    cout << "Расстояние от С до А меньше и равно " << c;
                    break;
                }
                else if (c > b) {
                    cout << "Расстояние от B до А меньше и равно " << b;
                    break;
                }
                else {
                    cout << "Расстояния от А до В и от А до С одинаковы и равны " << b;
                    break;
                }
            }
            
            break;


        case 4:
            cout << "Enter coordinates of point A (not be equal to 0):\nx = ";
            cin >> a;
            cout << "y = ";
            cin >> b;
            if ((a == 0) || (b == 0)) {
                cout << "point A lies on one of the axes.";
                break;
            }
            if (a < 0) {
                if (b < 0) {
                    cout << "Point A lies on III quarters.";
                }
                else cout << "Point A lies on II quarters.";
            }
            if (a > 0) {
                if (b > 0) cout << "Point A lies on I quarters.";
                else cout << "Point A lies on IV quarters.";
            }
            break;


        case 5:
            cout << "Enter an integer: ";
            cin >> a;
            if (a == 0) {
                cout << "Нулевое число";
                break;
            }

            if (a < 0) cout << "Отрицательное ";
            else cout << "Положительное ";

            if (a % 2 == 0) cout << "четное ";
            else cout << "нечетное ";
            cout << "число";
            break;


        case 6:
            cout << "Enter an integer from 1 to 999: ";
            cin >> a;
            if ((a < 1) || (a > 999)) {
                cout << "Error! Try again to enter an integer from 1 to 999: ";
                cin >> a;
                konec = 0;
                while ((a < 1) || (a > 999)) {
                    cout << "Error! Try again to enter an integer from 1 to 999. You have " << 2 - konec << "attempts left!\n";
                    cin >> a;
                    konec++;
                    if (konec == 2) {
                        cout << "You lost your attempts!";
                        break;
                    }
                }
            }
            if (a % 2 == 0) cout << "Четное ";
            else cout << "Нечетное ";
            
            if ((a % 1000) < 10) cout << "однозначное ";
            else if ((a % 1000) < 100) cout << "двузначное ";
            else cout << "трёхзначное ";
            cout << "число";
            break;


        default:
            cout << "\nОшибка! Введите номер задания от 1 до 6, или 0, если хотите выйти из программы\n";
            konec = 0;
            cin >> number_lesson;
            while ((number_lesson > 6) || (number_lesson < 0))
            {
                cout << "\nОшибка! Введите номер задания от 1 до 6, или 0, если хотите выйти из программы\nУ вас осталось "
                    << 2 - konec << " попыток!\n";
                cin >> number_lesson;
                konec++;
                
                if (konec == 2) {
                    cout << "Количество попыток закончилось.\nВы вышли из программы!";
                    number_lesson = 0;
                    break;
                }
            }
            break;
        }
    }
}