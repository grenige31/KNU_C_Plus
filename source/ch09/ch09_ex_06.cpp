#include <iostream> 
using namespace std; 

class Circle {
private:
	int radius; 
public:
	double getArea(); 
	int getRadius();
	void setRadius(int r);
}; 

double Circle::getArea() {
	return 3.14*radius*radius;
}
void Circle::setRadius(int r) {
	radius = r;
}
int Circle::getRadius() {
	return radius;
}


int main() {
	int d_r = 1;
	Circle donut; 
	donut.setRadius(d_r);
	double area = donut.getArea(); 
	cout << "donut 면적은 " << area << endl;

	Circle pizza; 
	int p_r = 30;
	pizza.setRadius(p_r);
	area = pizza.getArea(); // pizza 객체의 면적 알아내기
	cout << "pizza 면적은 " << area << endl;
}
