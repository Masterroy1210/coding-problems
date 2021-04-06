#include<iostream>
using namespace std;

void subsequence(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;
        return;
    }
    subsequence(input.substr(1),output);
    subsequence(input.substr(1),output+input[0]);


}







int main()
{
    string s;
    cin>>s;
    string output ="  ";
    subsequence(s,output);
    return 0;



}