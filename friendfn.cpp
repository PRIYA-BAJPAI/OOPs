#include<iostream>
using namespace std;
class Two;
class One{
    int value;
    public:
    void input(int data){
        value=data;
    }
    friend void add(One,Two);
};
class Two{
    int value;
    public:
    void input(int data){
        value=data;
    }
    friend void add(One,Two);

};
void add(One obj1,Two obj2){
    cout<<"sum of two objects from definition of class one and two is "<<obj1.value+obj2.value<<endl;
}
int main(){
    One A;
    Two B;
    A.input(20);
    B.input(50);
    add(A,B);
    return 0;
}