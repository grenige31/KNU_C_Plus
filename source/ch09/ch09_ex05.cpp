#include <iostream>
using namespace std;

int main() {
	cout << "Input Address : ";

	char address[100]; 
	cin.getline(address, 100, '\n'); // 키보드로부터 주소 읽기

	cout << "My address is " << address ; // 주소 출력
}