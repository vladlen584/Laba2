#include <iostream>
#include <fstream>
#include <string>

struct Student {
    std::string surname;
    int birthYear;
    std::string birthPlace;
    int examScores[3];
};

void createBinaryFile(Student* students, int numStudents) {
    std::ofstream file("students.bin", std::ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<char*>(students), numStudents * sizeof(Student));
        file.close();
        std::cout << "Binary file created successfully." << std::endl;
    }
    else {
        std::cerr << "Error creating binary file." << std::endl;
    }
}

void readBinaryFile() {
    std::ifstream file("students.bin", std::ios::binary);
    if (file.is_open()) {
        Student student;
        while (file.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
            std::cout << "Surname: " << student.surname << ", Birth Year: " << student.birthYear
                << ", Birth Place: " << student.birthPlace << std::endl;
        }
        file.close();
    }
    else {
        std::cerr << "Error opening binary file for reading." << std::endl;
    }
}

void printResultsToTextFile(Student* students, int numStudents) {
    std::ofstream file("results2.txt");
    if (file.is_open()) {
        for (int i = 0; i < numStudents; i++) {
            int totalScore = 0;
            for (int j = 0; j < 3; j++) {
                totalScore += students[i].examScores[j];
            }
            double avgScore = totalScore / 3.0;
            if (avgScore > 7) {
                file << "Surname: " << students[i].surname << ", Birth Year: " << students[i].birthYear
                    << ", Birth Place: " << students[i].birthPlace << std::endl;
            }
        }
        file.close();
        std::cout << "Results saved to text file 'results.txt'." << std::endl;
    }
    else {
        std::cerr << "Error saving results to text file." << std::endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    Student* students = new Student[numStudents];

    for (int i = 0; i < numStudents; i++) 
    {
        std::cout << "Enter student's surname: ";
        std::cin >> students[i].surname;
        std::cout << "Enter student's birth year: ";
        std::cin >> students[i].birthYear;
        std::cout << "Enter student's birth place: ";
        std::cin >> students[i].birthPlace;
        std::cout << "Enter student's three exam scores: ";
        for (int j = 0; j < 3; j++) {
            std::cin >> students[i].examScores[j];
        }
    }

    int choice;
    do {
        std::cout << "Меню:\n"
            << "1. Создать бинарный файл\n"
            << "2. Записать данные в текстовый файл\n"
            << "3. Вывести информацию о студентах с средним баллом больше 7 из бинарного файла\n"
            << "0. Выйти\n";
        std::cin >> choice;

        switch (choice) {
        case 1:
            createBinaryFile(students, numStudents);
            break;
        case 2:
            printResultsToTextFile(students, numStudents);
            break;
        case 3:
            readBinaryFile();
            break;
        case 0:
            break;
        default:
            std::cout << "Неверный ввод. Повторите попытку.\n";
            break;
        }
    } while (choice != 0);

   

    delete[] students; // Free the memory allocated for the array
    return 0;
}