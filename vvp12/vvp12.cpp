#include <iostream>
using namespace std;

int number(int x) {
    if (x == 1) cout << "одно ";
    else if (x == 2) cout << "два ";
    else if (x == 3) cout << "три";
    else if (x == 4) cout << "четыре ";
    else if (x == 5) cout << "пят";
    else if (x == 6) cout << "шест";
    else if (x == 7) cout << "сем";
    else if (x == 8) cout << "восем";
    else if (x == 9) cout << "девят";
    return 0;
}

int dec(int x) {
    if (x == 2) cout << "двадцать ";
    else if (x == 3) cout << "тридцать ";
    else if (x == 4) cout << "сорок ";
    else if (x == 5) cout << "пятьдесят ";
    else if (x == 6) cout << "шестьдесят ";
    else if (x == 7) cout << "семьдесят ";
    else if (x == 8) cout << "восемьдемят ";
    else if (x == 9) cout << "десяносто ";
    return 0;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int number_lesson = -10;
    int konec;

    int a, b, n;
    char x;
    string c;


    while (number_lesson != 0) {
            cout << "\nВедите номер задания от 1 до 5. Если хотите выйти из программы введите 0.\nНомер задания: ";
            cin >> number_lesson;
        switch (number_lesson)
        {

        case 0:
            cout << "\nВы вышли из программы!";
            break;


        case 1:
            cout << "\nДан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.).\n" <<
                "Вывести дату в виде текста (например, «пятое января»).\n";
            cout << "Введите номер месяца: ";
            cin >> b;
            if ((b > 12) || (b < 1)) {
                cout << "Месяца с таким номером не бывает.\n";
                break;
            }
            cout << "Введите число этого месяца: ";
            cin >> a;
            if ((a < 1) || (a > 31)) {
                cout << "Ни в одном месяце не бывает такого числа!\n";
                break;
            }
            if ((a == 31) && ((b == 4) || (b == 6) || (b == 9) || (b == 11)))
            {
                cout << "В введенном вами месяце всего 30 дней. 31 числа нет!\n";
                break;
            }
            else if ((b == 2) && ((a == 30) || (a == 31))) {
                cout << "В феврале максимально 29 дней.\n";
                break;
            }
            cout << "Ответ: ";
            switch (b)
            {
            case 1:
                cout << a << " января\n";
                break;
            case 2:
                cout << a << " февраля\n";
                break;
            case 3:
                cout << a << " марта\n";
                break;
            case 4:
                cout << a << " апреля\n";
                break;
            case 5:
                cout << a << " мая\n";
                break;
            case 6:
                cout << a << " июня\n";
                break;
            case 7:
                cout << a << " июля\n";
                break;
            case 8:
                cout << a << " августа\n";
                break;
            case 9:
                cout << a << " сентября\n";
                break;
            case 10:
                cout << a << " октября\n";
                break;
            case 11:
                cout << a << " ноября\n";
                break;
            case 12:
                cout << a << " декабря\n";
                break;
            default:
                break;
            }
            break;


        case 2:
            cout << "\nРобот может перемещаться в четырех направлениях («N» — север, «W» — запад, «S» — юг, «E» — восток) и принимать\n" 
                << "три цифровые команды: 0 — продолжать движение, 1 — поворот налево, -1 — поворот направо.\n" << 
                "Вывести направление робота после выполнения полученной команды.\n";
            cout << "Укажите начальное напрaвление робота: ";
            cin >> x; //ishodnoe napravlenie
            /*switch (x)
            {
            case 'N':
                b = 1;
            case 'W':
                b = 2;
            case 'S':
                b = 3;
            case 'E':
                b = 4;
            default:
                cout << "Такого направления нет!";
                break;
            }*/
            
            cout << "Введите команду для робота: ";
            cin >> a;
            /*if ((a == 0) || (a == 1) || (a == -1))
            {
                b += a;
                cout << "Текущее направление робота: ";
                switch (b)
                {
                case 5:
                case 0:
                case 1:
                    cout << "север.\n";
                    break;
                case 2:
                    cout << "запад.\n";
                    break;
                case 3:
                    cout << "юг.\n";
                    break;
                case 4:
                    cout << "восток.\n";
                default:
                    break;
                }
            }
            else cout << "Такой команды нет!\n";*/
            switch (x) {
            case 'N':
                switch (a) {
                case 1:
                    cout << "Направление изменилось с севера на запад\n";
                    break;
                case 0:
                    cout << "Север\n";
                    break;
                case -1:
                    cout << "Направление изменилось с севера на восток\n";
                    break;
                }
                break;
            case 'W':
                switch (a) {
                case 1:
                    cout << "Направление изменилось с запада на юг\n";
                    break;
                case 0:
                    cout << "Запад\n";
                    break;
                case -1:
                    cout << "Направление изменилось с запада на север\n";
                    break;
                }
            case 'S':
                switch (a) {
                case 1:
                    cout << "Направление изменилось с юга на восток\n";
                    break;
                case 0:
                    cout << "Юг\n";
                    break;
                case -1:
                    cout << "Направление изменилось с юга на запад\n";
                    break;
                }
                break;
            case 'E':
                switch (a) {
                case 1:
                    cout << "Направление изменилось с востока на север\n";
                    break;
                case 0:
                    cout << "Восток\n";
                    break;
                case -1:
                    cout << "Направление изменилось с востока на юг\n";
                    break;
                }
            default:
                cout << "Вы ввели не верные значения!\n";
                break;
            }
            
            break;


        case 3:
            cout << "\nВывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами" 
                <<"\n«учебное задание»\n";
            cout << "Введите кол-во заданий (от 10 до 40): ";
            cin >> a;
            
            if ((a < 10) || (a > 40))
            {
                cout << "Число не подходит условию!\n";
                break;
            }
            else 
            {
                cout << "Ответ: ";
                b = a % 10;
                if ((a > 19)) {
                    if ((a < 30))
                    {
                        cout << "двадцать ";
                        number(b);
                    }
                    else if (a < 40) {
                        cout << "тридцать ";
                        number(b);
                    }
                    else if (a == 40) cout << "сорок";
                    if (b > 4) cout << "ь";
                    if (b == 1) cout << "учебное задание.\n";
                    else if (b == 2) cout << "учебных задания.\n";
                    else cout << " учебных заданий.\n";
                    break;
                }
                else {
                    if (b == 1) cout << "один";
                    else if (b == 2) cout << "две";
                    else if (b == 4) cout << "четыр";
                    else number(b);
                    if (b == 0) {
                        cout << "десять учебных заданий\n";
                        break;
                    }
                    cout << "надцать ";
                    cout << "учебных заданий.\n";
                }
            }
            break;
            

        case 4:
            cout << "\nВывести строку-описание данного числа.\n";
            cout << "Введите целое число от 100 до 999: ";
            cin >> a;
            if ((a < 100) || (a > 999)) {
                cout << "Число не подходит по условию!\n";
                break;
            }
            else
            {
                b = a / 100;
                if (b == 1) cout << "сто ";
                else if (b == 2) cout << "двести ";
                else if (b == 3) cout << "триста ";
                else if (b == 4) cout << "четыреста ";
                else { 
                    number(b);
                    cout << "ьсот ";
                }

                b = (a % 100) / 10;
                if (b == 1) {
                    b = a % 10;
                    if (b == 1) cout << "один";
                    else if (b == 2) cout << "две";
                    else if (b == 4) cout << "четыр";
                    else number(b);
                    if (b == 0) {
                        cout << "десять";
                        break;
                    }
                    cout << "надцать";
                    break;
                }
                else dec(b);

                b = a % 10;
                if (b == 1) cout << "один";
                else number(b);
                if (b > 4) cout << "ь";
            }
            cout << "\n";
            break;


        case 5:
            cout << "\nВ восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цвета:\n" <<
                "зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца \nи тд." << 
                " По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».\n";
            cout << "Введите год: ";
            cin >> a;
            cout << a << " год - " << "год ";
            switch ((a) % 10) {
            case 0:
            case 1:
                cout << "бел";
                break;
            case 2:
            case 3:
                cout << "черн";
                break;
            case 4:
            case 5:
                cout << "зелён";
                break;
            case 6:
            case 7:
                cout << "красн";
                break;
            case 8:
            case 9:
                cout << "жёлт";
                break;
            }

            switch ((a + 1) % 5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 9:
            case 10:
            case 11:
                cout << "ой ";
                break;
            case 6:
            case 7:
            case 8:
                cout << "ого ";
                break;
            }

            switch ((a + 8) % 12) {
            case 0:
                cout << "крысы\n";
                break;
            case 1:
                cout << "коровы\n";
                break;
            case 2:
                cout << "тигра\n";
                break;
            case 3:
                cout << "зайца\n";
                break;
            case 4:
                cout << "дракона\n";
                break;
            case 5:
                cout << "змеи\n";
                break;
            case 6:
                cout << "лошади\n";
                break;
            case 7:
                cout << "овцы\n";
                break;
            case 8:
                cout << "обезьяны\n";
                break;
            case 9:
                cout << "курицы\n";
                break;
            case 10:
                cout << "собаки\n";
                break;
            case 11:
                cout << "свиньи\n";
                break;
            }
            break;


        default:
            konec = 3;
            cout << "\nОшибка! Ведите номер задания от 1 до 5. Если хотите выйти из программы введите 0." <<
                "\nПопыток осталось: " << konec << "!\nНомер задания : ";
            cin >> number_lesson;
            while ((number_lesson < 0) || (number_lesson > 5))
            {
                konec -= 1;
                cout << "\nОшибка! Ведите номер задания от 1 до 5. Если хотите выйти из программы введите 0." <<
                    "\nПопыток осталось: " << konec << "!\nНомер задания: ";
                cin >> number_lesson;
                if (konec == 1)
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