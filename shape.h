#ifndef shape_h
#define shape_h
class shape {
public:
    virtual void setArea() = 0;            // calcs and returns size based on the number and type of animals
    virtual void setPerimeter() = 0;       // calcs and returns dimensions based on area and shape of habitat
protected:
    double area;                              // stores area value
    double perimeter;                              // stores perimeter value;
    double sideLength;                          // stores length of one side;
};

#endif /* shape_h */
