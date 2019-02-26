#ifndef habCost_h
#define habCost_h

#include "operationCost.h"
#include "elephantHab.h"
#include "tigerHab.h"
#include "birdHab.h"

// calculates cost of all the habitats
class herbHabCost : public operationCost, public elephantHab, public birdHab, public tigerHab {
public:
    herbHabCost();
    void habExpenses();
    void foodExpenses();
    double getHabsCost();      // herb hab expenses
    double getFoodCost();
    void setGrainPrice(double);
    void setMeatPrice(double);
    double getMeatCost();

protected:
    double habCost;             // cost of a hab per year;
    double foodCost;            // total price of food
    double grainPrice;
    double meatPrice;
};

#endif
