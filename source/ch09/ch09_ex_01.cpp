#include <iostream> 
using namespace std;

int main() {

	int n = 3;
	char c = '#';
	cout << c << 5.5 << '-' << n << "hello" << true << endl;
	cout << "n + 5 = " << n + 5 << endl;

	cout << "�ʺ� : ";
	int width;
	cin >> width; // Ű����κ��� �ʺ� �о� width ������ ����

	cout << "���� : ";
	int height;
	cin >> height; // Ű����κ��� ���̸� �о� height ������ ����

	int area = width * height; // �簢���� ���� ���
	cout << "������ " << area << endl; // ������ ����ϰ� ���� �ٷ� �Ѿ
}