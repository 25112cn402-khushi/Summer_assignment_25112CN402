#include <iostream>
#include <string>
using namespace std;

int main() {
  //initialising required variables
    int length ,frequency=0;
    string strng;
    char character;

  //input of string
    cout << "ENTER STRING: ";
    getline(cin,strng);

  //input of charcter which is to be searched
    cout<<"ENTER CHARACTER:";
    cin>>character;

  //length of string by length function
    length=strng.length();
  //loop for finding character in string
    for(int i=0;i<length;i++){
      //checking
        if(strng[i]==character){
          //frequency increases
            frequency++;}
        
    }
    
    //printing frequency 
    cout<<"FREQUENCY OF "<<character<<" is:"<<frequency;
    

    return 0;
}
