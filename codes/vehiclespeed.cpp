#include<iostream>
#include<string>
using namespace std;
class vehicle{
    public:
    float speed;
    vehicle(float s){
        speed = s;
        // cout<<"vehicle run in 120 m/s."<<endl;
    }
};
class car:public vehicle{
    public:
    int seats;
    car(float s,int seatcount):
    vehicle(s){
        seats = seatcount;
        // cout<<"car is 6 seater."<<endl;
    }
};
class electriccar:public car{
    public:
    string battery;
    electriccar(float s,int seatcount,string b) : car(s,seatcount){
        battery = b;
    }
    // int maxspeed(){
    //     cout<<"airplane has max speed of 1000m/s."<<endl;
    // }
};
class airplane{
    public:
    float maxspeed;
    airplane(float m){
        maxspeed=m;
    }
};

class flycar:public car , public airplane{
    public:
    
    flycar(float s,int seatcount,float m):
    car(s,seatcount),airplane(m){
        //   cout<<"hello";
    }
    // int maxspeed();
};

int main(){
    flycar f(5.5,6,5.7);
    
}