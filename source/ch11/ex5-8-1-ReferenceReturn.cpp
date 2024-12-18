#include <iostream>
using namespace std;

// int 형 포인터를 반환하는 함수
int* change(int value) {
    int* i = new int;  // 동적 메모리 할당
    *i = value;        // 메모리에 값 저장
    return i;          // 포인터 반환
}

int main() {
    // change 함수를 호출하여 int 값을 저장한 포인터를 받음
    int* intval = change(100);

    // 결과 출력
    cout << "저장된 값: " << *intval << endl;

    // 메모리 해제
    delete intval;
  

    return 0;
}
