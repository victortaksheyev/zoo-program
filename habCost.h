#ifndef habCost_h
#define habCost_h

#include "operationCost.h"
#include "elephantHab.h"
#include "tigerHab.h"
#include "birdHab.h"

const int GRAIN_COST = 3; // 3 dollars per day per animal
const int MEAT_COST = 10; // 10 dollars a day per animal

// calculates cost of all the habitats
class habitatCost : public operationCost {
public:
    void costOfHabs();
    void costOfFood();
    double getHabsCost() const {return habsCost;}
    double getFoodCost() const {return foodCost;}
    elephantHab eHab;       // creating objects of all habitats
    birdHab bHab;
    tigerHab tHab;
protected:
    double habsCost;        // cost of a hab per year;
    double foodCost;
};



#endif /* habCost_h */
