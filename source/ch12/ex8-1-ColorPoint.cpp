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
	Point p; // 기본 클래스의 객체 생성
	ColorPoint cp; // 파생 클래스의 객체 생성
	cp.set(3,4); // 기본 클래스의 멤버 호출
	cp.setColor("Red"); // 파생 클래스의 멤버 호출
	cp.showColorPoint(); // 파생 클래스의 멤버 호출
}