#include <iostream>
using namespace std;
int main(){
  //initialising required variables
    int arr1[50][50],arr2[50][50],result[50][50],i,j,row,colum;
//input rows
    cout<<"ENTER ROW:";
    cin>>row;
//input column
    cout<<"ENTER COLUMN:";
    cin>>colum;

  //enter numbers in each matrix
    cout<<"ARRAY 1:\n";
  //move to each row
    for(i=0;i<row;i++){
        cout<<"ENTER IN ROWS:\n";
      //enter numbers in each row
        for(j=0;j<colum;j++){
            cout<<"ENTER IN  COLUMN:";
            cin>>arr1[i][j];
        }
    }
  //enter numbers in each matrix
    cout<<"ARRAY 2:\n";
  //move to each row
    for(i=0;i<row;i++){
        cout<<"ENTER IN ROWS:\n";
      //enter numbers in each row 
        for(j=0;j<colum;j++){
            cout<<"ENTER IN  COLUMN:";
            cin>>arr2[i][j];
        }
    }
  //differnece
    cout<<"SUBTRACTION:\n";
    for(i=0;i<row;i++){
        for(j=0;j<colum;j++){
          //making difference in each column of resultant matrix
            result[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
  //printing resultant matrix
    for(i=0;i<row;i++){
        for(j=0;j<colum;j++){
            cout<<result[i][j]<<"  ";
        }
        cout<<"\n";
    }
    return 0;

}
