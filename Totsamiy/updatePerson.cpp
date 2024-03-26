#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include <algorithm>
#include "allfun.h"


void updatePerson(Person* arr, int size, int index) {
    if (index < 0 || index >= size) {
        std::cout << "Некорректный индекс для изменения." << std::endl;
        return;
    }

    std::cout << "Введите новые данные для элемента " << index << ":" << std::endl;
    std::cin.ignore();
    std::cout << "Марка: ";
    std::getline(std::cin, arr[index].name);
    std::cout << "Название: ";
    std::getline(std::cin, arr[index].surname);
    std::cout << "Комплектация: ";
    std::getline(std::cin, arr[index].сomplect);
    std::cout << "Ф.И.О: ";
    std::getline(std::cin, arr[index].fio);
    std::cout << "Цена: ";
    std::cin >> arr[index].sum;
    std::cin.ignore();
    std::cout << "Данные для элемента " << index << " успешно изменены." << std::endl;
}