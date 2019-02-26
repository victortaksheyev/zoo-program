#include "operationCost.h"

operationCost::operationCost() {
    tax = .20;              // 20 percet
    landCost = 50;          // 50 dollars per square meter
}

double operationCost::getTax() {
    return tax;
}

double operationCost::getLandCost() {
    return landCost;
}

void operationCost::setTax(double usrTax) {
    tax = usrTax;
}

void operationCost::setLandCost(double usrLCost) {
    landCost = usrLCost;
}


