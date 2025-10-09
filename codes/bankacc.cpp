#include<iostream>
#include<string>
using namespace std;
class Bankaccount{
    int accountno;
    int balance; 
    public:
    Bankaccount(int acc,int bal){
        accountno=acc;
        balance=bal;
    }
    Bankaccount(const Bankaccount &obj){
        balance=obj.balance;
        accountno=obj.accountno;
    }
    void add_balance(int amt){
        balance+=amt;
    }
    void show(){
        cout<<"acc no: "<<accountno<<endl;
        cout<<"balance:"<<balance<<endl;
    }
};
int main(){
    Bankaccount b(101,3000);
    b.add_balance(300);
    Bankaccount b2=b;
    b.show();
    b2.show();
    return 0;
}