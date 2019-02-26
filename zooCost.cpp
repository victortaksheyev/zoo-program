#include "zooCost.h"

// default constricutor
zooCost::zooCost() {
    visitors = 20000;
    admissionPrice = 25;
    calcTotalExp();
    calcProfit();
    employeeCost = 300000;  // 300000/year
    landAmount = 100;       // 100 meters squared of regular zoo land (without habitats atm)
    // this land is for sidewalks, etc
    yearlyCost();
}

// setter for admission price
void zooCost::setAdmissionPrice(int usrPrice) {
    admissionPrice = usrPrice;
}

// getter for admission price
double zooCost::getAdmissionPrice() const {
    return admissionPrice;
}

// setter for number of visitors
void zooCost::setVisitors(int usrV) {
    visitors = usrV;
}

// calculates total zoo expenditure
void zooCost::calcTotalExp() {
    expenses = yrCost + getFoodCost() + getHabsCost(); // sum of yearly base cost and cost to maintain habs
}

// updates total expenses of zoo and calculates profit
void zooCost::calcProfit() {
    calcTotalExp();                                     // calls function to update expenses in case they changed
    profit = (admissionPrice * visitors) - expenses;
}

// updates and returns profit
double zooCost::getProfit() {
    calcProfit();                                       // updated profit in case it has changed
    return profit;
}

// calculates yearly cost of running zoo (without habitats)
void zooCost::yearlyCost() {
    yrCost = (1+tax) * ((landAmount * landCost) + employeeCost);
}

// setter for employee salary
void zooCost::setEmployeeCost(double usrECost) {
    employeeCost = usrECost;
}

// prints info
void zooCost::print() {
    getProfit();
    std::cout << std::endl;
    std::cout << "-------------- ZOO FINANCES --------------" << std::endl;
    std::cout << "Total expenses per year: " << expenses << std::endl;
    std::cout << "Total Profit per year: " << profit << std::endl;
    std::cout << std::endl;
}
