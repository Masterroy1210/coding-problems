#include<iostream>
#include<vector>

using namespace std;



void permutationsHelp(int i,vector<int>*array,vector<vector<int>> *permutations);
void swap(vector<int>*array,int i ,int j);

vector<vector<int>>getpermutations(vector<int>array){
    vector<vector<int>>permutations;
    permutationsHelp(0,&array,&permutations);
    return permutations;

}

void permutationsHelp(int i,vector<int>*array,vector<vector<int>> *permutations){

    if(i==array->size()-1)
    {
        permutations->push_back(*array);

    }else{
        for(int j=i;j<array->size();j++){
            swap(array,i,j);
            permutationsHelp(i+1 ,array,permutations);
            swap(array,i,j);
        }
    }


}


void swap(vector<int>*array,int i,int j){
    int temp=array->at(i);
    array->at(i)=array->at(j);
    array->at(j)=temp;
}

int main(){
    vector<int>array;
    int i;
    cin>>i;
    for(int z=0;z<i;z++)
    {
        int data;
        cin>>data;
        array.push_back(data);
    }

    vector<vector<int>>permutation = getpermutations(array);
    for(int i=0;i<permutation.size();i++)
    {
        for(int j=0;j<permutation[i].size();j++){
            cout<<permutation[i][j]<<"  ";
        }
        cout<<endl;
    }
 


    
    return 0;
}