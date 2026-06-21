#include <iostream>
#include <string>
using namespace std;

int main() {
  //initialise length 
    int length = 0;
  //initialising string
    string strng;

  //input for string
    cout << "ENTER STRING: ";
    getline(cin,strng);
  //moving index 
    int index =0;
  //loop will run until its null  character
    while (strng[index] != '\0' ) {
            length++;
            index++;
    }
  
   //printing length
    cout << length <<" is the length of "<<strng;
    

    return 0;
}
