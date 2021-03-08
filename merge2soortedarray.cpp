#include<iostream>
using namespace std;


void merge(int a1[],int a2[],int n1,int n2)
{
    int i =0;
    int j =0;
    int k =0;
    int c[n1+n2];
    int count =0;
     while(count!=n1+n2)
        {
                count++;

            if(a1[i]<a2[j])
            {
                c[k]=a1[i];
                i=i+1;
                k=k+1;
            }
            if(a1[i]>a2[j])
            {
                c[k]=a2[j];
                k=k+1;
                j=j+1;
            }
        }
      
      cout<<"\nMerged Array--";
      for(int it=0;it<n1+n2;it++)
      {
          cout<<c[it];
      }
}
    
   



int main ()
{
    int n1,n2;
    cout<<"Enter the size off the 2 array to be merged";
    cin>>n1;
    cin>>n2;
    int a1[n1],a2[n2];
    cout<<"\nEnter the first array in sorted order";
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    cout<<"\nEnter the second element in sorted order";
    for(int i=0;i<n2;i++)
    {
        cin>>a2[i];
    }

    merge(a1,a2,n1,n2);
    return 0;
}