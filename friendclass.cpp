#include<iostream>
using namespace std;
class Two;
class One{
    friend class Two;
    int a=24;
    public:
    void show(){
        cout<<"This is class One"<<endl;
    }
};
class Two{
    friend class One;
    public:
    void show2(){
        cout<<"And this is class Two"<<endl;
    }
    void accessOnePrivate(One &obj){
        cout<<"Accessing data of data class"<<obj.a<<endl;
    }
};
int main(){
    One O1;
    Two O2;
    O2.accessOnePrivate(O1);
}