#include <iostream>
using namespace std;
int main(){
  //initialising rows,i,j,k,spc,num,num2
    int rows,i,j,k,spc,num,num2;
  //input for rows
    cout<<"ENTER ROWS:";
    cin>>rows;
  //space equals to 3
    spc=3;
  //num for 1st half pyramid equals to 1
    num=1;
  //num2 for 2nd half pyramid equals to 0
    num2=0;

  //number of rows  loop
    for(i=1;i<=rows;i++){
      //taking prnt aS character equals to A
        char prnt= 'A';
      //loop for space in each row
        for(j=1;j<=spc;j++){
          //printing space
            cout<<" ";
        }
      //loop for 1st puramid
        for(k=1;k<=num;k++){
          //printing character
            cout<<prnt;
            prnt++;
        }
      //loop for 2nd pyramid
      //prnt2 is character having value in alphabets
        char prnt2=65+i-2;
        for(k=1;k<=num2;k++){
          //printing prnt2
            cout<<prnt2;
          //decreasing prnt2 by 1
            prnt2--;
        }

      //decreasing spc by 1 after each row
        spc--;
      //num is increased by 1 in each row
        num=num+1;
      //similarly num2
        num2++;
        //move to other line
        cout<<"\n";
    }
    return 0;
}
