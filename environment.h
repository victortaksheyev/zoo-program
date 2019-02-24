#ifndef environment_h
#define environment_h

#include "coord.h"
#include "shape.h"

class environment : public shape{
public:
//    virtual int maxVisitors() = 0;              // calcs and returns max number of people allowed at habitat
    virtual void setTemp() = 0;                 // will return the temperature needed for habitat
    coord pos;
protected:
    double temp;
};

#endif /* environment_h */
