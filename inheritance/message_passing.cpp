#include<iostream>
using namespace std;
class Cars{
    public:
    void startengine(){
        cout<<"Engine started"<<endl;
    }
};
class Driver{
    public:
    void Drive(Cars &car){
         car.startengine();
         cout<<"Car is being drived"<<endl;
    }
};
int main(){
    Cars mycar;
    Driver driver;
   
    driver.Drive(mycar);
}