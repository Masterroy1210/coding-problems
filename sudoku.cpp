#include<iostream>

using namespace std;

#define N 9



bool findemptylocation(int grid[N][N],int &row,int &column){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(grid[i][j]==0){
                row=i;
                column=j;
                return true;
            }
        }
    }
    return false;
}


bool issaferow(int grid[N][N],int row,int num){
    for(int i=0;i<N;i++){
        if(grid[row][i]==num){
            return false;
        }
    }
    return true;
}
bool issafecolumn(int grid[N][N],int column,int num){
    for(int i=0;i<N;i++){
        if(grid[i][column]==num){
            return false;
        }

    }
    return true;
}

bool issafebox(int grid[N][N],int row,int column,int num)
{
    int rowfactor=row-(row%3);
    int columnfactor=column-(column%3);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(grid[i+rowfactor][j+columnfactor]==num){
                return false;
            }
        }
    }
return true;
}
bool issafe(int grid[N][N],int row,int column,int num){

    if(issaferow(grid,row,num)&& issafecolumn(grid,column,num)&&issafebox(grid,row,column,num)){
        return true;
    }
    return false;


}




bool solvesudoku(int grid[N][N]){
    int row,column;

    if(!findemptylocation(grid,row,column)){
        return true;
    }
    for(int i=1;i<=9;i++){
        if(issafe(grid,row,column,i)){
            grid[row][column]=i;
            if(solvesudoku(grid)){
                return true;

            }
            grid[row][column]=0;


        }
    }
    return false;

}











int main(){

    int grid[N][N];
    for(int i=0;i<N;i++){
        string s;
        cin>>s;
        for(int j=0;j<s.length();j++){

            grid[i][j]=s[j]-'0';
        }


    }
    bool result= solvesudoku(grid);
    if(result){
    cout<<"Displaying the Grid"<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<grid[i][j];

        }
        cout<<endl;
    }
    }
    return 0;




}