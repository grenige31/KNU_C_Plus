#include <iostream>
using namespace std;

class ShallowCopy {
public:
    int* arr; // �迭�� ���� �Ҵ����� ����
    int size;
    // ������
    ShallowCopy(int s) {
        this->size = s;
        arr = new int[s];
        for (int i = 0; i < s; i++) {
            arr[i] = i + 1; // �迭 �ʱ�ȭ
        }
    }

    // ���� ������ (���� ����)
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
        
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
            cout << endl;
        }
    }

    //~ShallowCopy() {
    //    delete[] arr; // �޸� ����
    //}
};

int main() {
    ShallowCopy obj1(5);
    ShallowCopy obj2 = obj1; // ���� ����

    cout << "Original array in obj1: "<< endl;
    obj1.print();

    obj2.setElement(0, 100); // obj2���� �� ����
    cout << "Obj2 modify array 0->100 "<< endl;

    cout << "Modified array in obj1 (affected by obj2): " << endl;
    obj1.print(); // obj1�� ������ ����

    return 0;
}