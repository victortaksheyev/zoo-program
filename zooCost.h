#ifndef zooCost_h
#define zooCost_h

#include "habCost.h"

class zooCost : public habitatCost {
public:
    zooCost();
    void setAdmissionPrice(int usrPrice) {admissionPrice = usrPrice;}
    double getAdmissionPrice() const {return admissionPrice;}
    void setVisitors(int usrV) {visitors = usrV;}
    void calcTotalExp();                        // calcs total expenses
    void print() const;                         // prints info
    void calcProfit();
private:
    double expenses;
    double profit;
    int visitors;
    double admissionPrice;
};

zooCost::zooCost() {
    visitors = 20000;
    admissionPrice = 25;
    calcTotalExp();
    calcProfit();
}

void zooCost::calcTotalExp() {
    expenses = yrCost + habsCost; // sum of yearly base cost and cost to maintain habs
}

void zooCost::calcProfit() {
    profit = (admissionPrice * visitors) - expenses;
}

void zooCost::print() const {
    std::cout << std::endl;
    std::cout << "-------------- ZOO FINANCES --------------" << std::endl;
    std::cout << "Total expenses per year: " << expenses << std::endl;
    std::cout << "Total Profit per year: " << profit << std::endl;
    std::cout << std::endl;
}

#endif /* zooCost_h */
