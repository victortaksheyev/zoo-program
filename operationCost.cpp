#include "operationCost.h"

operationCost::operationCost() {
    tax = .20;              // 20 percet
    landCost = 50;          // 50 dollars per square meter
    employeeCost = 300000;  // average salary of 15$ an hour
    landAmount = 100;       // 100 meters squared of regular zoo land (without habitats atm)
    // this land is for sidewalks, etc
    yearlyCost();
}

// yearlyCost purely from
void operationCost::yearlyCost() {
    yrCost = (1+tax) * ((landAmount * landCost) + employeeCost);
}
