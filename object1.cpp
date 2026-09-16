#include <iostream>
using namespace std;
class product{
    public:
    int id;
    string nm;
    float p;
    void input(){
        cin>>id;
        cin>>nm;
        cin>>p;
    }
    void display(){
        cout<<id;
        cout<<nm;
        cout<<p;
    }
    void compare(product s){
        if(s.p>p){
            cout<<"lesser"<<endl;
        }else{
            cout<<"greater"<<endl;
        }
    }

};
int main(){
    product s1;
    product s2;
    s1.input();
    s2.input();
    s1.compare(s2);
    return 0;
}