#include "elephantHab.h"
#include "environment.h"

#include <iostream>
#include <math.h>

const int METERS_PER_ELEPHANT = 40; // each bird needs 3 meters squared of space
const int MAX_ELEPHANT_TEMP = 70;

// getter for area
double elephantHab::getArea() const {
    return area;
}

// getter for perimeter
double elephantHab::getPerimeter() const {
    return perimeter;
}

// getter for num of elephants
int elephantHab::getNumElephants() {
    return numElephants;
}

// getter for temp
double elephantHab::getTemp() const {
    return temp;
}

// constructor
elephantHab::elephantHab() {
    food = "grain";
    numElephants = NUM_OF_ELEPHANTS;
    setTemp();
    createArea();
    createPerimeter();
    maxVisitors();
}

// calcs max number of vistors based on perimeter
void elephantHab::maxVisitors() {
    maxPeople = perimeter / 2;
}

// creates an area based on the number of elephants and the space they need
void elephantHab::createArea() {
    area = numElephants * METERS_PER_ELEPHANT;
}

// uses area value to create a perimeter that conforms to square
void elephantHab::createPerimeter()  {
    perimeter = sqrt(area) * 4; // square
}

void elephantHab::print() const {
    std::cout << std::endl;
    std::cout << "-------------- ELEPHANT HABITAT INFO --------------" << std::endl;
    std::cout << "Area: " << getArea() << " square m" <<std::endl;
    std::cout << "Shape: square" << std::endl;
    std::cout << "Perimeter: " << getPerimeter() << " m" << std::endl;
    std::cout << "Food type: " << food << std::endl;
    std::cout << "Max visitors: " << maxPeople << std::endl;
    std::cout << "Temperature: " << getTemp() << std::endl;
    std::cout << std::endl;
    std::cout << "Information about the elephants at the zoo: " << std::endl << std::endl;
    for (int i = 0; i < numElephants; i++) {
        elephant[i].print();
    }
}

// sets the habitat temperature, depending on the number of elephants
void elephantHab::setTemp() {
    temp = MAX_ELEPHANT_TEMP - (NUM_OF_ELEPHANTS * .5);   // decreases temperature by .5 degree for each elephant
}
