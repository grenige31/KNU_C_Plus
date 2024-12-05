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
	ColorPoint cp;
	ColorPoint* pDer = &cp;
	Point* pBase = pDer; // ��ĳ����
	cp.set(3, 4);
	pBase->showPoint();

	pDer = (ColorPoint*)pBase;//�ٿ�ĳ����
	pDer->setColor("Red");
	pDer->showColorPoint();// ���� ������
	


}