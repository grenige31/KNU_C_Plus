#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(const Circle& c);
	Circle();
	Circle(int r);
	double getArea();
	
};
Circle::Circle(const Circle& c) { // 복사 생성자 구현
	this->radius = c.radius;
	cout << "복사 생성자 실행 radius = " << radius << endl;
}

Circle::Circle() {
	radius = 1;
}
Circle::Circle(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle src(30); // src 객체의  보통 생성자 호출
	Circle dest(src); // dest 객체의 복사 생성자 호출

	cout << "src area = " << src.getArea() << endl;
	cout << "dest area = " << dest.getArea() << endl;
}
