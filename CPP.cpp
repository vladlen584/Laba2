

#include <iostream>
#include <cmath>
#include <Windows.h> 
using namespace std;
void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void Lab2();
void lab3();
void test();
void Lab3B();
void Lab4();
// 1) Ввести строку через cin - вывести её несколько раз помноженную на саму себя от 1 до x (x > 0)
    //Пример:
    //"Vlad" - ввели
    //чисто 3 - ввели
    //Вывод :
    //Vlad
    //Vlad Vlad
    //Vlad Vlad Vlad
    //обрати внимание на пробелы и как выведено
//  2) ввести число x
    //Вывести все числа от 1 до x, которые являются делителями числа x(x% делитель == 0)
// Написать программу выбора из трех чисел 
//  3) ввести два числа x и y - это катеты(положительные)
//  Посчитать гипотенузу такого треугольника
//  4) Проверить что треугольник прямоугольный
//  Треугольник прямоугольный, если для его трёх сторон верно :
//  x ^ 2 = a ^ 2 + b ^ 2
//  вывести YES или NO взависимости от результата


int main()
{
    Lab4();
}

void task1()
{
    std::string name;
    int x;
    cout << "Please Enter name: ";
    cin >> name;
    cout << "Please Enter number: ";
    cin >> x;
    if (x <= 0)
    {
        std::cout << "not positive x";
      
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {
            for (int y = 1; y <= i; y++)
            {
                cout << name << " ";
            }
            cout << "\n";
        }
    }
    
}

void task2()
{
    int x;
    cout << "Please Enter number:";
    cin >> x;
    if (x <= 0)
    {
        std::cout << "not positive x";

    }
    cout << "Number divisors" << x << ": ";
    for (int i = 1; i <= x; i++) {
        if (x % i == 0)
        {
            cout << i << " ";
        }
    }
    cout <<"\n";

}

void task3()
{
    int x, y, z;
    cout<< "Please Enter number:";
    cin >> x;
    cout << "Please Enter number2:";
    cin >> y;
    cout << "Please Enter number3:";
    cin >> z;
    if (x > y && x > z)
    {
        cout << "Max number:" << x << "";
    }
    else
    {
        if (y > x && y > z)
        {
            cout << "Max number:" << y << "";
        }
        else
        {
            if (z > x && z > y)
            {
                cout << "Max number:" << z << "";
            }
            else
            {
                if (z = x)
                {
                    cout << "the numbers are equal";
                }
                else
                {
                    if (y = x)
                    {
                        cout << "the numbers are equal";
                    }
                }
            }
        }
    }
    
}

void task4()
{
    int x, y, z,p;
    int sum = 0;
    cout << "Please Enter number:";
    cin >> x;
    cout << "Please Enter number2:";
    cin >> y;
    cout << "Please Enter number3:";
    cin >> z;
    cout << "Please Enter number4:";
    cin >> p;
    if (x > 0 && y > 0 && z > 0 && p > 0)
    {
        sum = sum + x + y + x + p;
        cout << "sum="  <<sum << "";
    }
    else
    {
        if (x < 0 && y > 0 && z > 0 && p > 0)
        {
            sum = sum + y + z + p;
            cout << "sum=" << sum<<"";
        }
        else
        {
            if (x < 0 && y < 0 && z > 0 && p > 0)
            {
                sum = sum + z + p;
                cout << "sum=" << sum << "";
            }
            else
            {
                if (x < 0 && y < 0 && z < 0 && p > 0)
                {
                    sum = sum + p;
                    cout << "sum=" << sum << "";
                }
                else
                {
                    if (x < 0 && y < 0 && z < 0 && p < 0)
                    {
                        cout << "there are no positive numbers";
                    }
                }
            }
        }

    }
}

