#include <iostream>
using namespace std;

int main() {
	cout << "the number of input number ? ";
	int n;
	cin >> n;
	if (n <= 0) {
		return 0;
	}

	int* p = new int[n];
	if (!p) {
		cout << "can't allocate memory";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 정수 : ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << "average : " << (sum / n) << endl;


	return 0;
}
