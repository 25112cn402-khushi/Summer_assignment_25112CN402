#include <iostream>
#include <string>
using namespace std;

int main() {
  //initialising required variables
    string strng,result ;

  //input for string
    cout << "ENTER STRING: ";
    getline(cin, strng);

  //length of string by length function
    int length = strng.length();

  //loop for string until length
    for(int i = 0; i < length; i++) {
      //finding space
        if(strng[i] != ' ') {
          //concatenation by removing space
            result+=strng[i];
        }
    }

    
   //printing result 
    cout << "Removed space: " << result;

    return 0;
}
