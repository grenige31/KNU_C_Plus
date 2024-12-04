#include <iostream>
#include <string>
using namespace std;

int main() {
	string names[5]; // string 배열 선언

	for(int i=0; i<5; i++) {
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}
	
	string latter = names[0];
	for(int i=1; i<5; i++) {
		if(latter < names[i]) { // 사전 순으로 latter 문자열이 앞에 온다면
			latter = names[i]; // latter 문자열 변경
		}
	}
	cout << "사전에서 가장 뒤에 나오는 문자열은 "<< latter << endl;
}