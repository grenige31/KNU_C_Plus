#define _CRT_SECURE_NO_WARNINGS //비주얼 스튜디오에서 strcpy로 인한 오류를 막기 위한 선언문
#include <iostream>
#include <cstring>
using namespace std;

class Person { // Person 클래스 선언
	char* name;
	int id;
public:
	Person(int id, const char* name); // 생성자
	~Person(); // 소멸자
	void changeName(const char *name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id,const char* name) { // 생성자
	this->id = id;
	int len = strlen(name); // name의 문자 개수
	this->name = new char [len+1]; // name 문자열 공간 핟당
	strcpy(this->name, name); // name에 문자열 복사
}

Person::~Person() {// 소멸자
	if(name) // 만일 name에 동적 할당된 배열이 있으면
		delete [] name; // 동적 할당 메모리 소멸
}

void Person::changeName(const char* name) { // 이름 변경
	if(strlen(name) > strlen(this->name))
		return; // 현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없다.
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");			// (1) father 객체 생성
	Person daughter(father);			// (2) daughter 객체 복사 생성. 복사 생성자 호출

	cout << "daughter 객체 생성 직후 ----" << endl;
	father.show();						// (3) father 객체 출력
	daughter.show();					// (3) daughter 객체 출력

	daughter.changeName("Grace");		// (4) 	daughter의 이름을 "Grace"로 변경
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show();						// (5) father 객체 출력
	daughter.show();					// (5) daughter 객체 출력

	return 0;							// (6), (7) daughter, father 객체 소멸
}