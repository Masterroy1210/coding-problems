#include<iostream>
using namespace std;

void removechar(char str[],char ch){
    if(str[0]=='\0'){
        return;
    }
    if(str[0]!=ch){
        removechar(str+1,ch);
    }else{
        int i=1;
        for(;str[i]!='\0';i++){
            str[i-1]=str[i];
        }
        str[i-1]=str[i];
        removechar(str,ch);
    }
}

int main(){
char str[100];
cout<<"Enter the string "<<endl;
cin>>str;
char ch;
cout<<"Enter the character you want to delete from the string"<<endl;
cin>>ch;
removechar(str,ch);
cout<<str<<endl;
return 0;

}