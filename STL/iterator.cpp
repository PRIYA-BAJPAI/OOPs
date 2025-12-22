#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4,5,6};
    arr.reserve(100); 
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    arr.push_back(5);
    arr.push_back(8); 
    arr.emplace_back(14); 

    for(auto i:arr){  
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int>::iterator itr;
    itr=arr.begin(); //vector ke starting element ko point karta hai
    cout<<*itr<<endl; //itr pointer hai aur * lagane se dereference ho gya aur itr ka data print hoga
    itr=arr.end()-1; //end will point to the next of last data hence -1 is used
    cout<<*itr<<endl;
    //modifying a vector
    for(auto &i:arr){ //i ke aage "&" lagne se i reference variable ban gya jo ki vector ke kisi location ko point karta hai aut iski help se ham i me changes kar sakte hai
        i=i*2; //to modify we have to use &
    }

    for(auto i:arr){ //i read karne ke liye hai kyuki iske aage "&" nhi hai
        cout<<i<<" ";
    }
    cout<<endl;
}