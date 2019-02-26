#include "operationCost.h"

// constructor
operationCost::operationCost() {
    tax = .20;              // 20 percet
    landCost = 50;          // 50 dollars per square meter
}

// getter for tax
double operationCost::getTax() {
    return tax;
}

// getter for landcost
double operationCost::getLandCost() {
    return landCost;
}

// setter for tax
void operationCost::setTax(double usrTax) {
    tax = usrTax;
}

// setter for landcost
void operationCost::setLandCost(double usrLCost) {
    landCost = usrLCost;
}


