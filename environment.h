#ifndef environment_h
#define environment_h

#include "coord.h"

class environment {
public:
    virtual double area() const = 0;          // calcs and returns size based on the number and type of animals
    virtual double perimeter() const = 0;     // calcs and returns dimensions based on area and shape of habitat
//    virtual int maxVisitors() = 0;      // calcs and returns max number of people allowed at habitat
//    virtual int timesToClean() = 0;     // returns number of times to clean depending on animals and amount
//    coord pos;                          // refers to its center
    
protected:
    double width;
    double length;
    double temp;
};

#endif /* environment_h */
