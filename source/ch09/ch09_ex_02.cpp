#include <iostream>
using namespace std;

int main() {
	
	char sname[6]; // 5 개의 문자를 저장할 수 있는 char 배열
	cout << " 이름1 : >>";
	cin >> sname; // 키보드로부터 문자열을 읽어 name 배열에 저장한다.
	cout << "이름은 " << sname << "입니다." << endl; // 이름을 출력한다.
	
	cout << "이름2 : ";
	char name[11]; // 한글은 5개 글자, 영문은 10까지 저장할 수 있다.
	cin >> name; // 키보드로부터 문자열을 읽는다.
	cout << "이름은 " << name << "입니다."<<endl; // 이름을 출력한다.
	
	cout << "주소 :";
	char address[100];
	cin.getline(address, 100, '\n'); // 키보드로부터 주소 읽기
	cout << "주소는 " << address << "입니다\n"; // 주소 출력

	return 0;
}