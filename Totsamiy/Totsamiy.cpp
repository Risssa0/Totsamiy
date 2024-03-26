    #include <iostream>
    #include <string>
    #include <fstream>
    #include <iomanip>
    #include <Windows.h>
    #include <algorithm>
    #include "allfun.h"
    using namespace std;

    int main() {
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);
        setlocale(LC_ALL, "rus");
        locale russian_locale("Russian_Russia.1251");
        Person* people = nullptr;
        int size = 0;
        int choice;
        string field;


        do {
            cout << "Меню:" << endl;
            cout << "1. Ввод" << endl;
            cout << "2. Просмотр" << endl;
            cout << "3. Удаление" << endl;
            cout << "4. Изменить" << endl;
            cout << "5. Сохранить в файл" << endl;
            cout << "6. Загрузить из файла" << endl;
            cout << "7. Поиск" << endl;
            cout << "8. Сортировка" << endl;
            cout << "0. Выход" << endl;
            cout << "Выберите действие: ";
            cin >> choice;
            string field;

            string searchField; // Объявление переменной searchField
            string searchValue; // Объявление переменной searchValue

            switch (choice) {
            case 1:
                addPerson(people, size);
                break;
            case 2:
                displayPeople(people, size);
                break;
            case 3:
                int deleteIndex;
                cout << "Введите индекс элемента для удаления: ";
                cin >> deleteIndex;
                deletePerson(people, size, deleteIndex);
                break;
            case 4:
                int elementIndex;
                cout << "Введите индекс элемента для изменения: ";
                cin >> elementIndex;
                updatePerson(people, size, elementIndex);
                break;
            case 5:
                saveToFile(people, size);
                break;
            case 6:
                loadFromFile(people, size);
                break;
            case 7:
                cout << "Введите поле для поиска (name, surname, complect, fio, sum): ";
                cin >> searchField;
                cout << "Введите значение для поиска: ";
                cin >> searchValue;
                searchPerson(people, size, searchField, searchValue);
                break;
            case 8:
                int sortChoice;
                cout << "Выберите поле для сортировки:" << endl;
                cout << "1. По имени" << endl;
                cout << "2. По фамилии" << endl;
                cout << "3. По комплектации" << endl;
                cout << "4. По Ф.И.О." << endl;
                cout << "5. По цене" << endl;
                cin >> sortChoice;

                switch (sortChoice) {
                case 1:
                    field = "name";
                    sortPeople(people, size, field);
                    displayPeople(people, size);
                    break;
                case 2:
                    field = "surname";
                    sortPeople(people, size, field);
                    displayPeople(people, size);
                    break;
                case 3:
                    field = "complect";
                    sortPeople(people, size, field);
                    displayPeople(people, size);
                    break;
                case 4:
                    field = "fio";
                    sortPeople(people, size, field);
                    displayPeople(people, size);
                    break;
                case 5:
                    field = "sum";
                    sortPeople(people, size, field);
                    displayPeople(people, size);
                    break;
                default:
                    cout << "Некорректный выбор для сортировки." << endl;
                    break;
                }

            case 0:
                break;
            default:
                cout << "Некорректный выбор. Попробуйте снова." << endl;
                break;
            }

        } while (choice != 0);

        delete[] people;

        return 0;
    }