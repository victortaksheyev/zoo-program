#ifndef zooCost_h
#define zooCost_h

#include "habCost.h"

class zooCost : public habitatCost {
public:
    zooCost();
    void setAdmissionPrice(int);
    double getAdmissionPrice() const;
    void setVisitors(int);
    void calcTotalExp();                        // calcs total expenses
    void print() const;                         // prints info
    void calcProfit();
private:
    double expenses;
    double profit;
    int visitors;
    double admissionPrice;
};

#endif /* zooCost_h */
