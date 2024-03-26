#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include <algorithm>
#include "allfun.h"


void updatePerson(Person* arr, int size, int index) {
    if (index < 0 || index >= size) {
        std::cout << "������������ ������ ��� ���������." << std::endl;
        return;
    }

    std::cout << "������� ����� ������ ��� �������� " << index << ":" << std::endl;
    std::cin.ignore();
    std::cout << "�����: ";
    std::getline(std::cin, arr[index].name);
    std::cout << "��������: ";
    std::getline(std::cin, arr[index].surname);
    std::cout << "������������: ";
    std::getline(std::cin, arr[index].�omplect);
    std::cout << "�.�.�: ";
    std::getline(std::cin, arr[index].fio);
    std::cout << "����: ";
    std::cin >> arr[index].sum;
    std::cin.ignore();
    std::cout << "������ ��� �������� " << index << " ������� ��������." << std::endl;
}