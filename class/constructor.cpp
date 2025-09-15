#include<iostream>
using namespace std;
class hello{
    public:
    hello(){ 
        cout<<"Hello World";
    }
};
int main(){
    hello bye; //(this will call the constructor)
    return 0;
}
