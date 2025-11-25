#include<iostream>
using namespace std;
class tv{
    bool isOn;
    public:
    void control(bool x){
        isOn=x;
    }
    void getStatus(){
        if(isOn)cout<<"TV is ON";
        else cout<<"TV is OFF";
    }
};
    class Remote{
        public:
        void control(tv &a,bool x){
            a.control(x);
        }
    };
int main(){
    tv t1;
    Remote r1;
    r1.control(t1,true);
    t1.getStatus();
}