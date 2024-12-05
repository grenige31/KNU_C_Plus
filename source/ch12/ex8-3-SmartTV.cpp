#include <iostream>
#include <string>
using namespace std;

class  Tv {
	int size; // ��ũ�� ũ��
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

class  WideTV : public Tv { // Tv�� ��ӹ޴� WideTV
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
class  SmartTV : public WideTV { // WideTV�� ��ӹ޴� SmartTV
	string ipAddr; // ���ͳ� �ּ�
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
	 // 32 ��ġ ũ�� wide Tv ��ü ����
	WideTV  htv(32,true);
	cout << "size=" << htv.getSize() << endl;
	cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl;
	//cout << "IP=" << htv.getIpAddr() << endl;
}