void task5() 
{
    int num1, num2, num3, num4;

   
    cout << "Enter: ";
    cin >> num1 >> num2 >> num3 >> num4;

    
    int sum = 0;

    if (num1 > 0) {
        sum += num1;
    }
    if (num2 > 0) {
        sum += num2;
    }
    if (num3 > 0) {
        sum += num3;
    }
    if (num4 > 0) {
        sum += num4;
    }

    cout << "sum: " << sum <<"\n";

   
}
void Lab2()
{
    setlocale(LC_ALL, "RUS");
    float x, y, fx = 0, a = 0;
    int g;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Исходные данные: x=" << x << " "  "y=" << y <<  "\n";
    cout << "Выберите нужную вам функцию: \n(1)sh(x)\n(2)e^x\n(3)x^2\nЧто выбираете: ";
    cin >> g;
    switch (g)
    {
    case 1:
        fx = sinh(x);
        break;
    case 2:
        fx = exp(x);
        break;
    case 3:
        fx = pow(x, 2);
        break;
    default:
        cout << "Ошибка, введенное вами число не соответствует ни одной функции!";
        break;

    }
    if ((x * y) > 0)
    {
        a = pow((fx + y), 2) - cbrt(fabs(fx));
        cout << "Значение функции равно: " << a << "\n";

    }
    if (x * y < 0)
    {
        a = pow((fx + y), 2) + sin(x);
        cout << "Значение функции равно: " << a << "\n";
    }
    if (x * y == 0)
    {
        a = pow((fx + y), 2) + pow(y, 3);
        cout << "Значение функции равно: " << a << "\n";
    }
    
  
}

void task6()
{
    setlocale(LC_ALL, "RUS");
    double a, b,g=0;
    cout << "Please Enter number:";
    cin >> a;
    cout << "Please Enter number2:";
    cin >> b;
    if (a <0 || b < 0)
    {
        cout<<"he cathet cannot be negative";
    }
    else
    {
       g = sqrt(pow(a, 2) + pow(b, 2)); 

        cout << "Гипотенуза треугольника с катетами " << a << " и " << b << " равна " <<g << "\n";

    }


}
void task7()
{
    setlocale(LC_ALL, "RUS");
    double a, b, y;
    double x, i, c;
    cout << "Please Enter number:";
    cin >> a;
    cout << "Please Enter number2:";
    cin >> b;
    cout << "Please Enter number3:";
    cin >> y;
    x = pow(a, 2);
    i = pow(b, 2);
    c = pow(y, 2);
    if (x + i == c)
    {
        cout << "Результата выполнения программы:""YES""\n";
    }
    else
    {
        cout <<"Результата выполнения программы:" "NO""\n";
    }


}

void test()
{
    setlocale(LC_ALL, "RUS");
    int chislo;
    cout << "\t\t\tТаблица умножения введенного числа\n";
    cout << "\t\t\t----------------------------------\n";
    cout << endl;
    cout << "Введите число:  ";
    cin >> chislo;
    cout << endl;
    for (int j = 1; j <= 10; j++)
    {
        cout << j << " * " << chislo << " = " << j * chislo << endl;

    }
    cout << endl;
    
}

void lab3()
{
    setlocale(LC_ALL, "Rus");
    double a, b, h;
    int n;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите n: ";
    cin >> n;
    h = (b - a) / 10;
    cout << "x\t\ty(x)\n";
    for (double x = a; x <= b; x = x + h)
    {
        double y = 0;
        for (int i = 1; i <= n; i++)
        {
            y += sin(i * x) + pow(cos(i), 2);
        }
        cout << x << "\t\t" << y << endl;
    }

}

void Lab3B()
{
    double a = 0.1, b = 1, h = (b - a) / 10;
    double x, y, s;
    int k = 160;

    cout << "x\t\ty(x)\t\ts(x)\n";
    for (x = a; x <= b; x += h)
    {
        y = sin(x);
        s = sin(x);
        double term = x;
        for (int n = 1; n <= k; n++)
        {
            term *= -1 * pow(x, 2) / ((2 * n + 1) * (2 * n));
            s = s+term;
        }
        cout << x << "\t\t" << y << "\t\t" << s << "\n";
    }

    
}

void Lab4()
{

}








