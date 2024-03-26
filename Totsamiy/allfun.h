#pragma once
struct Person {
    std::string name;
    std::string surname;
    std::string ñomplect;
    std::string fio;
    double sum;

    Person();
};

void addPerson(Person*& arr, int& size);
void displayPeople(const Person* arr, int size);
void deletePerson(Person* arr, int& size, int index);
void updatePerson(Person* arr, int size, int index);
void saveToFile(const Person* arr, int& size);
void loadFromFile(Person*& arr, int& size);
void sortPeople(Person* arr, int size, std::string field);
void searchPerson(const Person* arr, int size, const std::string& field, const std::string& value);