#include<iostream>
using namespace std;

int kadane(int * arr,int n){
    int current_sum=0;
    int bestsum=0;
    for(int i=0;i<n;i++){
        current_sum = current_sum+arr[i];
        if(current_sum>bestsum){
            bestsum=current_sum;

        }
        if(current_sum<0){
            current_sum=0;
        }
    }
    return bestsum;
}




int main(){
    int n;
    cout<<"Enter teh array size"<<endl;
    cin>>n;

    int * arr = new int [n];
    cout<<"Enter the Array Elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = kadane(arr,n);
    cout<<"The maximum in subarray is "<<result<<endl;
    delete []arr;
    return 0;
}