#include<iostream>
using namespace std;


int countPrime(int n)
{
    bool arr[n+1];
    for(int i=0;i<n;i++)
    {
        arr[i]=true;

    }
    arr[0]=false;
    arr[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        for(int j =i*i;j<=n;j=j+i)
        {
            arr[j]=false;
        }
    }
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==true)
        {
            count++;
        }
}
    return count;
}

int main()
{
    int n;
    cout<<"\nEnter the no upto which yu want prime count---";
    cin>>n;
    int primecount=countPrime(n);
    cout<<"\nThe total prime number upto "<<n<<"  are   "<<primecount;
    return 0;

}