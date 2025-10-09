#include<iostream>
using namespace std;
int volume(int a,int b,int h){
    return a*b*h;
}
float volume(int r){
    return (4/3)*3.14*r*r*r;
}
int main(){
    cout<<"the vol of sphere is "<<volume(4)<<endl;
    cout<<"the vol of cuboid is "<<volume(4,12,3)<<endl;
    return 0;
}