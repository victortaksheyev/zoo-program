#ifndef operationCost_h
#define operationCost_h

// cost associated with any type of zoo / facility
class operationCost {
public:
    operationCost();
    virtual void habExpenses() = 0;  // defining the expenses associated with the habitat (varies among habitats)
    virtual void foodExpenses() = 0; // defines food expenses (differ from habitat to habitat)
    virtual void setTax(double);
    virtual void setLandCost(double);
    double getTax();
    double getLandCost();
protected:
    double tax;
    double landCost;                // const of land
};

#endif 
