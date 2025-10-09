#include<iostream>
#include<string>
using namespace std;
class Student{
   
    string name;
    int rollno;
    int marks;
    public:
    Student(string s,int r,int m){
        name =s;
        rollno =r;
        marks=m;
    }
    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"rollno : "<<rollno<<endl;
        cout<<"marks : "<<marks<<endl;
    }
};
int main(){
    Student S1("priya",21,100);
    S1.display();
    return 0;
}