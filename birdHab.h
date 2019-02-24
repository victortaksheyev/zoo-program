#ifndef habitat_h
#define habitat_h

#include <math.h>

const int METERS_PER_BIRD = 3;      // each bird needs 3 meters squared of space
const int TOTAL_BIRDS = 15;         // will establish at runtime when i learn about dynamically allocatted mem
const int MAX_BIRD_TEMP = 80;       // max temp birds can handle

class birdHab : public environment{
public:
    birdHab();
    void print();
    void setNumBirds(int num) {numBirds = num;}
    void setArea();
    void setPerimeter();
    void setTemp();
    double getArea() const {return area;}
    double getPerimeter() const {return perimeter;}
    double getTemp() const {return temp;};
    void foodType();    // declares type of food that needs to be delivered to habitat (grain, meat, both)
    animals bird[TOTAL_BIRDS];
private:
    std::string food;
    int numBirds;
};

birdHab::birdHab(){
    food = "grain";
    numBirds = TOTAL_BIRDS;
    setTemp();
    setArea();
    setPerimeter();
}

void birdHab::print() {
    std::cout << std::endl;
    std::cout << "Area: " << area << " square m" << std::endl;
    std::cout << "Shape: circle" << std::endl;
    std::cout << "Perimeter: " << perimeter << " m" << std::endl;
    std::cout << "Food type: " << food << std::endl;
    std::cout << "Amount of food: 10" << std::endl;
    std::cout << "Max visitors: 10" << std::endl;
    std::cout << "Temperature: " << getTemp() << std::endl;
    std::cout << std::endl;
    std::cout << "Information about the birds at the zoo: " << std::endl << std::endl;
    for (int i = 0; i < numBirds; i++) {
        bird[i].print();
    }
}

void birdHab::setArea() {
    area = METERS_PER_BIRD * numBirds;      // area depends on number of birds
}

void birdHab::setPerimeter() {
    perimeter = sqrt((area/M_PI))*2*M_PI;      // calculates circumference of circle
}

void birdHab::setTemp() {
    temp = MAX_BIRD_TEMP - (TOTAL_BIRDS * .1);   // decreases temperature by .1 degree for each bird
}

#endif /* habitat_h */
