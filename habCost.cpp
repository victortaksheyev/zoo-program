#include "habCost.h"

herbHabCost::herbHabCost() {
    habExpenses();
    foodExpenses();
    grainPrice = 3;
    meatPrice = 5;
}

void herbHabCost::setGrainPrice(double usrGCost) {
    grainPrice = usrGCost;
}

void herbHabCost::setMeatPrice(double usrMCost) {
    meatPrice = usrMCost;
}

void herbHabCost::habExpenses() {
    int totalHabArea = elephantHab::getArea() + birdHab::getArea() + tigerHab::getArea();
    // calcs cost of land and tax based on hab area
    habCost = (1 + tax) * (totalHabArea * landCost);
}

void herbHabCost::foodExpenses() {
    // adds in cost for food (depending on habitat) in a year
    foodCost = ((getNumElephants() * grainPrice) + (getNumBirds() * grainPrice) + (getNumTigers() * meatPrice)) * 365;
}

double herbHabCost::getHabsCost()  {
    habExpenses();               // updates before returning in case it was changed
    return habCost;
}

double herbHabCost::getFoodCost() {
    foodExpenses();              // updates before returning in case it was changed
    return foodCost;
}
