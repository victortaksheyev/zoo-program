#include <math.h> // sqrt
#include "animals.h"
#include "tigerHab.h"
#include "environment.h"

const int MAX_TIGER_TEMP = 50;
const int METERS_PER_TIGER = 25; // each tiger needs 25 meters squared of space

// getter for area
double tigerHab::getArea() const {
    return area;
}

// getter for perim
double tigerHab::getPerimeter() const {
    return perimeter;
}

// getter for num of tigers
int tigerHab::getNumTigers() {
    return numTigers;
}

// getter for temp
double tigerHab::getTemp() const {
    return temp;
}

// calcs max visitors based on perimeter
void tigerHab::maxVisitors() {
    maxPeople = perimeter / 3;
}

// constructor
tigerHab::tigerHab() {
    food = "meat";
    numTigers = 0;
    numTigers = NUM_OF_TIGERS;
    setTemp();
    createArea();
    createPerimeter();
    maxVisitors();
}

// calcs area based on space and number of tigers
void tigerHab::createArea() {
    area = METERS_PER_TIGER * numTigers;
}

// calcs perimeter to conform to certain shape
void tigerHab::createPerimeter() {
    perimeter = sqrt(area) * 4;
}

// prints info of class
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

// sets temperature, depending on animal info
void tigerHab::setTemp() {
    temp = MAX_TIGER_TEMP - (NUM_OF_TIGERS * .3);
}
