#include <iostream>
using namespace std;
int main(){
  //initialising rows i and j
    int rows,i,j;
  //taking input of rows
    cout<<"ENTER ROWS:";
    cin>>rows;

  //loop for number of rows
    for(i=1;i<=rows;i++){
      //loop for columns it will start from number of rows till i so to print the reverse pyramid
        for(j=rows;j>=i;j--){
          //printing *
            cout<<"*";
        }
      //entering to next line
        cout<<"\n";
    }
    return 0;
}
