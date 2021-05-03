#include<iostream>
using namespace std;

bool checkbit(int n,int i){
    int z =n&(1<<i);
    if(z==0){
        return false;
    }else{
            return true;
    }

    
}


int main(){
    int n, i;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"the no of bit to be checked"<<endl;
    cin>>i;
    bool result = checkbit(n,i);
    if(result==0){
        cout<<"bit is not set"<<endl;
    }
    else{
        cout<<"bit is set"<<endl;
    }
    return 0;
}