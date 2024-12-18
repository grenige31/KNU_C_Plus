#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int radius);
	void setRadius(int radius);
	double getArea();
};

Circle::Circle() {
	radius = 1;
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

Circle getCircle() {
	Circle tmp(30);
	return tmp; // ��ü tmp�� �����Ѵ�.
}

int main() {
	Circle c; // ��ü�� �����ȴ�. radius=1�� �ʱ�ȭ�ȴ�.
	cout << c.getArea() << endl;

	c = getCircle();
	cout << c.getArea() << endl;
}