#include <iostream>
using namespace std;
int main(){
  //initialising arrayname row and column
    int arr[50][50],sum=0,i,j,row,colum;

  //input for rows and column
    cout<<"ENTER ROW:";
    cin>>row;

    cout<<"ENTER COLUMN:";
    cin>>colum;

  //loop for input for numbers in matrix
    cout<<"ARRAY input:\n";
    for(i=0;i<row;i++){
        cout<<"ENTER IN ROWS:\n";
        for(j=0;j<colum;j++){
            cout<<"ENTER IN  COLUMN:";
            cin>>arr[i][j];
        }
    } 

  //printing the matrix
    cout<<"Array:\n";
    for(i=0;i<row;i++){
        for(j=0;j<colum;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }
  //for column sum we will make outer loop to run each column
    cout<<"SUM OF EACH COLUMN:\n";
    for(i=0;i<colum;i++){
      //foe each column the sum will become 0  
      sum=0;
      //this loop will run the each number of row in column
        for(j=0;j<row;j++){
          //adding sum of each each number in column
            sum+=arr[j][i];
        }
      //printing sum
        cout<<"SUM OF "<<i+1<<" is :"<<sum;
        cout<<"\n";
    }
    return 0;

}
