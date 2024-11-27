#include <iostream> 
using namespace std; 

#include "Circle.h"

Circle::Circle() {
	radius = 1;
	cout << "Circle() - radius " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "Circle(int r) - radius " << radius  << endl;
}

Circle::~Circle() {
	cout << "~Circle() - radius " << radius <<  endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}
