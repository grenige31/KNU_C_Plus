#include <iostream>
using namespace std;

int main() {
	cout << "input name : ";

	char name[11]; // 한글은 5개 글자, 영문은 10까지 저장
	cin >> name; 
	cout << "My name is " << name ; // 이름을 출력한다.
}