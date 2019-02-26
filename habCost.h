#ifndef habCost_h
#define habCost_h

#include "operationCost.h"
#include "elephantHab.h"
#include "tigerHab.h"
#include "birdHab.h"

/*
 * class_identifier: calculates cost of a habitat, taking into account food, area, and other variables
 * constructors:     herbHabCost();
 * public functions: void habExpenses();
                     void foodExpenses();
                     double getHabsCost();
                     double getFoodCost();
                     void setGrainPrice(double);
                     void setMeatPrice(double);
                     double getMeatCost();
 * static members: none
 */

class habitatCost : public operationCost, public elephantHab, public birdHab, public tigerHab {
public:
    habitatCost();
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
