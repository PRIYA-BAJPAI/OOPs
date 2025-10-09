#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length,breadth;
    Rectangle(int len,int br){
        length=len;
        breadth=br;
    }
    int area(){
        int area;
        if(length>0 && breadth>0){
            area=length*breadth;
        }
        return area;
    }
    int perimeter(){
        int perimeter;
        if(length>0 && breadth>0){
            perimeter=2*(length+breadth);
        }
        return perimeter;
    }
    void isSquare(){
        if(length==breadth){
            cout<<"shape is a square"<<endl;
        }else{
            cout<<"shape is not a square"<<endl;
        }
    }
};
int main(){
    Rectangle r(10,20);
    cout<<"area= "<<r.area()<<endl;
    cout<<"perimeter= "<<r.perimeter()<<endl; 
    r.isSquare();
    
    
}