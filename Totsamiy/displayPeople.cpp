#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include <algorithm>
#include "allfun.h"
#include <iomanip>


void displayPeople(const Person* arr, int size) {
    system("color B");
    std::cout << "------------------------------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << " Марка\t\t| Название\t\t\t| Комплектация\t\t| ФИО\t\t\t\t | Цена" << std::endl;
    std::cout << "------------------------------------------------------------------------------------------------------------------------" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << std::left << " " << std::setw(15) << arr[i].name << " | " << std::setw(25) << arr[i].surname << " | " << std::setw(20) << arr[i].сomplect << " | " << std::setw(30) << arr[i].fio << " | " << std::setw(10) << std::fixed << std::setprecision(0) << arr[i].sum << std::endl;
    }
}