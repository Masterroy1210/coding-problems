#include<iostream>
using namespace std;

int flipbit(int n,int i){
    int result = n^(1<<i);
    return result;
}



int main(){
    int n ,i;
    cout<<"Enter the number and bit that is to be flipped"<<endl;
    cin>>n>>i;
    int result = flipbit(n,i);
    cout<<result<<endl;
    return 0;
    }