#include<iostream>
using namespace std;



int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int result = n&n-1;
    if(result==0){
        cout<<"Entered number is power of  2"<<endl;
    }
    else{
        cout<<"Entered number is not a power of 2"<<endl;
    }
    return 0;
}