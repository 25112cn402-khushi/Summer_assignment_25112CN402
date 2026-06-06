#include <iostream>
using namespace std;
int main(){
  //initialising rows i j k space and star 
    int rows,i,j,k,spc,str;
  //input of rows 
    cout<<"ENTER ROWS:";
    cin>>rows;
  //sapce is equal to 0
    spc=0;
  //star is equal to rows+4
    str=rows+4;

  //loop for number of rows
    for(i=1;i<=rows;i++){
      //loop for space in each row
        for(j=1;j<=spc;j++){
          //printing space
            cout<<" ";
        }
      //loop for number of star in each row
        for(k=1;k<=str;k++){
          //printing space
            cout<<"*";
        }
      //increasing space by 1 after each row
        spc++;
      //decreasing star by 2 after each row
        str=str-2;
      //move to next line
        cout<<"\n";
    }
    return 0;
}
