#ifndef elephantHab_h
#define elephantHab_h

#include <math.h>

const int METERS_PER_ELEPHANT = 40; // each bird needs 3 meters squared of space
const int NUM_OF_ELEPHANTS = 7;

class elephantHab : public environment {
public:
    elephantHab();
    double area() const;
    double perimeter() const;
    void print() const;
    animals elephant[NUM_OF_ELEPHANTS];
private:
    std::string food;
    int numElephants;
};

elephantHab::elephantHab() {
    food = "grain";
    numElephants = NUM_OF_ELEPHANTS;
}

double elephantHab::area() const {
    return numElephants * METERS_PER_ELEPHANT;
}

double elephantHab::perimeter() const {
    return sqrt(area()) * 4; // square
}

void elephantHab::print() const {
    std::cout << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Shape: square" << std::endl;
    std::cout << "Perimeter: " << perimeter() << std::endl;
    std::cout << "Food type: " << food << std::endl;
    std::cout << "Amount of food: 10" << std::endl;
    std::cout << "Max visitors: 10" << std::endl;
    std::cout << std::endl;
    std::cout << "Information about the elephants at the zoo: " << std::endl << std::endl;
    for (int i = 0; i < numElephants; i++) {
        elephant[i].print();
    }
}
#endif /* elephantHab_h */
