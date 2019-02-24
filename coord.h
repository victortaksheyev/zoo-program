#ifndef coord_h
#define coord_h
class coord {
public:
    coord();
    void print();
protected:
    int x;
    int y;
};

coord::coord() {
    x = 0;
    y = 0;
}

void coord::print() {
    std::cout << "[" << x << "," << y << "]" << std::endl;
}

#endif /* coord_h */
