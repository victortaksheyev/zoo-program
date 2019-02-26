#include "habCost.h"

void habitatCost::costOfHabs() {
    int totalHabArea = eHab.getArea() + bHab.getArea() + tHab.getArea();
    // calcs cost of land and tax based on hab area
    habsCost = tax * (totalHabArea * landCost);
}

void habitatCost::costOfFood() {
    // adds in cost for food (depending on habitat) in a year
    foodCost = (eHab.getNumElephants() * GRAIN_COST) + (bHab.getNumBirds() * GRAIN_COST) + (tHab.getNumTigers() * MEAT_COST) * 365;
}
