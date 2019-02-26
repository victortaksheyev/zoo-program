#include <math.h>
#include "birdHab.h"
#include "environment.h"

const int METERS_PER_BIRD = 3;      // each bird needs 3 meters squared of space
const int MAX_BIRD_TEMP = 80;       // max temp birds can handle

// getter for area
double birdHab::getArea() const {
    return area;
}

// getter for perim
double birdHab::getPerimeter() const {
    return perimeter;
}

// getter for number of birds
int birdHab::getNumBirds() {
    return numBirds;
}

// getter for temperature
double birdHab::getTemp() const {
    return temp;
}

// constructor
birdHab::birdHab(){
    food = "grain";
    numBirds = TOTAL_BIRDS;
    setTemp();
    createArea();
    createPerimeter();
    maxVisitors();
}

// calcs max number of visitors that will fit around perim
void birdHab::maxVisitors() {
    maxPeople = (perimeter * 2);
}

// prints useful class info
void birdHab::print() {
    std::cout << std::endl;
    std::cout << "-------------- BIRD HABITAT INFO --------------" << std::endl;
    std::cout << "Area: " << area << " square m" << std::endl;
    std::cout << "Shape: circle" << std::endl;
    std::cout << "Perimeter: " << perimeter << " m" << std::endl;
    std::cout << "Food type: " << food << std::endl;
    std::cout << "Max visitors: " << maxPeople << std::endl;
    std::cout << "Temperature: " << getTemp() << std::endl;
    std::cout << std::endl;
    std::cout << "Information about the birds at the zoo: " << std::endl << std::endl;
    for (int i = 0; i < numBirds; i++) {
        bird[i].print();
    }
}

// calcs area tbased on number of birds
void birdHab::createArea() {
    area = METERS_PER_BIRD * numBirds;      // area depends on number of birds
}

// calcs perimeter to conform to certain shape
void birdHab::createPerimeter() {
    perimeter = sqrt((area/M_PI))*2*M_PI;      // calculates circumference of circle
}

// sets temp of habitat based on number of birds
void birdHab::setTemp() {
    temp = MAX_BIRD_TEMP - (TOTAL_BIRDS * .1);   // decreases temperature by .1 degree for each bird
}
