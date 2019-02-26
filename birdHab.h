#ifndef habitat_h
#define habitat_h

#include <string>
#include "environment.h"
#include "animals.h"

const int METERS_PER_BIRD = 3;      // each bird needs 3 meters squared of space
const int TOTAL_BIRDS = 15;         // will establish at runtime when i learn about dynamically allocatted mem
const int MAX_BIRD_TEMP = 80;       // max temp birds can handle

class birdHab : public environment{
public:
    birdHab();
    void print();
    void setArea();
    void setPerimeter();
    void setTemp();
    double getArea() const;
    double getPerimeter() const;
    int getNumBirds();
    void maxVisitors();
    double getTemp() const;
    void foodType();    // declares type of food that needs to be delivered to habitat (grain, meat, both)
    animals bird[TOTAL_BIRDS];
private:
    std::string food;
    int numBirds;
};


#endif /* habitat_h */
