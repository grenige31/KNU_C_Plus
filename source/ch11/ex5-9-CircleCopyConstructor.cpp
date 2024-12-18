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
Circle::Circle(const Circle& c) { // ���� ������ ����
	this->radius = c.radius;
	cout << "���� ������ ���� radius = " << radius << endl;
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
	Circle src(30); // src ��ü��  ���� ������ ȣ��
	Circle dest(src); // dest ��ü�� ���� ������ ȣ��

	cout << "src area = " << src.getArea() << endl;
	cout << "dest area = " << dest.getArea() << endl;
}
