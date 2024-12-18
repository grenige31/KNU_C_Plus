#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
    int getRadius();
    void setRadius(int radius);
};

Circle::Circle() {
    radius = 1;
    cout << "Circle() radius = " << radius << endl;
}
Circle::Circle(int radius) {
    this->radius = radius;
    cout << "Circle(int radius) radius = " << radius << endl;
}
double Circle::getArea() {
    return 3.14 * radius * radius;
}
int Circle::getRadius() {
    cout << "Circle 객체의 반지름: " << radius << endl;
    return radius;
}
void Circle::setRadius(int radius) {
    this->radius = radius;
}
Circle::~Circle() {
    //cout << "~Circle() radius = " << radius << endl;
}


// 1. 값으로 객체 리턴
Circle createCircleByValue(int r) {
    Circle temp(r);  // 임시 객체 생성
    return temp;     // 값으로 리턴 (복사 발생)
}

// 2. 포인터로 객체 리턴
Circle* createCircleByPointer(int r) {
    Circle* ptr = new Circle(r);  // 동적 객체 생성
    return ptr;                  // 포인터 반환
}

// 3. 참조로 객체 리턴
Circle& createCircleByReference(Circle& circle) {
    return circle;   // 참조로 반환
}

int main() {
    int r;
    cout << "=== 값으로 객체 리턴 ===" << endl;
    Circle c1 = createCircleByValue(5);
    r=c1.getRadius();

    cout << "\n=== 포인터로 객체 리턴 ===" << endl;
    Circle* c2 = createCircleByPointer(10);
    r = c2->getRadius();
    delete c2;  // 동적 할당된 객체는 반드시 해제

    cout << "\n=== 참조로 객체 리턴 ===" << endl;
    Circle c3(15);
    Circle& c4 = createCircleByReference(c3);
    r = c4.getRadius();

    return 0;
}