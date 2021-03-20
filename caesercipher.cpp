#include<iostream>
using namespace std;



string encrypt(string s1,int  key)
{
    int newkey=key%26,codevalue;
    int len=s1.length();
    char ar[len],data;
    for(int i=0;i<len;i++)
    {
        codevalue=int(s1[i]);
        codevalue=codevalue+key;
        if(codevalue>122)
        {   
            int newcodevalue;
            newcodevalue = (codevalue%122);
            data =char(newcodevalue);
            ar[i]=data;
        }
        data =char(codevalue);
        ar[i]=data;
    }
        cout<<"\n--Decrypted key is";
        for(int j=0;j<=len;j++)
        {
            cout<<ar[j];
        }


}




int main(){
    string s1;
    int key;
    cout<<"\nEnter the string to encypt----";
    cin>>s1;
    cout<<"\nEnter the encrytion key";
    cin>>key;
    encrypt(s1,key);
    
    return 0;


}