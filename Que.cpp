#include<iostream>
#include<string>
using namespace std;
class Amit{
    string name;
    int age;
    int salary;
    public:
    Amit(){
    name="Amit";
    age=25 ;
    salary=2500;
    }
    void retrieve_data(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Salary : "<<salary<<endl;
        // change_age();
        // change_salary();
    }
    void change_age(int ag){
        
        age=ag;
        
    }
    void change_salary(int s){
        
        salary=s;
        
    }
};
    int main(){
        Amit A;
        A.retrieve_data();
        cout<<endl;
        int a;
        int sal;
        cout<<"Enter updated age : ";
        cin>>a;
        cout<<"Enter updated salary :";
        cin>>sal;
        A.change_age(a);
        cout<<endl;
        A.change_salary(sal);
        cout<<endl;
        A.retrieve_data();
        return 0;
    }


