#include <iostream> 
using namespace std; 

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r);
	double getArea();
};

Circle::Circle() {
	this->radius = 1;
}
Circle::Circle(int r) {
	cout << "Circle-1 : " << r << endl;
	radius = r;
}
void Circle::setRadius(int r) {
	cout << "setRadius : " <<  r << endl;
	radius = r;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle::~Circle() {
}

int main() {
	Circle c1;
	Circle c2(2);
	double area = c2.getArea();
	cout << "area : " << area << endl;

	c1.setRadius(4);
	c2.setRadius(5);
	return 0;
}
