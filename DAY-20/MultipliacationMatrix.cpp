#include <iostream>
using namespace std;
int main(){
  //initialising arraynames and required variables 
    int arr1[50][50],arr2[50][50],result[50][50],i,j,row1,colum1,row2,colum2;

  //enter rows and column in 1st matrix
    cout<<"MATRIX 1:";
    cout<<"ENTER ROW:";
    cin>>row1;
    cout<<"ENTER COLUMN:";
    cin>>colum1;

  //enter rows and column in matrix 2nd
    cout<<"ENTER ROW:";
    cin>>row2;
    cout<<"ENTER COLUMN:";
    cin>>colum2;


  //enter numbers in matrix 1
    cout<<"ARRAY 1:\n";
    for(i=0;i<row1;i++){
        cout<<"ENTER IN ROWS:\n";
        for(j=0;j<colum1;j++){
            cout<<"ENTER IN  COLUMN:";
            cin>>arr1[i][j];
        }
    }
  //enter numbers in matrix 2 
    cout<<"ARRAY 2:\n";
    for(i=0;i<row2;i++){
        cout<<"ENTER IN ROWS:\n";
        for(j=0;j<colum2;j++){
            cout<<"ENTER IN  COLUMN:";
            cin>>arr2[i][j];
        }
    }
  //multiplication
    cout<<"MULTIPLICATION:\n";
  //for multiplication column of 1st matrix should be equal to row of 2nd matrix 
    if(colum1==row2){
      //we know the resultant matrix should be equal to row of 1st matrix and column of 2nd matrix
        for(i=0;i<row1;i++){
            for(j=0;j<colum2;j++){
              //this loop will run so make addition with multiplication done in matrix
                for(int k=0;k<colum1;k++){
                  //required multiplication with every iteration
                    result[i][j]=result[i][j]+arr1[i][k]*arr2[k][j];
                }
        }
    }}//else multipliaction is not possible
    else{
        cout<<"Mulplication not possible";
    }//printing multiplication
    for(i=0;i<row1;i++){
        for(j=0;j<colum2;j++){
            cout<<result[i][j]<<"  ";
        }
        cout<<"\n";
    }
    return 0;

}
