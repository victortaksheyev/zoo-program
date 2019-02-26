#include "animals.h"

#include <iostream>
#include <string>
#include <iomanip>

// constructor setting values
animals::animals() {
    name = "";
    species = "";
    age = 0;
    gender = 'f';
    diet = 'm';
}

// setter for name
void animals::setName(std::string usrName) {
    name = usrName;
}

// getter for name
std::string animals::getName() const {
    return name;
}

// setter for species
void animals::setSpecies(std::string usrSpecies) {
    species = usrSpecies;
}

// getter for species
std::string animals::getSpecies() const {
    return species;
}

// setter for age
void animals::setAge(int usrAge) {
    age = usrAge;
}

// setter for gender
void animals::setGender(char usrGender) {
    gender = usrGender;
}

// setter for diet
void animals::setDiet(char usrDiet) {
    diet = usrDiet;
}

// prints info of the class
void animals::print() const {
    std::cout << std::setw(8) << name << " --- ";
    std::cout << "Age: " << age << " | ";
    std::cout << "Gender: " << gender << " | ";
    std::cout << "Diet: " << diet << std::endl;
}
