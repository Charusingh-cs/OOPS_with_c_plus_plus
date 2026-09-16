#include <iostream>
using namespace std;
class patient{
    private:
    int id;
    string na_me;
    static int activePatients;
    public:
    patient(int iod,string name){
        id=iod;
        na_me=name;
        activePatients++;
    }
    ~patient(){
        activePatients--;
    }
    static void show(){
        cout<<"Active Patients";
        cout<<activePatients<<endl;
    }

};
int patient ::activePatients=0;
int main(){
    patient::show();
    patient p1(101,"Rahul");
    patient p2(102,"Aman");
    patient::show();
}