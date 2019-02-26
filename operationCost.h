#ifndef operationCost_h
#define operationCost_h
// cost associated with any type of zoo / facility
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

#endif /* operationCost_h */
