#include<iostream>
using namespace std;



int main(){
    int n ;
    cout<<"Enter number to be checked"<<endl;
    cin>>n;
    int result = n&1;
    if(result==0){
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Entered numberr is odd"<<endl;
    }
    return 0;
}