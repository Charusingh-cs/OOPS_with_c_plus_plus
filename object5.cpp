#include <iostream>
using namespace std;

class Employee {
private:
    int employeeId;
    string name;
    float salary;

public:
    // Default constructor
    Employee() {
        employeeId = 0;
        name = "Unknown";
        salary = 0;
    }

    // Parameterized constructor
    Employee(int id, string n, float s) {
        employeeId = id;
        name = n;
        salary = s;
    }

    // Copy constructor
    Employee(const Employee &e) {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    // Const member function
    void display() const {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    // Salary update function
    void updateSalary(float newSalary) {
        salary = newSalary;
    }
};

int main() {

    // Const Employee object
    const Employee e1(101, "Charu", 50000);

    cout << "Employee 1 Details:" << endl;
    e1.display();

    // Copy constructor
    Employee e2(e1);

    cout << "\nCopied Employee Details:" << endl;
    e2.display();

    // Salary update
    e2.updateSalary(55000);

    cout << "\nAfter Salary Update:" << endl;
    e2.display();

    // Cannot call non-const function using const object
    // e1.updateSalary(60000);  // ERROR

    return 0;
}