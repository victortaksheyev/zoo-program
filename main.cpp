#include <iostream>
#include <fstream>  // ifstream
#include <sstream>  // stringstream
#include <string>   // getline

#include "animals.h"
#include "environment.h"
#include "birdHab.h"
#include "tigerHab.h"
#include "elephantHab.h"
#include "zooCost.h"
#include "habCost.h"
#include "operationCost.h"

using namespace std;

const int NUM_OF_ANIMALS = 30;

int numOfAnimals( animals* animal, char animalChar);

int main() {
    animals animal[NUM_OF_ANIMALS];
    
    ifstream infile;
    infile.open("/Users/victortaksheyev/Desktop/input_animalInfo");
    
    string templine, tempName, tempSpecies, tempAge, tempGender, tempDiet;
    
    for (int i = 0; i < NUM_OF_ANIMALS; i++) {
        getline(infile, templine, '\n');    // gets one line from input file
        stringstream ss;
        ss << templine;

        getline(ss, tempName, ' ');
        getline(ss, tempSpecies, ' ');
        getline(ss, tempAge, ' ');
        getline(ss, tempGender, ' ');
        getline(ss, tempDiet, ' ');

        int age = stoi(tempAge);            // converts string to integer

        animal[i].setName(tempName);
        animal[i].setSpecies(tempSpecies);
        animal[i].setAge(age);
        animal[i].setGender(tempGender[0]); // converts from string to char
        animal[i].setDiet(tempDiet[0]);
    }
    
    infile.close();
    
    birdHab b1;                                             // bird habitat object
    for (int i = 0; i < numOfAnimals(animal, 'b'); i++) {
        b1.bird[i] = animal[i];                             // store animal info from file into bird habitat
    }
    b1.print();

    tigerHab t1;
    for (int i = 0; i < numOfAnimals(animal, 't'); i++) {
        t1.tiger[i] = animal[i];                           // store animal info from file into tiger habitat
    }
    t1.print();

    elephantHab e1;
    for (int i = 0; i < numOfAnimals(animal, 'e'); i++) {
        e1.elephant[i] = animal[i];                         // store animal info from file into elephant habitat
    }
    e1.print();

    zooCost zooExpenses;
    zooExpenses.print();

    return 0;
}

// returns number of desired animals that exist in the list
int numOfAnimals(animals* animal, char animalChar) {
    int count = 0;
    for (int i = 0; i < NUM_OF_ANIMALS; i++) {
        if (animalChar == 'b') {
            if (animal[i].getSpecies() == "bird") {
                count+=1;
            }
        } else if (animalChar == 't') {
            if (animal[i].getSpecies() == "tiger") {
                count+=1;
            }
        } else if (animalChar == 'e') {
            if (animal[i].getSpecies() == "elephant") {
                count+=1;
            }
        }
    }
    return count;
}
