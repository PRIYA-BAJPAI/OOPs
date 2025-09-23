#include<iostream>
using namespace std;
class Father{
    public:
    void color(){
        cout<<"skin color brown"<<endl;
    }
};
class Mother{
    public:
    void eye(){
        cout<<"eye ball brown"<<endl;
    }
};
class Child: public Father , public Mother{
    public:
    void result(){
    cout<<"Child is the combination of his father and mother having "<<endl;
    }
};
int main(){
    Child A;
    A.result();
    A.color();
    A.eye();
    return 0;
}