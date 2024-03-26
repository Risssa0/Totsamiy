#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include <algorithm>
#include "allfun.h"


void saveToFile(const Person* arr, int& size) {
    std::ofstream file("car.txt");
    if (file.is_open()) {
        for (int i = 0; i < size; ++i) {
            file << arr[i].name << "," << arr[i].surname << "," << arr[i].сomplect << "," << arr[i].fio << "," << arr[i].sum << std::endl;
        }
        file.close();
        std::cout << "Данные успешно сохранены в файл." << std::endl;
    }
    else {
        std::cout << "Ошибка открытия файла для записи." << std::endl;
    }
}