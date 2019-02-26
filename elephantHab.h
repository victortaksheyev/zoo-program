#ifndef elephantHab_h
#define elephantHab_h

#include <string>
#include "environment.h"
#include "animals.h"

const int METERS_PER_ELEPHANT = 40; // each bird needs 3 meters squared of space
const int NUM_OF_ELEPHANTS = 7;
const int MAX_ELEPHANT_TEMP = 70;

class elephantHab : public environment {
public:
    elephantHab();
    void setArea();
    void setPerimeter();
    double getArea() const;
    double getPerimeter() const;
    int getNumElephants();
    void maxVisitors();
    void print() const;
    void setTemp();
    double getTemp() const;
    animals elephant[NUM_OF_ELEPHANTS];
private:
    std::string food;
    int numElephants;
};

#endif /* elephantHab_h */
