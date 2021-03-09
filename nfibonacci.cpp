#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int fib[n+1],i;
    fib[0]=1;
    fib[1]=1;
    for(i=2;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    cout<<"--Printing Fibonacci--";
    for(i=0;i<n;i++)
    {
        cout<<" "<<fib[i]<<" ";
    }

}




int main()
{
    int n;
    cout<<"\nEnter the N for fibonacci";
    cin>>n;
    if(n<=1)
    {
        cout<<"\nFibonacci is"<<n;
    }
    else
    {
        fibonacci(n);
    }
    return 0;
}