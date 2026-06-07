#include <iostream>
using namespace std;
//introducing function prime with 1 argument 
int prime(int num){
  //intialising count and i 
    int count,i;
  //initial count equals to 0
    count=0;
  //loop for checking does the number  have more than 2 factors
    for(i=1;i<=num;i++){
      //factors checking
        if(num%i==0){
            count++;
        }
    }
  //if its prime it will have 2 factors 1 and itself
    if(count==2){
        cout<<num<<" is prime";
    }
      //otherwise the else statement work which means composite number
    else{
        cout<<num<<" is composite";
    }
  //back to main function
    return 0;
}
int main(){
  //initialising number
    int num;
//input number
    cout<<"ENTER NUMBER:";
    cin>>num;
//calling function
    prime(num);
    return 0;
}
