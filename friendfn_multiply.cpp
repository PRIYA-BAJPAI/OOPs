#include<iostream>
using namespace std;
class Two;
class One{
    int value;
    public:
    void input(int data){
        value=data;
    }
    friend void mul(One,Two);
};
class Two{
    int value;
    public:
    void input(int data){
        value=data;
    }
    friend void mul(One,Two);

};
void mul(One obj1,Two obj2){
    cout<<"sum of two objects from definition of class one and two is "<<obj1.value*obj2.value<<endl;
}
int main(){
    One A;
    Two B;
    A.input(10);
    B.input(50);
    mul(A,B);
    return 0;
}