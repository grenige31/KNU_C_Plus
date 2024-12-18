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
    cout << "Circle ��ü�� ������: " << radius << endl;
    return radius;
}
void Circle::setRadius(int radius) {
    this->radius = radius;
}
Circle::~Circle() {
    //cout << "~Circle() radius = " << radius << endl;
}


// 1. ������ ��ü ����
Circle createCircleByValue(int r) {
    Circle temp(r);  // �ӽ� ��ü ����
    return temp;     // ������ ���� (���� �߻�)
}

// 2. �����ͷ� ��ü ����
Circle* createCircleByPointer(int r) {
    Circle* ptr = new Circle(r);  // ���� ��ü ����
    return ptr;                  // ������ ��ȯ
}

// 3. ������ ��ü ����
Circle& createCircleByReference(Circle& circle) {
    return circle;   // ������ ��ȯ
}

int main() {
    int r;
    cout << "=== ������ ��ü ���� ===" << endl;
    Circle c1 = createCircleByValue(5);
    r=c1.getRadius();

    cout << "\n=== �����ͷ� ��ü ���� ===" << endl;
    Circle* c2 = createCircleByPointer(10);
    r = c2->getRadius();
    delete c2;  // ���� �Ҵ�� ��ü�� �ݵ�� ����

    cout << "\n=== ������ ��ü ���� ===" << endl;
    Circle c3(15);
    Circle& c4 = createCircleByReference(c3);
    r = c4.getRadius();

    return 0;
}