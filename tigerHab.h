#ifndef tigerHab_h
#define tigerHab_h

#include "environment.h"

const int NUM_OF_TIGERS = 8;        // will establish at runtime when I learn about dynamically allocatted mem

class tigerHab : public environment {
public:
    tigerHab();
    void createArea();
    void createPerimeter();
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


#endif
