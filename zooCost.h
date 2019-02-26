#ifndef zooCost_h
#define zooCost_h

#include "habCost.h"

/*
 * class_identifier: calculates and displays overall expenses of zoo, taking into account habitat expenses
 * constructors:     zooCost();
 * public functions:
                     void setAdmissionPrice(int);
                     double getAdmissionPrice() const;
                     void setVisitors(int);
                     void calcTotalExp();
                     void print();
                     void calcProfit();
                     double getProfit();
                     void setEmployeeCost(double);
                     void yearlyCost();
 * static members: none
 */

class zooCost : public habitatCost{
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
