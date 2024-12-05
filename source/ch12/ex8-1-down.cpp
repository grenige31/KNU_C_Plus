#include <iostream>
#include <string>
using namespace std;

// 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
class Point { 
	int x, y; //한 점 (x,y) 좌표값
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

// 2차원 평면에서 컬러 점을 표현하는 클래스 ColorPoint. Point를 상속받음
class ColorPoint : public Point { 
	string color;// 점의 색 표현
public:
	void setColor(string color)  {	this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point의 showPoint() 호출
}

int main() {
	ColorPoint cp;
	ColorPoint* pDer = &cp;
	Point* pBase = pDer; // 업캐스팅
	cp.set(3, 4);
	pBase->showPoint();

	pDer = (ColorPoint*)pBase;//다운캐스팅
	pDer->setColor("Red");
	pDer->showColorPoint();// 정상 컴파일
	


}