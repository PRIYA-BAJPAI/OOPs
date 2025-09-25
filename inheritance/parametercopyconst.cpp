#include<iostream>
using namespace std;
class myclass{
    int age;
    string name;
    public:
    myclass(int a,string s){
           age=a;
           name=s;
    }
    myclass(const myclass &s){
        age=s.age;
        name=s.name;
    }
    void display(){
        cout<<"Age is "<<age<<"\nname is "<<name<<endl;
    }
};
int main(){
    myclass obj1(19,"priya");
    myclass obj2(obj1);
    obj1.display();
    cout<<endl<<endl;
    obj2.display();
    return 0;
}