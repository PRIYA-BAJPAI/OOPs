// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,temp;
//     cout<<"enter 1st no=";
//     cin>>a;
//     cout<<"enter 2nd no=";
//     cin>>b;

//     // a=5;
//     // b=6;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<"after swapping a="<<a<<" and b="<<b;
    
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter 1st no=";
    cin>>a;
    cout<<"enter 2nd no=";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping a="<<a<<" and b="<<b;
    return 0;
}