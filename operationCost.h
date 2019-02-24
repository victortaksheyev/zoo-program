#ifndef operationCost_h
#define operationCost_h
// const associated with any type of zoo / facility
class operationCost {
public:
    operationCost();
    void yearlyCost();
    virtual void costOfHabs() = 0;         // cost of maintaining habitat
protected:
    double tax;
    double landCost;        // const of land
    double landAmount;
    double employeeCost;    // cost of labor
    double yrCost;          // total cost per year
};

operationCost::operationCost() {
    tax = .20;          // 20 percet
    landCost = 50;      // 50 dollars per square meter
    employeeCost = 15;  // average salary of 15$ an hour
    landAmount = 100;   // 100 meters squared of regular zoo land (without habitats atm)
                        // this land is for sidewalks, etc
}

// yearlyCost purely from
void operationCost::yearlyCost() {
    yrCost = tax * ((landAmount*landCost) + employeeCost);
}

#endif /* operationCost_h */
