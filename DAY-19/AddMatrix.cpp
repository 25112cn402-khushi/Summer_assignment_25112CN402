#include <iostream>
using namespace std;
int main(){
  //initialisation of variables
    int arr1[50][50],arr2[50][50],result[50][50],i,j,row,colum;

  //enter row
    cout<<"ENTER ROW:";
    cin>>row;
 //enter column
    cout<<"ENTER COLUMN:";
    cin>>colum;

  //enter numbers in matrix 1st
    cout<<"ARRAY 1:\n";
  //number of rows
    for(i=0;i<row;i++){
        cout<<"ENTER IN ROWS:\n";
      //number input in each row
        for(j=0;j<colum;j++){
            cout<<"ENTER IN  COLUMN:";
            cin>>arr1[i][j];
        }
    }
  //enter numbers in matrix 2nd
    cout<<"ARRAY 2:\n";
  //number of rows
    for(i=0;i<row;i++){
        cout<<"ENTER IN ROWS:\n";
      //number input in each row
        for(j=0;j<colum;j++){
            cout<<"ENTER IN  COLUMN:";
            cin>>arr2[i][j];
        }
    }
    cout<<"ADDITION:\n";
  //for adding numbefr of rows and column should be same for addition
    for(i=0;i<row;i++){
        for(j=0;j<colum;j++){
          //addition in another matrix
            result[i][j]=arr2[i][j]+arr1[i][j];
        }
    }//printing resultant matrix 
    for(i=0;i<row;i++){
        for(j=0;j<colum;j++){
            cout<<result[i][j]<<"  ";
        }
        cout<<"\n";
    }
    return 0;

}
