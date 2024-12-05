#include <iostream>
#include <string>
using namespace std;

class Point { 
protected:
	int x, y; //�� �� (x,y) ��ǥ��
public:
	void set(int x, int y);
	void showPoint();
};
void Point::set(int x, int y) {
	this->x = x; 
	this->y = y;
}
void Point::showPoint() {
	cout <<   x << "," << y  << endl;
}
class ColorPoint : public Point {
	string color;
public:
	void setColor(string color)  {	this->color = color; }
	void showColorPoint();
	bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point Ŭ������ showPoint() ȣ��
}

bool ColorPoint::equals(ColorPoint p) {
	if(x == p.x && y == p.y && color == p.color)	// ��
		return true;
	else 
		return false;
}

int main() {
	Point p;	// �⺻ Ŭ������ ��ü ����
	/*
	p.set(2,3);										// ��
	p.x = 5;										// ��
	p.y = 5;										// ��
	*/
	p.showPoint();

	ColorPoint cp; // �Ļ� Ŭ������ ��ü ����
	/*
	cp.x = 10;										// ��
	cp.y = 10;										// ��
	*/
	cp.set(3,4);
	cp.setColor("Red");

	ColorPoint cp2;
	cp2.set(3,4);
	cp2.setColor("Red");
	//cout << ((cp.equals(cp2))?"true":"false");		// ��
}