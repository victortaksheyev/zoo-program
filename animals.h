#ifndef animals_h
#define animals_h

class animals {
public:
    animals();
    void print() const;
    void setName (std::string usrName) {name = usrName;}
    std::string getName() const {return name;}
    void setSpecies (std::string usrSpecies) {species = usrSpecies;}
    std::string getSpecies () const {return species;}
    void setAge (int usrAge) {age = usrAge;}
    void setGender (char usrGender) {gender = usrGender;}
    void setDiet (char usrDiet) {diet = usrDiet;}
private:
    std::string name;
    std::string species;
    int age;
    char gender;
    char diet;      // herbavore (h) or carnivore (c)
};

animals::animals() {
    name = "";
    species = "";
    age = 0;
    gender = 'f';
    diet = 'm';
}

void animals::print() const{
    std::cout << name << " --- ";
    std::cout << "Age: " << age << " | ";
    std::cout << "Gender: " << gender << " | ";
    std::cout << "Diet: " << diet << std::endl;
}

#endif /* animal_h */
