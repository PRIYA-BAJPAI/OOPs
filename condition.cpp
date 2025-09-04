
// //greater no
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter two nos\n";
//     cin>>a>>b;
//     if(a>b){
//         cout<<a<<" is greater";
//     }else if(a==b){
//         cout<<"nos are equal";
//     }else{
//         cout<<b<<" is greater";
//     }
//     return 0;
// }

// //Wishing
// #include<iostream>
// using namespace std;
// int main(){
//  int time;
//  cout<<"Enter time=";
//  cin>>time;
//  if(time>=12 && time<16){
//     cout<<"Good Afternoon";
//  }else if(time>=16 && time<19){
//     cout<<"Good Evening";
//  }else if(time>=19 && time<=24){
//     cout<<"Good Night";
//  }else{
//     cout<<"Good Morning";
//  }
//  return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int pin;
//     cout<<"Enter 4 digit PIN--->";
//     cin>>pin;
//     if(pin==1234){
//         cout<<"WELCOME to the room";
//     }else{
//         cout<<"WRONG pin";
//     }
//     return 0;
// }

// //even odd
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no";
//     cin>>n;
//     if(n%2 == 0){
//         cout<<"Even no";
//     }else{
//         cout<<"Odd no";
//     }
//     return 0;
// }

//day
#include<iostream>
using namespace std;
int main(){
int day;
cout<<"enter count of day=";
cin>>day;
switch(day){
    case 1:cout<<"monday";
    break;
    case 2:cout<<"tuesday";
    break;
    case 3:cout<<"wednesday";
    break;
    case 4:cout<<"thursday";
    break;
    case 5:cout<<"friday";
    break;
    case 6:cout<<"saturday";
    break;
    case 7:cout<<"sunday";
}
return 0;
}