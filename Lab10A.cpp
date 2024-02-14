#include <iostream>
#include <clocale>
using namespace std;
// Рекурсивная функция для поиска количества отрицательных элементов в массиве


int main()
{
    setlocale(LC_ALL, "Russian");
    karina();

}
int countNegativesRecursive(int arr[], int start, int end) {
    if (start >= end) {
        return (arr[start] < 0) ? 1 : 0;
    }

    int mid = start + (end - start) / 2;

    return countNegativesRecursive(arr, start, mid) + countNegativesRecursive(arr, mid + 1, end);
}

// Циклический алгоритм для поиска количества отрицательных элементов в массиве
int countNegativesIterative(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }

    return count;
}

void karina()
{
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int arr[size];
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Вызов рекурсивной функции
    int countRec = countNegativesRecursive(arr, 0, size - 1);
    cout << "Количество отрицательных элементов (рекурсивно): " << countRec << std::endl;

    // Вызов циклической функции
    int countIter = countNegativesIterative(arr, size);
    cout << "Количество отрицательных элементов (циклически): " << countIter << std::endl;

    return 0;
}