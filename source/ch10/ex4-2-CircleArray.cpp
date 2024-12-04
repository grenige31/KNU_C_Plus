#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:
	Circle();
	Circle(int r);
	void setRadius(int r);
	double getArea();
}; 
Circle::Circle() {
	radius = 1;
}
Circle::Circle(int r) {
	radius = r;
}
void Circle::setRadius(int r) {
	radius = r;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle circleArray[3]; // (1) Circle ��ü �迭 ����

	// �迭�� �� ���� ��ü�� ��� ����
	circleArray[0].setRadius(10); // (2)
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for(int i=0; i<3; i++) // �迭�� �� ���� ��ü�� ��� ����
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;

	Circle *p; // (3)
	p = circleArray; // (4)
	for(int i=0; i<3; i++) { 	// ��ü �����ͷ� �迭 ����
		cout << "Circle " << i << "�� ������ " << p->getArea() << endl;
		p++; // (5)
	}
}