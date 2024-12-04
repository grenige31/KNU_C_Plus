#include <iostream> 
using namespace std; 

class Circle {
	int radius;
public:
	Circle();
	Circle(int radius);
	~Circle();
	void setRadius(int radius);
	double getArea();
};

Circle::Circle() {
	this->radius = 1;
}

Circle::Circle(int radius) {
	this->radius = radius;
}

void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle::~Circle() {
}


int main() {
	Circle c1;
	Circle c2(2);
	Circle c3(3);


	c1.setRadius(4);
	c2.setRadius(5);
	c3.setRadius(6);

}
