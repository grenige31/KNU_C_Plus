#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char password[11];
	cout << "-- Login -- \n";
	while(true) {
		cout << "password : ";
		cin >> password;
		if(strcmp(password, "C++") == 0) {
			cout << "Success\n";
			break;
		}
		else 
			cout << "Fail\n" << endl;
	}
}