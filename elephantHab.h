#ifndef elephantHab_h
#define elephantHab_h

#include <math.h>

const int METERS_PER_ELEPHANT = 40; // each bird needs 3 meters squared of space
const int NUM_OF_ELEPHANTS = 7;
const int MAX_ELEPHANT_TEMP = 70;

class elephantHab : public environment {
public:
    elephantHab();
    void setArea();
    void setPerimeter();
    double getArea() const {return area;}
    double getPerimeter() const {return perimeter;}
    int getNumElephants() {return numElephants;}
    void print() const;
    void setTemp();
    double getTemp() const {return temp;};
    animals elephant[NUM_OF_ELEPHANTS];
private:
    std::string food;
    int numElephants;
};

elephantHab::elephantHab() {
    food = "grain";
    numElephants = NUM_OF_ELEPHANTS;
    setTemp();
    setArea();
    setPerimeter();
}

void elephantHab::setArea() {
    area = numElephants * METERS_PER_ELEPHANT;
}

void elephantHab::setPerimeter()  {
    perimeter = sqrt(area) * 4; // square
}

void elephantHab::print() const {
    std::cout << std::endl;
    std::cout << "-------------- ELEPHANT HABITAT INFO --------------" << std::endl;
    std::cout << "Area: " << getArea() << " square m" <<std::endl;
    std::cout << "Shape: square" << std::endl;
    std::cout << "Perimeter: " << getPerimeter() << " m" << std::endl;
    std::cout << "Food type: " << food << std::endl;
    std::cout << "Amount of food: 10" << std::endl;
    std::cout << "Max visitors: 10" << std::endl;
    std::cout << "Temperature: " << getTemp() << std::endl;
    std::cout << std::endl;
    std::cout << "Information about the elephants at the zoo: " << std::endl << std::endl;
    for (int i = 0; i < numElephants; i++) {
        elephant[i].print();
    }
}

void elephantHab::setTemp() {
    temp = MAX_ELEPHANT_TEMP - (NUM_OF_ELEPHANTS * .5);   // decreases temperature by .5 degree for each elephant
}

#endif /* elephantHab_h */
