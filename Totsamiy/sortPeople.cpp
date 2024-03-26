#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include <algorithm>
#include "allfun.h"


void sortPeople(Person* arr, int size, std::string field) {
    if (field == "name") {
        std::sort(arr, arr + size, [](const Person& a, const Person& b) { return a.name < b.name; });
    }
    else if (field == "surname") {
        std::sort(arr, arr + size, [](const Person& a, const Person& b) { return a.surname < b.surname; });
    }
    else if (field == "complect") {
        std::sort(arr, arr + size, [](const Person& a, const Person& b) { return a.сomplect < b.сomplect; });
    }
    else if (field == "fio") {
        std::sort(arr, arr + size, [](const Person& a, const Person& b) { return a.fio < b.fio; });
    }
    else if (field == "sum") {
        std::sort(arr, arr + size, [](const Person& a, const Person& b) { return a.sum < b.sum; });
    }
    else {
        std::cout << "Некорректное поле для сортировки." << std::endl;
    }

    std::cout << "Данные успешно отсортированы по полю: " << field << std::endl;
}