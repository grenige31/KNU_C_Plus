#include <iostream>
using namespace std;

class ShallowCopy {
private:
    int* arr; // �迭�� ���� �Ҵ����� ����
    int size;
public:
    // ������
    ShallowCopy(int s)  {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1; // �迭 �ʱ�ȭ
        }
    }
    // ���� ������ (shallow copy ����)
    ShallowCopy(const ShallowCopy& obj) {
        arr = obj.arr; // �޸� �ּҸ� ����
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
        delete[] arr; // �޸� ����
    }
};

int main() {
    ShallowCopy obj1(5);
    ShallowCopy obj2 = obj1; // ���� ����

    cout << "Original array in obj1: ";
    obj1.print();

    obj2.setElement(0, 100); // obj2���� �� ����

    cout << "Modified array in obj1 (affected by obj2): ";
    obj1.print(); // obj1�� ������ ����

    return 0;
}
