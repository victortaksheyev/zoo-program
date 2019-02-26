#ifndef environment_h
#define environment_h

#include "shape.h"

/*
 * class_identifier: interface that creates framework for zoo enironments
 * constructors:     none
 * public functions:  virtual void maxVisitors() = 0; 
                      virtual void setTemp() = 0;
 * static members: none
 */


class environment : public shape{
public:
    virtual void maxVisitors() = 0;           // calcs the max number of people allowed at habitat
    virtual void setTemp() = 0;               // will return the temperature needed for habitat
protected:
    double temp;
    int maxPeople;                            // max number of poeple at each environment
};

#endif /* environment_h */
