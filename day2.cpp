//1. University Course Registration System
//Create a class Student containing rollNo, name, and CGPA. Provide overloaded constructors to create a student either with only rollNo and name, or with all three details. Create an instance method updateCGPA(double cgpa) that uses the this pointer to distinguish between the data member and parameter. Inside Student, create a nested class Address containing city and state, and provide a method to display the student's address. In main(), create an array of at least 5 Student objects, initialize them using different constructors, update selected students' CGPA, and display complete information.
// Concepts Covered: Constructor Overloading, Nested Class, Array of Objects, this Pointer
#include <iostream>
using namespace std;
class student{
    int rno;
    string name;
    double cg;
    public:
    student(int r,string n){
        rno=r;
        name=n;
        cg=0;

    }
    student(int r,string n,double c){
        rno=r;
        name=n;
        cg=c;

    }
    void updatecg(double cgpa){
        this->cg=cgpa;
    }
    class address{
        string city;
        string state;

        public :
        address(string c,string s){
            city=c;
            state=s;
        }
        void display(){
            cout<<city;
            cout<<state;
        }
    };
    void display(){
        cout<<city;
        cout<<state;
    }
    

};
int main(){
    student s={student(1,"hello"),student(1,"maggie"),student(2,"try"),student(3,"fry"),student(3,"my")};
    s[0].updatecg(9.2);
    s[2].updatecg(8.9);

    for(int i = 0; i < 5; i++)
        s[i].display();

    student::address a("Ghaziabad", "Uttar Pradesh");
    a.display();

    return 0;

}