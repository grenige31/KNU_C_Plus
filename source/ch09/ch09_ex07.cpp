#include <iostream> 
using namespace std; 

class Rectangle { // Rectangle 클래스 선언
public:
	int width; 
	int height; 
	int getArea(); // 면적을 계산하여 리턴하는 함수
};

int Rectangle::getArea() {
	return width*height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "Area : " << rect.getArea() << endl;
}
