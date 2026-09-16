#include <iostream>
using namespace std;

class StudentResult;

class ResultAnalyzer {
public:
    void analyze(StudentResult &s);
};

class StudentResult {
private:
    int rollNo;
    string name;
    int marks1, marks2, marks3;

    static int totalStudents;

public:
    // Parameterized constructor
    StudentResult(int r, string n, int m1, int m2, int m3) {
        rollNo = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;

        totalStudents++;
    }

    // Friend class
    friend class ResultAnalyzer;

    // Static function
    static void showTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }

    // Destructor
    ~StudentResult() {
        cout << "StudentResult object destroyed for " << name << endl;
    }
};

// Definition of static data member
int StudentResult::totalStudents = 0;

// Function of ResultAnalyzer
void ResultAnalyzer::analyze(StudentResult &s) {
    int total = s.marks1 + s.marks2 + s.marks3;
    float percentage = total / 3.0;

    cout << "\nRoll No: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (s.marks1 >= 33 && s.marks2 >= 33 && s.marks3 >= 33)
        cout << "Result: PASS" << endl;
    else
        cout << "Result: FAIL" << endl;
}

int main() {

    StudentResult s1(101, "Charu", 80, 75, 90);
    StudentResult s2(102, "Rahul", 60, 70, 65);

    ResultAnalyzer r;

    r.analyze(s1);
    r.analyze(s2);

    StudentResult::showTotalStudents();

    return 0;
}