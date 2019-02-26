#ifndef tigerHab_h
#define tigerHab_h

#include "environment.h"

const int METERS_PER_TIGER = 25; // each bird needs 3 meters squared of space
const int NUM_OF_TIGERS = 8;
const int MAX_TIGER_TEMP = 50;

class tigerHab : public environment {
public:
    tigerHab();
    void setArea();
    void setPerimeter();
    double getArea() const;
    double getPerimeter() const;
    void setTemp();
    double getTemp() const;
    void maxVisitors();
    int getNumTigers();
    void print() const;
    animals tiger[NUM_OF_TIGERS];
private:
    std::string food;
    int numTigers;
};


#endif /* tigerHab_h */
