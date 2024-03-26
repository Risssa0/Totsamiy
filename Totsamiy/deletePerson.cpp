#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include <algorithm>
#include "allfun.h"


void deletePerson(Person* arr, int& size, int index) {
    if (index < 0 || index >= size) {
        std::cout << "Некорректный индекс для удаления." << std::endl;
        return;
    }

    Person* temp = new Person[size - 1];
    for (int i = 0, j = 0; i < size; i++) {
        if (i != index) {
            temp[j++] = arr[i];
        }
    }

    delete[] arr;
    arr = temp;
    size--;
}