#include <iostream>
using namespace std;

// int �� �����͸� ��ȯ�ϴ� �Լ�
int* change(int value) {
    int* i = new int;  // ���� �޸� �Ҵ�
    *i = value;        // �޸𸮿� �� ����
    return i;          // ������ ��ȯ
}

int main() {
    // change �Լ��� ȣ���Ͽ� int ���� ������ �����͸� ����
    int* intval = change(100);

    // ��� ���
    cout << "����� ��: " << *intval << endl;

    // �޸� ����
    delete intval;
  

    return 0;
}
