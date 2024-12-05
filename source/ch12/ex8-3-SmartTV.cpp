#include <iostream>
#include <string>
using namespace std;

class  Tv {
	int size; // 스크린 크기
public:
	Tv();
	Tv(int size);
	int getSize();
};
Tv::Tv() {
	size = 20; 
}
Tv::Tv(int size) { 
	this->size = size; 
}
int Tv::getSize() {
	return size; 
}

class  WideTV : public Tv { // Tv를 상속받는 WideTV
	bool videoIn;
public:
	WideTV(int size, bool videoIn);
	bool getVideoIn();
};
WideTV::WideTV(int size, bool videoIn) : Tv(size) {
	this->videoIn = videoIn;
}
bool WideTV::getVideoIn() { 
	return videoIn; 
}
/*
class  SmartTV : public WideTV { // WideTV를 상속받는 SmartTV
	string ipAddr; // 인터넷 주소
public:
	SmartTV(string ipAddr, int size);
	string getIpAddr();
};
SmartTV::SmartTV(string ipAddr, int size) : WideTV(size, true) {
	this->ipAddr = ipAddr;
}
string SmartTV::getIpAddr() { 
	return ipAddr; 
}
*/
int main() {
	 // 32 인치 크기 wide Tv 객체 생성
	WideTV  htv(32,true);
	cout << "size=" << htv.getSize() << endl;
	cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl;
	//cout << "IP=" << htv.getIpAddr() << endl;
}
