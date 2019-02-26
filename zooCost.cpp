#include "zooCost.h"

void zooCost::setAdmissionPrice(int usrPrice) {
    admissionPrice = usrPrice;
}

double zooCost::getAdmissionPrice() const {
    return admissionPrice;
}

void zooCost::setVisitors(int usrV) {
    visitors = usrV;
}

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

void zooCost::calcTotalExp() {
    expenses = yrCost + getFoodCost() + getHabsCost(); // sum of yearly base cost and cost to maintain habs
}

void zooCost::calcProfit() {
    calcTotalExp();                                     // calls function to update expenses in case they changed
    profit = (admissionPrice * visitors) - expenses;
}

double zooCost::getProfit() {
    calcProfit();                                       // updated profit in case it has changed
    return profit;
}

// yearlyCost purely from
void zooCost::yearlyCost() {
    yrCost = (1+tax) * ((landAmount * landCost) + employeeCost);
}

void zooCost::setEmployeeCost(double usrECost) {
    employeeCost = usrECost;
}

void zooCost::print() {
    getProfit();
    std::cout << std::endl;
    std::cout << "-------------- ZOO FINANCES --------------" << std::endl;
    std::cout << "Total expenses per year: " << expenses << std::endl;
    std::cout << "Total Profit per year: " << profit << std::endl;
    std::cout << std::endl;
}
