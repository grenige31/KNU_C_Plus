#include <iostream>
using namespace std;

int main() {
	
	char sname[6]; // 5 ���� ���ڸ� ������ �� �ִ� char �迭
	cout << " �̸�1 : >>";
	cin >> sname; // Ű����κ��� ���ڿ��� �о� name �迭�� �����Ѵ�.
	cout << "�̸��� " << sname << "�Դϴ�." << endl; // �̸��� ����Ѵ�.
	
	cout << "�̸�2 : ";
	char name[11]; // �ѱ��� 5�� ����, ������ 10���� ������ �� �ִ�.
	cin >> name; // Ű����κ��� ���ڿ��� �д´�.
	cout << "�̸��� " << name << "�Դϴ�."<<endl; // �̸��� ����Ѵ�.
	
	cout << "�ּ� :";
	char address[100];
	cin.getline(address, 100, '\n'); // Ű����κ��� �ּ� �б�
	cout << "�ּҴ� " << address << "�Դϴ�\n"; // �ּ� ���

	return 0;
}