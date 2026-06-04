#include <iostream>
using namespace std;
int main(){
  //initialising rows and column for input
    int rows, colm,i,j;
    cout<<"ENTER ROWS:";
  //input of rows and column
    cin>>rows;
    cout<<"ENTER COLUMN:";
    cin>>colm;
 //loop will work until the rows
    for(i=1;i<=rows;i++){
      //loop will work until i as after i it will not work and make sure make triangle
        for(j=1;j<=i;j++){
            cout<<j;
        }
      //this will make work to other line
        cout<<"\n";
    }
    return 0;
}
