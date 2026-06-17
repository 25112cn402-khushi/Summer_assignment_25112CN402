#include <iostream>
using namespace std;
int main(){
  //initialising required variables
    int arr[50][50],i,j,row,colum;

  //input for rows
    cout<<"ENTER ROW:";
    cin>>row;
//input for column
    cout<<"ENTER COLUMN:";
    cin>>colum;

  //enter numbers in matrix
    cout<<"ARRAY input:\n";
  //move to each row
    for(i=0;i<row;i++){
        cout<<"ENTER IN ROWS:\n";
      //enter numbers in each row
        for(j=0;j<colum;j++){
            cout<<"ENTER IN  COLUMN:";
            cin>>arr[i][j];
        }
    } 
 //printing existing array
    cout<<"Array:\n";
    for(i=0;i<row;i++){
        for(j=0;j<colum;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }
  //printing transpose
    cout<<"Transpose:\n";
    for(i=0;i<row;i++){
        for(j=0;j<colum;j++){
          //here transpose is rows becomes column and diagonal element remain same
            cout<<arr[j][i]<<"  ";
        }
      //move to each row
        cout<<"\n";
    }
    return 0;

}
