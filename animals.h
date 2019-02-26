#ifndef animals_h
#define animals_h

#include <iostream>

/*
 * class_identifier: class that stores information from input file of animals and allows to change it
 * constructors:     animals();
 * public functions: void print() const;
                     void setName(std::string);
                     std::string getName() const;
                     void setSpecies(std::string);
                     std::string getSpecies() const;
                     void setAge(int);
                     void setGender(char);
                     void setDiet(char);
 * static members: none
 */

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
