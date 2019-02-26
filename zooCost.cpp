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
