#include <iostream>
using namespace std;
class bankaccount{
    private:
    int no;
    string name;
    float balance;
    public:
    bankaccount(int n1,string na,float ba){
        no=n1;
        name=na;
        balance=ba;
    }
    friend void compareBalance(const bankaccount &a, const bankaccount &b);
};
    void compareBalance( const bankaccount &a,const bankaccount &b){
        if(a.balance>b.balance){
            cout<<"a";
        }else{
            cout<<"b";
        }
    }
int main(){
    bankaccount b1(10,"hello",9000);
    bankaccount b2(20,"cool",9000);
    compareBalance(b1,b2);
}
    
    



