#include <iostream>
using namespace std;

class DeepCopy {
private:
    int* arr; // 배열을 동적 할당으로 관리
    int size;
public:
    // 생성자
    DeepCopy(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1; // 배열 초기화
        }
    }

    // 복사 생성자 (deep copy)
    DeepCopy(const DeepCopy& obj) {
        size = obj.size;
        arr = new int[size]; // 새로운 메모리 할당
        for (int i = 0; i < size; i++) {
            arr[i] = obj.arr[i]; // 데이터 복사
        }
    }

    void setElement(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        }
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
            cout << endl;
        }
    }

    ~DeepCopy() {
        delete[] arr; // 메모리 해제
    }
};

int main() {
    DeepCopy obj1(5);
    DeepCopy obj2 = obj1; // 깊은 복사

    cout << "Original array in obj1: ";
    obj1.print();

    obj2.setElement(0, 100); // obj2에서 값 변경

    cout << "Modified array in obj2: ";
    obj2.print();

    cout << "Array in obj1 remains unchanged: ";
    obj1.print(); // obj1은 영향을 받지 않음

    return 0;
}
