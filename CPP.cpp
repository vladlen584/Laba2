

#include <iostream>
using namespace std;
void task1();
void task2();
void task3();
void task4();
void task5();
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

int main()
{
    task5();
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

