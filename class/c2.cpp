#include<iostream>
using namespace std;
class outer{
    public:
    class inner{
        public:
        void display(){
            cout<<"inner class";
        }
    };
    //  cout<<"outer"<<endl;
};
int main(){
     outer test;
    //  inner paper;
     //test.display();
     return 0;
}