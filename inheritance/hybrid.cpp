#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
         cout<<"This is a Vehicle"<<endl;
    }
};
class fare{
    public:
    fare(){
        cout<<"Fare of vehicle"<<endl;
    }
};
class bus: public Vehicle , public fare{
    public:
    bus(){
        cout<<"this vehicle is a bus with fare"<<endl;
    }
};
class car:public Vehicle{
    public:
    car(){
        cout<<"this vehicle is a car"<<endl;
    }
};
int main(){
    bus B;
    cout<<endl<<endl;
    car C;
}

 