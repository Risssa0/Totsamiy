#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include <algorithm>
#include "allfun.h"

void searchPerson(const Person* arr, int size, const std::string& field, const std::string& value) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (field == "name" && arr[i].name == value) {
            std::cout << "Найден элемент с маркой: " << arr[i].name << std::endl;
            found = true;
        }
        else if (field == "surname" && arr[i].surname == value) {
            std::cout << "Найден элемент с названием автомобиля: " << arr[i].surname << std::endl;
            found = true;
        }
        else if (field == "complect" && arr[i].сomplect == value) {
            std::cout << "Найден элемент с комплектацией: " << arr[i].сomplect << std::endl;
            found = true;
        }
        else if (field == "fio" && arr[i].fio == value) {
            std::cout << "Найден элемент с Ф.И.О.: " << arr[i].fio << std::endl;
            found = true;
        }
        else if (field == "sum" && arr[i].sum == stod(value)) {
            std::cout << "Найден элемент с ценой: " << arr[i].sum << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "Элементы не найдены по указанному полю и значению." << std::endl;
    }
}