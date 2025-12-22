#include<iostream>
#include<vector>
#include<algorithm> //used when we try to perform sorting or any algo in vector
using namespace std;

int main(){
    //initialisation and declaration
    vector<int>arr={1,2,3,4,5,6};
    arr.reserve(100); //this sets the capacity of the vector to be 100 after 100
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    arr.push_back(5);
    arr.push_back(8); //ye previous data ko copy karta hai new jagah par
    arr.emplace_back(14); //ye usi jagah par peeche se data ko daal dega to baar baar copy karne ka kaam bachega

    cout<<arr.size()<<" "<<arr.capacity()<<endl;
//capacity gets doubled if element is added when the size become equal to capacity

 for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(auto i:arr){  //for each loop jaha par auto keyword i ke data type ko khud hi recognise kar lega with the help of arr without :arr i ka data type find nhi hoga aur synatx error ayega
        cout<<i<<" ";//arr ke har ek index i me jaake store hoga isilye ham i ke through arr ko print karwa rhe hai
    }
    cout<<endl;
}