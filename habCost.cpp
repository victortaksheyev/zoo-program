#include "habCost.h"

// constructor, initializing values
habitatCost::habitatCost() {
    habExpenses();
    foodExpenses();
    grainPrice = 3;
    meatPrice = 5;
}

// setter for grain price
void habitatCost::setGrainPrice(double usrGCost) {
    grainPrice = usrGCost;
}

// setter for meat price
void habitatCost::setMeatPrice(double usrMCost) {
    meatPrice = usrMCost;
}

// calcs cost of land and tax based on hab area
void habitatCost::habExpenses() {
    int totalHabArea = elephantHab::getArea() + birdHab::getArea() + tigerHab::getArea();
    habCost = (1 + tax) * (totalHabArea * landCost);
}

// calcs cost for food (depending on habitat) in a year
void habitatCost::foodExpenses() {
    foodCost = ((getNumElephants() * grainPrice) + (getNumBirds() * grainPrice) + (getNumTigers() * meatPrice)) * 365;
}

// getter for habitat cost
double habitatCost::getHabsCost()  {
    habExpenses();               // updates before returning in case it was changed
    return habCost;
}

// getter for food cost of the habitats
double habitatCost::getFoodCost() {
    foodExpenses();              // updates before returning in case it was changed
    return foodCost;
}
