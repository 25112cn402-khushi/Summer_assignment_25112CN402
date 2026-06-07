#include <iostream>
using namespace std;
//intoducing function named factorial having argument num
int factorial(int num){
  //initialising fact as equal to 1 for output and multiplication
  //intilising i for loop iteration
    int fact=1,i;
  //loop till num for factorial
    for(i=1;i<=num;i++){
      //factorail...
        fact=fact*i;
    }
  //output of factorial
    cout<<"factorial of "<<num<<" is:";
  //back to main function
    return fact;
}
int main(){
  //initialsing number as num
    int num;
  //input of number
    cout<<"ENTER NUMBER:";
    cin>>num;

  //calling function
    cout<<factorial(num);
}
