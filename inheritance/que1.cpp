#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
};
class Bird:public Animal{
     public:
     void wings(){
        cout<<"Birds is flying"<<endl;
     }
};
class Mammal:public Animal{
    public:
    void navigation(){
        cout<<"These animals navigate"<<endl;
    }
};
class Bat:public Mammal,public Bird{
    public:
    void color(){
        cout<<"bat is black in color"<<endl;
    }
};

int main(){
    Mammal M;
    M.eat();
    M.navigation();
    cout<<endl;
    Bird B;
    B.eat();
    B.wings();
    cout<<endl;
    Bat T;
    T.color();
    T.wings();
    T.navigation();
    return 0;
}