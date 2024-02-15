#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
struct Car {
    std::string brand;
    int year;
    float engineVolume;
    int maxSpeed;
};

void createBinaryFile(const std::vector<Car>& cars) {
    std::ofstream file("cars.bin", std::ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(cars.data()), cars.size() * sizeof(Car));
        file.close();
        cout << "Файл успешно создан!";
    } else {
        std::cout << "Ошибка создания файла" << std::endl;
    }
}

void readBinaryFile() {
    std::ifstream file("cars.bin", std::ios::binary);
    if (file.is_open()) {
        file.seekg(0, std::ios::end);
        int fileSize = file.tellg();
        file.seekg(0, std::ios::beg);

        std::vector<Car> cars(fileSize / sizeof(Car));
        file.read(reinterpret_cast<char*>(cars.data()), fileSize);

        for (const auto& car : cars) {
            std::cout << "Марка: " << car.brand << ", Год выпуска: " << car.year << ", Объем двигателя: " << car.engineVolume << ", Максимальная скорость: " << car.maxSpeed << " км/ч\n";
        }
        cout << "Результат успешно записан в файл!";
        file.close();
    } else {
        std::cout << "Ошибка открытия файла" << std::endl;
    }
}

void writeTextFile(const std::vector<Car>& cars) {
    std::ofstream file("result.txt");
    if (file.is_open()) {
        for (const auto& car : cars) {
            file << "Марка: " << car.brand << ", Год выпуска: " << car.year << ", Объем двигателя: " << car.engineVolume << ", Максимальная скорость: " << car.maxSpeed << " км/ч\n";
        }
        file.close();
        cout << "Результат успешно записан в файл!";
    } else {
        std::cout << "Ошибка создания текстового файла" << std::endl;
    }
}

int main() {
    setlocale(LC_ALL, "Rus");
    std::vector<Car> cars;
    int n;
    std::cout << "Введите количество автомобилей: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        Car car;
        std::cout << "Марка автомобиля: ";
        std::cin >> car.brand;
        std::cout << "Год выпуска: ";
        std::cin >> car.year;
        std::cout << "Объем двигателя: ";
        std::cin >> car.engineVolume;
        std::cout << "Максимальная скорость: ";
        std::cin >> car.maxSpeed;

        cars.push_back(car);
    }

    int choice;
    do {
        std::cout << "\nМеню:\n";
        std::cout << "1. Создать бинарный файл\n";
        std::cout << "2. Прочитать бинарный файл\n";
        std::cout << "3. Записать результат в текстовый файл\n";
        std::cout << "4. Выход\n";
        std::cout << "Выберите действие: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                createBinaryFile(cars);
                break;
            case 2:
                readBinaryFile();
                break;
            case 3:
                writeTextFile(cars);
                break;
            case 4:
                break;
            default:
                std::cout << "Неверный выбор. Попробуйте еще раз.\n";
                break;
        }

    } while (choice != 4);

    return 0;
}