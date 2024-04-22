#include <iostream>
#include <cmath>
#include <Windows.h> 
#include <algorithm>
#include <math.h>
#include <limits>
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
void Lab4B();
void Lab5();
void Lab5B();
void Lab6();
void Lab6B();
void function(double x,int n);
void Lab7();
void Lab6B_function(double a, double b);
void Karim4ik();
void yh();

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
    
    setlocale(LC_ALL, "rus");
    int number;
    cout << "Выберите номер программы: ";
    cin >> number;
    switch (number)
    {
    case 1:
        Lab2();
        break;
    case 2:
        lab3();
        break;
    case 3:
        Lab3B();
        break;
    case 4:
        Lab4();
        break;
    case 5:
        Lab4B();
        break;
    case 6:
        Lab5();
        break;
    case 7:
        Lab5B();
        break;
    case 8:
        Lab6();
        break;
    case 999:
        Karim4ik();
    case 10:
        Lab6B();
    case 11:
        Lab7();
        break;
    default:
        yh();
        //cout << "Программы по заданному числу не обнаружено!";
        break;
    }
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
    cout << "Добро пожаловать в лабораторную работу №2""\n";
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
    cout << "Добро пожаловать в лабораторную работу №3""\n";
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
    cout << "Добро пожаловать в лабораторную работу №3B""\n";
    double a = 0.1, b = 1, h = (b - a) / 10;
    double x, y, s;
    int k = 160;

    cout << "x\t\ty(x)\t\ts(x)\n";
    for (x = a; x <= b; x += h)
    {
        y = sin(x);
        s = x;
        double term = x;
        for (double n = 1; n <= k; n++)
        {
            term *= -1 * (pow(x, 2) / ((2 * n + 1) * (2 * n)));
            s = s+term;
        }
        cout << x << "\t\t" << y << "\t\t" << s << "\n";
    }

    
}

void Lab4()
{
    setlocale(LC_ALL, "Rus");
    cout << "Добро пожаловать в лабораторную работу №4""\n";
    int arr[10];
    int sumPositive = 0;
    int productNegative = 1;

    for (int i = 0; i < 10; i++) {
        cout << "Введите " << i + 1 << "-й элемент массива: ";
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            sumPositive += arr[i];
        }
        else if (arr[i] < 0) {
            productNegative *= arr[i];
        }
    }
    cout << "Сумма положительных элементов: " << sumPositive << endl;
    cout << "Произведение отрицательных элементов: " << productNegative << endl;
}

void Lab4B()
{
    setlocale(LC_ALL, "Rus");
    cout << "Добро пожаловать в лабораторную работу №4B""\n";
   int n; 
	cout << "Количество элементов: ";
	cin >> n; 
	
    int* mass = new int[n];
	for(int i = 0; i < n; ++i)
	{
		cout << i+1 << "-ый элемент: ";
		cin >> mass[i]; 
	} 
	
	cout << "Исходный массив: ";
	for(int i = 0; i < n; ++i)
	{
		cout << mass[i] << " ";
	}
	cout << endl;
	
	
	for(int i = 1; i < n; ++i)
	{
		for(int r = 0; r < n-i; r++)
		{
			if(mass[r] < mass[r+1])
			{
			
				int temp = mass[r];
				mass[r] = mass[r+1];
				mass[r+1] = temp;
			}
		}
	}
	cout << "Отсортированный массив: ";
	for(int i = 0; i < n; ++i)
	{
		cout << mass[i] << " ";
	}
	cout << endl;

}

void Lab5()
{
    setlocale(LC_ALL, "Rus");
    cout << "Добро пожаловать в лабораторную работу №5""\n";
    int arr[5][5];
    int zeroRows = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Введите элемент [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++) 
    {
        bool hasZero = false;
        for (int j = 0; j < 5; j++) 
        {
            if (arr[i][j] == 0)
            {
                hasZero = true;
                break;
            }
        }
        if (hasZero) {
            zeroRows++;
        }
    }
    cout << "Количество строк, в которых встречаются нулевые элементы: " << zeroRows << endl;
}

void Lab5B()
{
    setlocale(LC_ALL, "Rus");
    cout << "Добро пожаловать в лабораторную работу №5B""\n";
    int N, M,max=0,min=0;
    cout << "Количество элементов строк: ";
    cin >> N;
    cout << "Количество элементов столбцов: ";
    cin >> M;
    if(N>100||M>100||N<0||M<0)
    {
        cout << "Превышен лимит значения";
        return;
    }
   
    int mass[100][100];
    int min_v = INT16_MAX, max_v = INT16_MIN;

    for(int i=0;i<N;i++)
    {
        for(int y=0;y<M;y++)
        {
            cout << "Введите элемент [" << i+1 << "][" << y+1 << "]: ";
            cin >> mass[i][y];
            if(mass[i][y]>max_v)
            {
                max_v = mass[i][y];
                max = i;
              
            }
            else
            {
                if (mass[i][y] < min_v)
                {
                    min_v = mass[i][y];
                    min = i;
                }

            }
        }
       
    }
    cout << "\nИсходная матрица:\n";
    for (int i = 0; i < N; i++)
    {
        for (int y = 0; y < M; y++)
        {
            cout << mass[i][y] << " ";
        }
        cout << endl;
    }
    for (int y = 0; y < M; y++)
    {
        int temp = mass[min][y];
        mass[min][y] = mass[max][y];
        mass[max][y] = temp;
    }
    cout << "\nИзмененная матрица:\n";
    for (int i = 0; i < N; i++) 
    {
        for (int y = 0;y < M; y++)
        {
            cout << mass[i][y] << " ";
        }
        cout << endl;
    }

}

