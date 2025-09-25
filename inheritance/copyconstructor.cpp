#include<iostream>
using namespace std;
class myclass{
    int x;
    float y;
    public:
    myclass(){
        x=0;
        y=2;
    }
    myclass(const myclass &other){  //const is used so that a new constructor do not change the value of previous constructor
        x=other.x;
        y=other.y;
    }
    void display(){
        cout<<" x: "<<x<<" y: "<<y<<endl;
    }
};

int main(){
    myclass m1;
    m1.display();
    //using the copy constructor to create a new object as the copy of m1
    myclass m2=m1;
    m2.display();
    return 0;
}