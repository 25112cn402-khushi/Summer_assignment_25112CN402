#include <iostream>
using namespace std;
int main(){
  //initialising rows i j k spc num prnt num2 prnt2
    int rows,i,j,k,spc,num,prnt,num2,prnt2;
  //input of rows
    cout<<"ENTER ROWS:";
    cin>>rows;
  //space is eual to 3 for 5 rows
    spc=3;
  //num until which the loop will  print in half triangle is equal to 1
    num=1;
  //num2 which the loop will  print in second half triangle is equal to 0
    num2=0;

  //number of rows 
    for(i=1;i<=rows;i++){
      //prnt is equal to 1 which will print in 1st half of trinagle
        prnt=1;
      //loop for space
        for(j=1;j<=spc;j++){
          //loop for number of space
            cout<<" ";
        }
      //loop for num printing half triangle 
        for(k=1;k<=num;k++){
          //this will print the prnt num 
            cout<<prnt;
          //prnt will increase in every column of each row and start with one
            prnt++;
        }
      //prnt2 is equal to i-1 so print 2nd trinagle to amke pyramid
        prnt2=i-1;
      //loop for other half triangle
        for(k=1;k<=num2;k++){
          //printing prnt2 value
            cout<<prnt2;
          //increasing prnt2 by 1 at every column of each row
            prnt2++;
        }
        //decreasing spc by 1
        spc--;
      // increasing num by 1 in 1st half triangle
        num=num+1;
      //increasing num2 by 1 in 2nd hald triangle
        num2++;
       //enter in other row 
        cout<<"\n";
    }
    return 0;
}
