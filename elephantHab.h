#ifndef elephantHab_h
#define elephantHab_h

#include <string>
#include "environment.h"
#include "animals.h"

const int NUM_OF_ELEPHANTS = 7;     // will establish at runtime when I learn about dynamically allocatted mem

/*
 * class_identifier: initializes and performs operations on elephant habitat
 * constructors:     elephantHab();
 * public functions: void createArea();
                     void createPerimeter();
                     double getArea() const;
                     double getPerimeter() const;
                     int getNumElephants();
                     void maxVisitors();
                     void print() const;
                     void setTemp();
                     double getTemp() const;
 * static members: none
 */

class elephantHab : public environment {
public:
    elephantHab();
    void createArea();
    void createPerimeter();
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

#endif
