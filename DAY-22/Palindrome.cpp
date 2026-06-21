#include <iostream>
#include <string>
using namespace std;

int main() {
  //initialising required variables
    int length ;
    string strng;
    bool check=true;

  //input of string
    cout << "ENTER STRING: ";
    getline(cin,strng);
    

  //length of string by length function
    length=strng.length();
  //taking end as last term of string
    int end=length-1;
  
  //loop for checking the string 1st half to 2nd half
    for(int i=0;i<length/2;i++){
      //if the 1st half any term is not equal to 2nd half of any term
        if(strng[i]!=strng[end]){
          //then take check equals to false
            check=false;
          //and break the loop
            break;
        }
      //moving end elements of string 
        end--;
    }//if its true then its palindrome
    if(check){
        cout<<"ITS PALINDROME";
    }//then its not palindrome
    else{
        cout<<"ITS NOT PALINDROME";
    }

    

    return 0;
}
