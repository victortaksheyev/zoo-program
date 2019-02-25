#include "animals.h"

#include <iostream>

animals::animals() {
    name = "";
    species = "";
    age = 0;
    gender = 'f';
    diet = 'm';
}

void animals::setName(std::string usrName)

void animals::print() const{
    std::cout << name << " --- ";
    std::cout << "Age: " << age << " | ";
    std::cout << "Gender: " << gender << " | ";
    std::cout << "Diet: " << diet << std::endl;
}
