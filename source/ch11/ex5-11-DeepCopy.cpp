#include <iostream>
using namespace std;

class DeepCopy {
private:
    int* arr; // �迭�� ���� �Ҵ����� ����
    int size;
public:
    // ������
    DeepCopy(int s)  {
        this->size = s;
        arr = new int[s];
        for (int i = 0; i < s; i++) {
            arr[i] = i + 1; // �迭 �ʱ�ȭ
        }
    }

    // ���� ������ (deep copy)
    DeepCopy(const DeepCopy& obj) {
        size = obj.size;
        arr = new int[size]; // ���ο� �޸� �Ҵ�
        for (int i = 0; i < size; i++) {
            arr[i] = obj.arr[i]; // ������ ����
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
        delete[] arr; // �޸� ����
    }
};

int main() {
    DeepCopy obj1(5);
    DeepCopy obj2 = obj1; // ���� ����

    cout << "Original array in obj1: "<< endl;
    obj1.print();

    obj2.setElement(0, 100); // obj2���� �� ����

    cout << "Obj2 modify array 0->100 " << endl;
    obj2.print();

    cout << "Array in obj1 remains unchanged: "<< endl;
    obj1.print(); // obj1�� ������ ���� ����

    return 0;
}
