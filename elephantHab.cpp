#include "elephantHab.h"
#include "environment.h"

#include <iostream>
#include <math.h>

double elephantHab::getArea() const {
    return area;
}

double elephantHab::getPerimeter() const {
    return perimeter;
}

int elephantHab::getNumElephants() {
    return numElephants;
}

double elephantHab::getTemp() const {
    return temp;
}

void environment::maxVisitors() {
    maxPeople = perimeter/7;
}

elephantHab::elephantHab() {
    food = "grain";
    numElephants = NUM_OF_ELEPHANTS;
    setTemp();
    setArea();
    setPerimeter();
}

void elephantHab::setArea() {
    area = numElephants * METERS_PER_ELEPHANT;
}

void elephantHab::setPerimeter()  {
    perimeter = sqrt(area) * 4; // square
}

void elephantHab::print() const {
    std::cout << std::endl;
    std::cout << "-------------- ELEPHANT HABITAT INFO --------------" << std::endl;
    std::cout << "Area: " << getArea() << " square m" <<std::endl;
    std::cout << "Shape: square" << std::endl;
    std::cout << "Perimeter: " << getPerimeter() << " m" << std::endl;
    std::cout << "Food type: " << food << std::endl;
    std::cout << "Amount of food: 10" << std::endl;
    std::cout << "Max visitors: " << maxPeople << std::endl;
    std::cout << "Temperature: " << getTemp() << std::endl;
    std::cout << std::endl;
    std::cout << "Information about the elephants at the zoo: " << std::endl << std::endl;
    for (int i = 0; i < numElephants; i++) {
        elephant[i].print();
    }
}

void elephantHab::setTemp() {
    temp = MAX_ELEPHANT_TEMP - (NUM_OF_ELEPHANTS * .5);   // decreases temperature by .5 degree for each elephant
}
