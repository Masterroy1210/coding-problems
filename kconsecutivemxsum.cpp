#include<iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n],current_sum,max;
        max=0;
        current_sum=0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<k;i++)
        {
            current_sum=current_sum+arr[i];
        }
        max=current_sum;
        for(int i=k;i<n;i++)
        {
            current_sum=current_sum+arr[i]-arr[i-k];
            if(current_sum>max)
            {
                max=current_sum;
             }
           
        }
         cout<<max<<endl;
    }
    return 0;
}
