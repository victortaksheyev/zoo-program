#ifndef animals_h
#define animals_h

#include <iostream>

class animals {
public:
    animals();
    void print() const;
    void setName(std::string);
    std::string getName() const;
    void setSpecies(std::string);
    std::string getSpecies() const;
    void setAge(int);
    void setGender(char);
    void setDiet(char);
private:
    std::string name;
    std::string species;
    int age;
    char gender;
    char diet;      // herbavore (h) or carnivore (c)
};

#endif
