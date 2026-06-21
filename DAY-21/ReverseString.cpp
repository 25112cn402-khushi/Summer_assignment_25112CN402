#include <iostream>
#include <string>
using namespace std;

int main() {
   //initialising length and string
    int length ;
    string strng;

  //input for string
    cout << "ENTER STRING: ";
    getline(cin,strng);
    cout<<"ORIGINAL STRING:"<<strng<<"\n";

 //length for string by function
    length=strng.length();
 //having index of last string
    int end=strng.length()-1;
 //making characters for exchanging
    char characters;

//loop will run for half of length of string
    for(int i=0;i<length/2;i++){

       //all starting half array will stored in character at every iteration
        characters=strng[i];

      //exchanging 1st half by last index element respectively
        strng[i]=strng[end];

      //end index element will store the 1st character
        strng[end]=characters;

      //decresasing end by 1 at every iteration
        end--;
    }
    
  //printing reverse string    
    cout<<"REVERSE STRING:"<<strng;
    

    return 0;
}
