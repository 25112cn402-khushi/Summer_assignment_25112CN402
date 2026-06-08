#include <iostream>
using namespace std;
//introducing function palindrome having argument num
void palindrome(int num){
  //initislising r , sum,dupl;
    int r,sum=0,dupl;
  //initialising duplicate value of num to dupl
    dupl=num;
  //starting while loop till num is not equals to 0
    while(num!=0){
      //having remainder of a number
        r=num%10;
      //an method for reverse a number
        sum=(sum*10)+r;
      //reducing num valye by 10
        num=num/10;
    }
  //checking does the duplicate value equals to sum
    if(sum==dupl){
      //printing palindrome
        cout<<"PALINDROME";
    }
  //otherwise
    else{
      //printing not palindrome
        cout<<"NOT PALINDROME";
    }
}
int main(){
    int num;
  //input num
    cout<<"ENTER NUMBER:";
    cin>>num;

  //calling function
    palindrome(num);
    return 0;
}
