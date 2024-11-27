#include <iostream> 
using namespace std; 

class Circle {
public:
	int radius;
	Circle(); 
	Circle(int r); 
	~Circle(); // ¼Ò¸êÀÚ
	double getArea(); 
};

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

int main() {
	Circle donu;
	Circle pizza(30); 
	return 0;
}
