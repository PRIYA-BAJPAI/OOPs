//constructor defined outside class
#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x,string y,int z){
        
    }
};
Car::Car(string x,string y,int z){
        brand=x;
        model=y; 
        year=z;
}
int main(){
   Car carobj("BMW","X5",1999);
   Car carobj1("Ford","Mustang",1969);
   cout<<carobj.brand<<" "<<carobj.model<<" "<<carobj.year<<"\n";
   cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<"\n";
   return 0;
}