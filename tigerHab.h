#ifndef tigerHab_h
#define tigerHab_h

#include <math.h> // sqrt

const int METERS_PER_TIGER = 25; // each bird needs 3 meters squared of space
const int NUM_OF_TIGERS = 8;

class tigerHab : public environment{
public:
    tigerHab();
    double area() const;
    double perimeter() const;
//    int maxVisitors() const;
//    int timesToClean() const;
    void print() const;
    animals tiger[NUM_OF_TIGERS];
private:
    std::string food;
    int numTigers;
};

tigerHab::tigerHab() {
    food = "meat";
    numTigers = 0;
    numTigers = NUM_OF_TIGERS;
}

double tigerHab::area() const {
    return METERS_PER_TIGER * numTigers;
}

double tigerHab::perimeter() const {
    return sqrt(area()) * 4;
}

void tigerHab::print() const {
    std::cout << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Shape: square" << std::endl;
    std::cout << "Perimeter: " << perimeter() << std::endl;
    std::cout << "Food type: " << std::endl;
    std::cout << "Amount of food: 10" << std::endl;
    std::cout << "Max visitors: 10" << std::endl;
    std::cout << std::endl;
    std::cout << "Information about the tigers at the zoo: " << std::endl << std::endl;
    for (int i = 0; i < numTigers; i++) {
        tiger[i].print();
    }
}

#endif /* tigerHab_h */
