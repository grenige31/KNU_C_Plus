#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
public:
    void setInfo(string n, int a) {
        name = n;
        age = a;
    }
    void showInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {

    string position;
    int salary;
public:
    void setEmployeeInfo(string pos, int sal) {
        position = pos;
        salary = sal;
    }
    void display() {
        showInfo();
        cout << "Position: " << position << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setInfo("John", 30);
    emp.setEmployeeInfo("Manager", 5000);
    emp.display();
    return 0;
}