void Lab6()
{
    setlocale(LC_ALL, "Rus");
    cout << "Добро пожаловать в лабораторную работу №6""\n";
    double a = 0.13, b = 0.9, h;
    int n=10;;
    h = (b - a) / 10;
    for (double x = a; x <= b; x = x + h)
    {
        function(x,n);
    }
}

void function(double x, int n)
{
    double y = 0;
    for (int i = 1; i <= n; i++)
    {
        y += 3*exp(i*x) + 1 / tan(x);
    }
    cout << x << "\t\t" << y << endl;

}

void Karim4ik()
{
    setlocale(LC_ALL,"Rus");
    int n;
    cout << "Количество элементов: ";
    cin >> n;
    int* mass = new int[n];
    int number = sizeof(mass) / sizeof(mass[n=0]);
    for (int i = 0; i < n; ++i)
    {
        cout << i + 1 << "-ый элемент: ";
        cin >> mass[i];
    }

    cout << "Исходный массив: ";
    for (int i = 0; i < n; ++i)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
    for(int i=0;i<number;i++)
    {
        if(mass[i]==mass[number]-1)
        {
            cout << "Элемент " << mass[i] << "входит в массив  более одного раза \n";
            break;
        }
        else
        {
            cout << "Элемент " << mass[i] << " входит в массив не более одного раза!";
            break;
        }
    }
}

void Lab6B()
{
    cout << "Добро пожаловать в лабораторную работу №3B""\n";
    double a = 0.8, b = 1.8, h = (b - a) / 10;
    double x, y, s=0;
    int n = 1;
    cout << "x\t\ty(x)\t\ts(x)\n";
    Lab6B_function(a,b);

}

void Lab6B_function(double a,double b)
{
    int n = 1;
    double s = 0;
    double y = 0;
    double h = (b - a) / 10;
    for (double x = a; x <= b; x += h)
    {
        s += -1 * pow(-1, n) * pow(x - 1, n) / n;
        n++;
        y = round(log(x) * 10000) / 10000;
        s = round(s * 10000) / 10000;
        cout << x << "\t\t" << y << "\t\t" << s << "\n";
    }
}

void yh()
{
    cout << "Добро пожаловать в лабораторную работу №3B""\n";
    double a = 0.1, b = 1, h = (b - a) / 10;
    double x, y, s;
    int k = 140;

    cout << "x\t\ty(x)\t\ts(x)\n";
    for (x = a; x <= b; x += h)
    {
        y = exp(2*x);
        s = 1;
        double term = s;
        for (double n = 1; n <= k; n++)
        {
            term *= (2 * x) / n;
            s = s + term;
        }
        cout << x << "\t\t" << y << "\t\t" << s << "\n";
    }
}

void Lab7()
{
    setlocale(LC_ALL, "Rus");
    cout << "В разработке!";
}

void Lab11()
{

    int n=1;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    int* arr = new int[n];
    std::cout << "Введите " << n << " целых чисел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    bubbleSort(arr, n);

    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Обмен значениями
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

include <iostream>
#include <unordered_map>
#include <vector>

void removeDuplicates(std::vector<int>& arr) {
    std::unordered_map<int, int> countMap;
    
    for (int num : arr) {
        countMap[num]++;
    }
    
    arr.erase(std::remove_if(arr.begin(), arr.end(), [&](int num) { return countMap[num] > 1; }), arr.end());
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 2, 5, 6, 3, 7, 8, 2};
    
    std::cout << "Original array:" << std::endl;
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    removeDuplicates(arr);
    
    std::cout << "Array after removing duplicates:" << std::endl;
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}


include <iostream>
#include <unordered_map>
#include <algorithm>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 3, 7, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::unordered_map<int, int> countMap;

    for (int i = 0; i < n; ++i) {
        countMap[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i < n; ++i) {
        if (countMap[arr[i]] == 1) {
            arr[index++] = arr[i];
        }
    }

    n = index;

    std::cout << "Array after removing duplicates:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

// изменение 14.04.24
struct Student{
    string surname;
    int birthYear;
    int key;
};

int linearSearch(Student arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i].key == key) {
            return i;
        }
    }
    return -1; // элемент не найден
}

