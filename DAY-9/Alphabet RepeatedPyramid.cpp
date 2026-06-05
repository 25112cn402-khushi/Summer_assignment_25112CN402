#include <iostream>
using namespace std;
int main(){
  //initialising rows i and j
    int rows,i,j;
  //initialising ch
    char ch;
  //input of rows
    cout<<"ENTER ROWS:";
    cin>>rows;
  //making ch equals to A to print it with A
    ch = 'A';

  //loop for number of rows
    for(i=1;i<=rows;i++){
      //loop for triangle till i
        for(j=1;j<=i;j++){
          //printing characters
            cout<<ch;
        }
      //increasing ch value at every i iteration so to print same value at every column
        ch++;
      //moving to next line
        cout<<"\n";
    }
    return 0;
}
