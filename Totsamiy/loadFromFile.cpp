#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <string>
#include <algorithm>
#include "allfun.h"


void loadFromFile(Person*& arr, int& size) {
    std::ifstream file("car.txt");
    if (file.is_open()) {
        while (!file.eof()) {
            Person newPerson;
            getline(file, newPerson.name, ',');
            if (file.eof()) break; // �������� �� ����� ����� ����� ���������� ������� ����
            getline(file, newPerson.surname, ',');
            if (file.eof()) break;
            getline(file, newPerson.�omplect, ',');
            if (file.eof()) break;
            getline(file, newPerson.fio, ',');
            if (file.eof()) break;
            file >> newPerson.sum;
            file.ignore(); // ���������� ������ ����� ������
            Person* temp = new Person[size + 1];
            for (int i = 0; i < size; ++i) {
                temp[i] = arr[i];
            }
            temp[size] = newPerson;
            delete[] arr;
            arr = temp;
            size++;
        }
        file.close();
        std::cout << "������ ������� ��������� �� �����." << std::endl;
    }
    else {
        std::cout << "������ �������� ����� ��� ������." << std::endl;
    }
}