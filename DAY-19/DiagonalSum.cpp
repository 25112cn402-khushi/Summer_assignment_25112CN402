#include <iostream>
using namespace std;
int main(){
    //initialising required variables
    int arr[50][50],i,j,row,colum,digsum=0;
    //input of row
    cout<<"ENTER ROW:";
    cin>>row;
    //input of column
    cout<<"ENTER COLUMN:";
    cin>>colum;
    
    //enter numbers in matrix
    cout<<"ARRAY input:\n";
    for(i=0;i<row;i++){
        //make to each row
        cout<<"ENTER IN ROWS:\n";
        //enter numbers in each row
        for(j=0;j<colum;j++){
            cout<<"ENTER IN  COLUMN:";
            cin>>arr[i][j];
        }
    } 
    //printing array
    cout<<"Array:\n";
    for(i=0;i<row;i++){
        for(j=0;j<colum;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }
    //printing diagonal sum
    cout<<"DiagonalSum:";
    for(i=0;i<row;i++){
        for(j=0;j<colum;j++){
            //index of matrix
            //00 01 02 
            //10 11 12 
            //20 21 22
            //it tells diagonal sum should be rows equals to column and sum of both should be less than by 1 of rows
            if(i==j || i+j==row-1){
                digsum=digsum+arr[i][j];
            }
        }
    }
    //printing sum
    cout<<digsum;
    
    return 0;

}
