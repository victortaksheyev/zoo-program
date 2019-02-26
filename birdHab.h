#ifndef habitat_h
#define habitat_h

#include <string>
#include "environment.h"
#include "animals.h"

const int TOTAL_BIRDS = 15;         // will establish at runtime when I learn about dynamically allocatted mem

class birdHab : public environment{
public:
    birdHab();
    void print();
    void createArea();
    void createPerimeter();
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


#endif
