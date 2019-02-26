#ifndef shape_h
#define shape_h

class shape {
public:
    virtual void createArea() = 0;         // calculates a unique area for the habitat depending on animals that exist,
                                           // shape, and other factors unique to each habitat
    virtual void createPerimeter() = 0;    // calcs a unique perimeter for habitat, depending on various factors
protected:
    double area;                           // stores area value
    double perimeter;                      // stores perimeter value;
    double sideLength;                     // stores length of one side;
};

#endif
