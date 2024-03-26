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
            std::cout << "������ ������� � ������: " << arr[i].name << std::endl;
            found = true;
        }
        else if (field == "surname" && arr[i].surname == value) {
            std::cout << "������ ������� � ��������� ����������: " << arr[i].surname << std::endl;
            found = true;
        }
        else if (field == "complect" && arr[i].�omplect == value) {
            std::cout << "������ ������� � �������������: " << arr[i].�omplect << std::endl;
            found = true;
        }
        else if (field == "fio" && arr[i].fio == value) {
            std::cout << "������ ������� � �.�.�.: " << arr[i].fio << std::endl;
            found = true;
        }
        else if (field == "sum" && arr[i].sum == stod(value)) {
            std::cout << "������ ������� � �����: " << arr[i].sum << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "�������� �� ������� �� ���������� ���� � ��������." << std::endl;
    }
}