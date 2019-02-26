#include <math.h> // sqrt
#include "animals.h"
#include "tigerHab.h"
#include "environment.h"

const int MAX_TIGER_TEMP = 50;
const int METERS_PER_TIGER = 25; // each tiger needs 25 meters squared of space

double tigerHab::getArea() const {
    return area;
}

double tigerHab::getPerimeter() const {
    return perimeter;
}

int tigerHab::getNumTigers() {
    return numTigers;
}

double tigerHab::getTemp() const {
    return temp;
}

void tigerHab::maxVisitors() {
    maxPeople = perimeter / 3;
}

tigerHab::tigerHab() {
    food = "meat";
    numTigers = 0;
    numTigers = NUM_OF_TIGERS;
    setTemp();
    createArea();
    createPerimeter();
    maxVisitors();
}

void tigerHab::createArea() {
    area = METERS_PER_TIGER * numTigers;
}

void tigerHab::createPerimeter() {
    perimeter = sqrt(area) * 4;
}

void tigerHab::print() const {
    std::cout << std::endl;
    std::cout << "-------------- TIGER HABITAT INFO --------------" << std::endl;
    std::cout << "Area: " << getArea() << " m squared" << std::endl;
    std::cout << "Shape: square" << std::endl;
    std::cout << "Perimeter: " << getPerimeter() << " m" <<  std::endl;
    std::cout << "Food type: " << food << std::endl;
    std::cout << "Max visitors: " << maxPeople << std::endl;
    std::cout << "Temperature: " << getTemp() << std::endl;
    std::cout << std::endl;
    std::cout << "Information about the tigers at the zoo: " << std::endl << std::endl;
    for (int i = 0; i < numTigers; i++) {
        tiger[i].print();
    }
}

void tigerHab::setTemp() {
    temp = MAX_TIGER_TEMP - (NUM_OF_TIGERS * .3);
}
