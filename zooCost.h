#ifndef zooCost_h
#define zooCost_h

#include "habCost.h"

class zooCost : public herbHabCost{
public:
    zooCost();
    void setAdmissionPrice(int);
    double getAdmissionPrice() const;
    void setVisitors(int);
    void calcTotalExp();                        // calcs total expenses
    void print();                               // updates and prints info
    void calcProfit();
    double getProfit();
    void setEmployeeCost(double);
    void yearlyCost();
private:
    double expenses;
    double profit;
    int visitors;
    double admissionPrice;
    double yrCost;                              // total cost per year
    
    double landAmount;
    double employeeCost;                        // cost of labor
};

#endif
