#include <iostream>
using namespace std;

class ShallowCopy {
private:
    int* arr; // 배열을 동적 할당으로 관리
    int size;
public:
    // 생성자
    ShallowCopy(int s)  {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1; // 배열 초기화
        }
    }
    // 복사 생성자 (shallow copy 복사)
    ShallowCopy(const ShallowCopy& obj) {
        arr = obj.arr; // 메모리 주소만 복사
        size = obj.size;
    }

    void setElement(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        }
    }

    void print() {
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
        cout << endl;
    }

    ~ShallowCopy() {
        delete[] arr; // 메모리 해제
    }
};

int main() {
    ShallowCopy obj1(5);
    ShallowCopy obj2 = obj1; // 얕은 복사

    cout << "Original array in obj1: ";
    obj1.print();

    obj2.setElement(0, 100); // obj2에서 값 변경

    cout << "Modified array in obj1 (affected by obj2): ";
    obj1.print(); // obj1도 영향을 받음

    return 0;
}
