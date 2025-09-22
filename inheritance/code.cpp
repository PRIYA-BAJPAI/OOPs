#include<iostream>
using namespace std;
class parent{
    public:
    int n;
    void print(){
        cout<<n;
    }
};
class child : public parent{
    public:
    void set_num(){
        n=22;
    }
};
int main(){
    child c1;
    c1.set_num();
    c1.print();
    // cout<<
    return 0;
}