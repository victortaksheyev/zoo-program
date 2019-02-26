#include <math.h>
#include "birdHab.h"

double birdHab::getArea() const {
    return area;
}

double birdHab::getPerimeter() const {
    return perimeter;
}

int birdHab::getNumBirds() {
    return numBirds;
}

double birdHab::getTemp() const {
    return temp;
}

birdHab::birdHab(){
    food = "grain";
    numBirds = TOTAL_BIRDS;
    setTemp();
    setArea();
    setPerimeter();
}

void environment::maxVisitors() {
    maxPeople = (perimeter * 2);
}

void birdHab::print() {
    std::cout << std::endl;
    std::cout << "-------------- BIRD HABITAT INFO --------------" << std::endl;
    std::cout << "Area: " << area << " square m" << std::endl;
    std::cout << "Shape: circle" << std::endl;
    std::cout << "Perimeter: " << perimeter << " m" << std::endl;
    std::cout << "Food type: " << food << std::endl;
    std::cout << "Amount of food: 10" << std::endl;
    std::cout << "Max visitors: 10" << std::endl;
    std::cout << "Temperature: " << getTemp() << std::endl;
    std::cout << std::endl;
    std::cout << "Information about the birds at the zoo: " << std::endl << std::endl;
    for (int i = 0; i < numBirds; i++) {
        bird[i].print();
    }
}

void birdHab::setArea() {
    area = METERS_PER_BIRD * numBirds;      // area depends on number of birds
}

void birdHab::setPerimeter() {
    perimeter = sqrt((area/M_PI))*2*M_PI;      // calculates circumference of circle
}

void birdHab::setTemp() {
    temp = MAX_BIRD_TEMP - (TOTAL_BIRDS * .1);   // decreases temperature by .1 degree for each bird
}
