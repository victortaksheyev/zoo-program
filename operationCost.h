#ifndef operationCost_h
#define operationCost_h

/*
 * class_identifier: initializes typical operationCosts that are used by habitats and zoo
 * constructors:     operationCost();
 * public functions: virtual void habExpenses() = 0;
                     virtual void foodExpenses() = 0;
                     virtual void setTax(double);
                     virtual void setLandCost(double);
                     double getTax();
                     double getLandCost();
 * static members: none
 */

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
