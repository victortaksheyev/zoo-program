#ifndef habitat_h
#define habitat_h

#include <math.h>

const int METERS_PER_BIRD = 3; // each bird needs 3 meters squared of space
const int TOTAL_BIRDS = 15; // will establish at runtime when i learn about dynamically allocatted mem

class birdHab : public environment{
public:
    birdHab();
    void print();
    void setNumBirds(int num) {numBirds = num;}
    double area() const;
    double perimeter() const;
//    int maxVisitors();
//    int timeToClean();
    void foodType();    // declares type of food that needs to be delivered to habitat (grain, meat, both)
    animals bird[TOTAL_BIRDS];
private:
    std::string food;
    int numBirds;
};

birdHab::birdHab(){
    food = "grain";
    numBirds = TOTAL_BIRDS;
    
}

void birdHab::print() {
    // print info
    std::cout << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Shape: circle" << std::endl;
    std::cout << "Perimeter: " << perimeter() << std::endl;
    std::cout << "Food type: " << std::endl;
    std::cout << "Amount of food: 10" << std::endl;
    std::cout << "Max visitors: 10" << std::endl;
    std::cout << std::endl;
    std::cout << "Information about the birds at the zoo: " << std::endl << std::endl;
    for (int i = 0; i < numBirds; i++) {
        bird[i].print();
    }
}

double birdHab::area() const {
    return METERS_PER_BIRD * numBirds;  // area depends on number of birds
}

double birdHab::perimeter() const {
    return sqrt((area()/M_PI))*2*M_PI;  // calculates circumference of circle
}

#endif /* habitat_h */
