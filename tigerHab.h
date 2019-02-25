#ifndef tigerHab_h
#define tigerHab_h

#include <math.h> // sqrt

const int METERS_PER_TIGER = 25; // each bird needs 3 meters squared of space
const int NUM_OF_TIGERS = 8;
const int MAX_TIGER_TEMP = 50;

class tigerHab : public environment {
public:
    tigerHab();
    void setArea();
    void setPerimeter();
    double getArea() const {return area;}
    double getPerimeter() const {return perimeter;}
    void setTemp();
    double getTemp() const {return temp;}
    int getNumTigers() {return numTigers;}
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
    setTemp();
    setArea();
    setPerimeter();
}

void tigerHab::setArea() {
    area =  METERS_PER_TIGER * numTigers;
}

void tigerHab::setPerimeter() {
    perimeter = sqrt(area) * 4;
}

void tigerHab::print() const {
    std::cout << std::endl;
    std::cout << "-------------- TIGER HABITAT INFO --------------" << std::endl;
    std::cout << "Area: " << getArea() << " m squared" << std::endl;
    std::cout << "Shape: square" << std::endl;
    std::cout << "Perimeter: " << getPerimeter() << " m" <<  std::endl;
    std::cout << "Food type: " << food << std::endl;
    std::cout << "Amount of food: 10" << std::endl;
    std::cout << "Max visitors: 10" << std::endl;
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
#endif /* tigerHab_h */
