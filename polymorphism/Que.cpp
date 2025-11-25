// Write a program to demonstrate dynamic polymorphism & dynamic dispatch
#include<iostream>
using namespace std;
class Appliance{
    public:
    virtual void start(){
        cout<<"Appliance Activated"<<endl;
    }
};
class Toaster:public Appliance{
    public:
    void start(){
       cout<<"Toaster haeting up"<<endl;
    }
};
class Oven:public Appliance{
    public:
    void start(){
        cout<<"Oven heating"<<endl;
    }
};
void run_appliance(){

}
int main(){
    run_appliance(App*);
}