#include <iostream>
using namespace std;

int main() {
	cout << "Input Address : ";

	char address[100]; 
	cin.getline(address, 100, '\n'); // Ű����κ��� �ּ� �б�

	cout << "My address is " << address ; // �ּ� ���
}