#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include <algorithm>
#include "allfun.h"

Person::Person() : sum(0.0) {}

void addPerson(Person*& arr, int& size) {
    Person newPerson;

    std::cout << "Введите марку: ";
    std::cin.ignore(); // Очистка символа новой строки из входного потока
    std::getline(std::cin, newPerson.name);

    std::cout << "Введите название автомобиля: ";
    std::getline(std::cin, newPerson.surname);

    std::cout << "Введите комплектацию: ";
    std::getline(std::cin, newPerson.сomplect);

    std::cout << "Введите Ф.И.О: ";
    std::getline(std::cin, newPerson.fio);

    do {
        std::cout << "Введите цену: ";
        if (std::cin >> newPerson.sum) {
            break;
        }
        else {
            std::cout << "Ошибка ввода. Пожалуйста, введите корректную цену.\n";
            std::cin.clear();
            std::cin.ignore();
        }
    } while (true);

    std::cin.ignore();

    Person* temp = new Person[size + 1];

    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }

    temp[size] = newPerson;

    delete[] arr;
    arr = temp;

    size++;
}