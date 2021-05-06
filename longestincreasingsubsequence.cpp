#include<iostream>
using namespace std;

int longestsubsequence(int * input,int n){
    int * output=new int[n];
    output[0]=1;
    for(int i=1;i<n;i++){
        output[i]=1;
        for(int j=i-1;j>=0;j--){
            if(input[j]>input[i]){
                continue;
            }
            int possibleans = output[j]+1;
            if(possibleans>output[i]){
                output[i]=possibleans;

            }

        }
    }
    int longestcount =0;
    for(int i=0;i<n;i++){
        if(longestcount<output[i]){
            longestcount = output[i];
        }
    }
    delete [] output;   
    return longestcount;
}




int main(){
    int n ;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int* input =new int[n];
    cout<<"Enter the Array Elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int ans = longestsubsequence(input,n);
    delete [] input;
    cout<<"The count of longest increasing subsequence3 fo the array is  "<<ans<<endl;
    return 0;
}