#include <iostream>
using namespace std;

class Shape {
public:
    double base, height;
    void setDimensions(double b, double h) {
        base = b;
        height = h;
    }
}; 

class Triangle : public Shape {
public:
    double getArea() {
        return 0.5 * base * height;
    }
    void display() {
        cout << "Triangle Area: " << getArea() << endl;
    }
};

int main() {
    Triangle t;
    t.setDimensions(10.0, 5.0);
    t.display();
    return 0;
}
