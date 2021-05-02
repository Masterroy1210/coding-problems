#include<iostream>
using namespace std;

 int board[11][11];

bool ispossible(int n,int row,int column){
    //checking for same column
    for(int i=row-1;i>=0;i--){
        if(board[i][column]==1){
            return false;
        }
    }    
    //checking for upper left diagonal
    for(int i=row-1,j=column-1;i>=0 && j>=0;i--,j--){
        if(board[i][j]==1){
            return false;
        }
    }
    //checking for upper right diagonal
    for(int i=row-1,j=column+1;i>=0 && j<n;i--,j++){
        if(board[i][j]==1){
            return false;
        }
    }
     return true;
}

 void nQueenhelper(int n,int row){
     if(row==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";
            }
        } 
        cout<<endl;
        return;
     }
     for(int j=0;j<n;j++){
     
         if(ispossible(n,row,j)){
             board[row][j]=1;
             nQueenhelper(n,row+1);
             board[row][j]=0;
         }
     }
     return;
 }





void placeQueens(int n){
    
    //memset(board,0,11*11*sizeOf(int));
    nQueenhelper(n,0);
}

int main(){

    placeQueens(4);




    return 0;
}