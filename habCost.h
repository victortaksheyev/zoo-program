#ifndef habCost_h
#define habCost_h

#include "operationCost.h"
#include "elephantHab.h"
#include "tigerHab.h"
#include "birdHab.h"

// calculates cost of all the habitats
class habitatCost : public operationCost {
public:
    void costOfHabs();
    elephantHab eHab;       // creating objects of all habitats
    birdHab bHab;
    tigerHab tHab;
private:
};

void habitatCost::costOfHabs() {
    int totalHabArea = eHab.getArea() + bHab.getArea() + tHab.getArea();
    std::cout << totalHabArea;
}






#endif /* habCost_h */
