#include<iostream>
using namespace std;

void replacechar(char str[],char ch1,char ch2){
    if(str[0]=='\0'){
        return;
    }
    if(str[0]!=ch1){
        replacechar(str+1,ch1,ch2);
    }else{
        str[0]=ch2;
        replacechar(str+1,ch1,ch2);
    }
}



int main(){
    char str[100];
    char ch1 ,ch2;
    cout<<"Enter the string "<<endl;
    cin>>str;
    cout<<"Enter the character you nwant ot replace"<<endl;
    cin>>ch1>>ch2;
    replacechar(str,ch1,ch2);
    cout<<str<<endl;
    return 0;

}