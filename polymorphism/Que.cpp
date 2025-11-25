// QUE :- Write a program to demonstrate dynamic polymorphism & dynamic dispatch
#include<iostream>
using namespace std;
class Appliance{
    public:
    Appliance(){
        cout<<"Appliance created"<<endl;
    }
    virtual void start(){
        cout<<"Appliance Activated"<<endl;
    }
    virtual ~Appliance(){
        cout<<"Appliance destroyed"<<endl;
    }

};
class Toaster:public Appliance{
    public:
     Toaster(){
        cout<<"Toaster created"<<endl;
    }
    void start(){
       cout<<"Toaster heating up"<<endl;
    }
     ~Toaster(){
        cout<<"Toaster destroyed"<<endl;
    }
};
class Oven:public Appliance{
    public:
     Oven(){
        cout<<"Oven created"<<endl;
    }
    void start(){
        cout<<"Oven heating"<<endl;
    }
     ~Oven(){
        cout<<"Oven destroyed"<<endl;
    }
};
void run_appliance(Appliance *ptr){
    ptr->start();
}
int main(){
//    Appliance *t=new Toaster;
//    Appliance *o=new Oven;
//    run_appliance(t);
//    run_appliance(o);


//    Appliance *t[2]={new Toaster,new Oven};  //heterogenous array
//    for(int i=0;i<2;i++){
//     t[i]->start();
//    }

      //Appliance obj;


      //Oven obj;//static obj


      Appliance *obj=new Oven;
      delete obj;
}




//In c++ there is a table of pointer called vtable . This table is present in every generation of class to  implement dynamic polymorphism . Each table for each class contains the pointers to the relevant fn which should be called during dynamic dispatch .