#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    double CGPA;

public:
    Student(int r, string n) {
        rollNo = r;
        name = n;
        CGPA = 0;
    }

    Student(int r, string n, double c) {
        rollNo = r;
        name = n;
        CGPA = c;
    }

    void updateCGPA(double cgpa) {
        this->CGPA = cgpa;
    }

    class Address {
        string city, state;

    public:
        Address(string c, string s) {
            city = c;
            state = s;
        }

        void display() {
            cout << city << ", " << state << endl;
        }
    };

    void display() {
        cout << rollNo << " " << name << " " << CGPA << endl;
    }
};

int main() {
    Student s[5] = {
        Student(101, "Charu"),
        Student(102, "Ananya", 8.7),
        Student(103, "Rahul"),
        Student(104, "Priya", 9.1),
        Student(105, "Aman", 8.5)
    };

    s[0].updateCGPA(9.2);
    s[2].updateCGPA(8.9);

    for(int i = 0; i < 5; i++)
        s[i].display();

    Student::Address a("Ghaziabad", "Uttar Pradesh");
    a.display();

    return 0;
}