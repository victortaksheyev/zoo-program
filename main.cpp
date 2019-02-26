/*
 * Description: a program to help new zoos test choices to maximize profit
 * Input: file with a list of animals the zoo will be getting (input_animalInfo)
 * Output: information about the zoo given certain parameters
 */

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
#include "operationCost.h"

using namespace std;

const int NUM_OF_ANIMALS = 30;

int numOfAnimals( animals* animal, char animalChar);

int main() {
    animals animal[NUM_OF_ANIMALS]; // create array of animal objects that will be populated
    
    // populate array from input file
    ifstream infile;
    infile.open("input_animalInfo");
    
    string templine, tempName, tempSpecies, tempAge, tempGender, tempDiet;
    
    // parse, convert to proper type, store in proper object member variables
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
    
    int numBirds = numOfAnimals(animal, 'b');           // const - 15
    int numTigers = numOfAnimals(animal, 't');          // const - 8
    int numElephants = numOfAnimals(animal, 'e');       // const - 7
    
    birdHab b1;
    // get the bird segment from input file
    for (int i = 0; i < numBirds; i++) {
        b1.bird[i] = animal[i];     // store animal info from file into bird habitat
    }
    b1.print();     // print everything in the bird habitat (including birds that reside there)

    tigerHab t1;
    // get the tiger segment from input file
    for (int i = numBirds; i < numBirds+numTigers; i++) {
        t1.tiger[i - numBirds] = animal[i];     // store animal info from file into tiger habitat
    }
    t1.print();     // print everything in the tiger habitat (including tigers that reside there)

    elephantHab e1;
    // get the elephant segment from input file
    for (int i = (numBirds+numTigers); i < (numBirds+numTigers+numElephants); i++) {
        e1.elephant[i - (numBirds + numTigers)] = animal[i];     // store animal info from file into elephant habitat
    }
    e1.print();     // print everything in the elephant habitat (including elephants that reside there)

    zooCost zooExpenses;
    zooExpenses.print();    // print zoo expenses
    
    // ---------------------- CODE TO TEST CLASSES ----------------------
    
    cout << endl << "---------------------- CODE TO TEST CLASSES ----------------------" << endl << endl;
    // changing animal info
    animal[10].print();
    animal[10].setAge(3);
    animal[10].setDiet('c');    // carnivore
    animal[10].setGender('m');
    animal[10].setName("NewName");
    animal[10].print();
    cout << endl;
    
    // changing zoo info
    cout << "profit: " << zooExpenses.getProfit() << endl;  // profit when admission = 25$
    zooExpenses.setAdmissionPrice(1);
    cout << "profit: " << zooExpenses.getProfit() << endl;  // profit when admission = 1$
    zooExpenses.setVisitors(1000000);
    cout << "profit: " << zooExpenses.getProfit() << endl;  // profit when admission = 1$, but 1m customers
    
    // changing zoo/ habitat parameters
    zooExpenses.setMeatPrice(150);                          // by changing factors such as the price of food,
                                                            // the overall economics of the zoo change
    zooExpenses.setTax(.90);
    zooExpenses.print();
    
    return 0;
}

/*
 * function_identifier: searches and returns number of desired animals that exist in the list
 * parameters: animal objects, the species to look for
 * return value: number of animals that are in the animal object array
 */

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
