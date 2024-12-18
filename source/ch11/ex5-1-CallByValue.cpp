#include <iostream>
using namespace std;

class Circle {
private:
	int radius; 
public:
	Circle(); 
	Circle(int r);
	~Circle();
	double getArea();
	int getRadius();
	void setRadius(int radius);
}; 

Circle::Circle() {
	radius = 1;
	cout << "Circle() radius = " << radius << endl;
}
Circle::Circle(int radius) {
	this->radius = radius;
	cout << "Circle(int radius) radius = "  << radius << endl;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}
int Circle::getRadius() {
	return radius;
}
void Circle::setRadius(int radius) {
	this->radius = radius;
}
Circle::~Circle() {
	cout << "~Circle() radius = " << radius << endl;
}

void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r+1);
}

int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
}