int binarySearch(Student arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid].key == key) {
            return mid;
        }
        else if (arr[mid].key < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1; // элемент не найден
}
void findStudentBornIn1980(Student arr[], int size) {
    int index = linearSearch(arr, size, 1980);

    if (index != -1) {
        cout << "Фамилия студента, родившегося в 1980 году: " << arr[index].surname << endl;
    }
    else {
        cout << "Студент, родившийся в 1980 году, не найден." << endl;
    }
}

int countNegativeElements(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

void Lab12b()
{

    setlocale(LC_ALL, "Rus");
    // Ввод массива структур Student с клавиатуры
    const int size = 5; // размер массива
    Student students[size] = { {"Иванов", 1978, 1980}, {"Петров", 1980, 1990}, {"Сидоров", 1979, 2000}, {"Козлов", 1982, 2005}, {"Смирнов", 1985, 2010} };

    // Поиск студента, родившегося в 1980 году
    findStudentBornIn1980(students, size);

    // Подсчет отрицательных элементов в массиве
    int n;
    cout << "Введите размер массива" << endl;
    cin >> n;
    int* mass = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "-ый элемент: ";
        cin >> mass[i];
    }
    int negativeCount = countNegativeElements(mass, size);
    cout << "Количество отрицательных элементов в массиве: " << negativeCount << endl;

   
}

// изменения 23.04.24

struct tlist {
    int inf;
    tlist* a;
};

// Добавление элемента в стек
tlist* AddStack(tlist* sp, int inf) {
    tlist* spt = new tlist;
    spt->inf = inf;
    spt->a = sp;
    return spt;
}

// Чтение элемента с удалением
tlist* ReadStackD(tlist* sp, int& inf) {
    if (sp == NULL) return NULL;
    tlist* spt = sp;
    inf = sp->inf;
    sp = sp->a;
    delete spt;
    return sp;
}

// Удаление элемента, следующего за текущим
void DelStackAfter(tlist* sp) {
    if (sp->a == NULL) return;
    tlist* spt = sp->a;
    sp->a = sp->a->a;
    delete spt;
}

// Добавление элемента в стек после текущего
void AddStackAfter(tlist* sp, int inf) {
    tlist* spt = new tlist;
    spt->inf = inf;
    if (sp->a == NULL) spt->a = NULL;
    else spt->a = sp->a;
    sp->a = spt;
}

// Удаление всего стека
tlist* DelStackAll(tlist* sp) {
    tlist* spt;
    int inf;
    while (sp != NULL) {
        spt = sp;
        inf = sp->inf;
        cout << inf << endl;
        sp = sp->a;
        delete spt;
    }
    return NULL;
}

// Нахождение минимального элемента в стеке
int FindMinInStack(tlist* sp, int& minVal) {
    if (sp == NULL) return -1; // Стек пуст
    minVal = sp->inf; // Инициализация минимального значения
    tlist* current = sp;
    while (current != NULL) {
        if (current->inf < minVal) {
            minVal = current->inf; // Обновление минимального значения
        }
        current = current->a;
    }
    return 0; // Успешное выполнение
}

void Lab13A()
{
    setlocale(LC_ALL, "Rus");
    tlist* stack = NULL; // Инициализация пустого стека
    int n;
    cout << "Введите количество элементов в стеке: ";
    cin >> n;

    cout << "Введите элементы стека: ";
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        stack = AddStack(stack, value); // Добавление элементов в стек
    }

    int minVal = INT_MAX;
    if (FindMinInStack(stack, minVal) == -1) {
        cout << "Стек пуст." << endl;
    }
    else {
        cout << "Минимальный элемент в стеке: " << minVal << endl;
    }

    // Освобождение памяти
    stack = DelStackAll(stack);
}

// Для лиды 

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

struct VegetableSeed {
    std::string name;
    std::vector<int> plantingMonths;
};

int main() {
    // Выделение памяти для списка семян овощей
    int n;
    std::cout << "Введите количество семян овощей: ";
    std::cin >> n;
    VegetableSeed* seeds = new VegetableSeed[n];

    // Ввод данных
    std::cout << "Введите данные о семенах овощей:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "Семя " << i + 1 << ":\n";
        std::cout << "Название: ";
        std::cin >> seeds[i].name;
        std::cout << "Месяцы посадки: ";
        int month;
        for (int j = 0; j < 3; ++j) {
            std::cin >> month;
            seeds[i].plantingMonths.push_back(month);
        }
    }

    // Сортировка списка по названию и вывод названий овощей с урожаем в августе
    std::sort(seeds, seeds + n, [](const VegetableSeed& a, const VegetableSeed& b) {
        return a.name < b.name;
    });
    std::cout << "\nОвощи с урожаем в августе:\n";
    for (int i = 0; i < n; ++i) {
        if (std::find(seeds[i].plantingMonths.begin(), seeds[i].plantingMonths.end(), 8) != seeds[i].plantingMonths.end()) {
            std::cout << seeds[i].name << std::endl;
        }
    }

    // Освобождение памяти
    delete[] seeds;
    return 0;
}


