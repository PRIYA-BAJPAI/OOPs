#include<iostream>
using namespace std;
class Animal{
     public:
     void eat(){
        cout<<"Animal is eating\n";
     }
};
class Mammal:virtual public Animal{
    public:
    void run(){
         cout<<"Mammal is running\n"; 
    }
};
class Bird:virtual public Animal{
    public:
    void fly(){
        cout<<"birds are flying\n";
    }
};
class Bat:public Mammal,public Bird{
      public:
      void color(){
        cout<<"bats are black\n";
      }
};
int main(){
    Bat b;
    b.color();
    b.fly();
    b.eat();
    b.run();
}