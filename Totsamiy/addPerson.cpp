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

    std::cout << "������� �����: ";
    std::cin.ignore(); // ������� ������� ����� ������ �� �������� ������
    std::getline(std::cin, newPerson.name);

    std::cout << "������� �������� ����������: ";
    std::getline(std::cin, newPerson.surname);

    std::cout << "������� ������������: ";
    std::getline(std::cin, newPerson.�omplect);

    std::string inputFio;
    bool containsDigits = false;

    do {
        std::cout << "������� �.�.�: ";
        std::getline(std::cin, inputFio);
        containsDigits = false;

        for (char c : inputFio) {
            if (std::isdigit(c)) {
                containsDigits = true;
                break;
            }
        }

        if (containsDigits) {
            std::cout << "�.�.� �� ������ ��������� �����. ���������� �����." << std::endl;
        }

    } while (containsDigits);

    newPerson.fio = inputFio;

    do {
        std::cout << "������� ����: ";
        if (std::cin >> newPerson.sum) {
            break;
        }
        else {
            std::cout << "������ �����. ����������, ������� ���������� ����.\n";
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