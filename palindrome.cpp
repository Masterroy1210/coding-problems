#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(string s1)
{
    int i=0;
    int j=s1.length()-1;
    while(i<j)aa
    {
    if(s1[i]==s1[j])
    {
        i++;
        j++;
        return true;
    }
    return false;
    }


}


int main()
{
    string s1;
    cout<<"\n Enter the string to check palindrome";
    cin>>s1;
    bool result = checkPalindrome(s1);
    if(result==true)
    {
        cout<<"\n---Entered string is palindrome";
        return 0;
    }
    cout<<"\n---Entered String Is not a Palindorme string---";
    return 0;



}
