#include <iostream>
#include <string>
using namespace std;

// 2���� ��鿡�� �� ���� ǥ���ϴ� Ŭ���� Point ����
class Point { 
	int x, y; //�� �� (x,y) ��ǥ��
public:
	void set(int x, int y);
	void showPoint();
};
void Point::set(int x, int y) {
	this->x = x; this->y = y;
}
void Point::showPoint() {
	cout <<  x << "," << y  << endl;
}

// 2���� ��鿡�� �÷� ���� ǥ���ϴ� Ŭ���� ColorPoint. Point�� ��ӹ���
class ColorPoint : public Point { 
	string color;// ���� �� ǥ��
public:
	void setColor(string color)  {	this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point�� showPoint() ȣ��
}

int main() {
	Point p; // �⺻ Ŭ������ ��ü ����
	ColorPoint cp; // �Ļ� Ŭ������ ��ü ����
	cp.set(3,4); // �⺻ Ŭ������ ��� ȣ��
	cp.setColor("Red"); // �Ļ� Ŭ������ ��� ȣ��
	cp.showColorPoint(); // �Ļ� Ŭ������ ��� ȣ��
}