#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"These animals eat food"<<endl;
    }
};
class Mammal:public Animal{
    public:
    void walk(){
        cout<<"These mammals walk on land"<<endl;
    }
};
class Dog:public Mammal{
    public:
    void bark(){
        cout<<"Dogs bark"<<endl;
    }
};
int main(){
    Dog D;
    D.eat();
    D.walk();
    D.bark();
    return 0;
}