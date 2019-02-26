#include "animals.h"

#include <iostream>
#include <string>

animals::animals() {
    name = "";
    species = "";
    age = 0;
    gender = 'f';
    diet = 'm';
}

void animals::setName(std::string usrName) {
    name = usrName;
}

std::string animals::getName() const {
    return name;
}

void animals::setSpecies(std::string usrSpecies) {
    species = usrSpecies;
}

std::string animals::getSpecies() const {
    return species;
}

void animals::setAge (int usrAge) {
    age = usrAge;
}

void animals::setGender(char usrGender) {
    gender = usrGender;
}

void animals::setDiet(char usrDiet) {
    diet = usrDiet;
}

void animals::print() const {
    std::cout << name << " --- ";
    std::cout << "Age: " << age << " | ";
    std::cout << "Gender: " << gender << " | ";
    std::cout << "Diet: " << diet << std::endl;
}
