#include <iostream>
#include <string>
using namespace std;

int main() {
  //initialising required variables
    int length ,countword=0;
    string strng;

  //input of string
    cout << "ENTER STRING: ";
    getline(cin,strng);
    
  //lenfth of string by length function  
    length=strng.length();

  //loop for number of words
    for(int i=0;i<length;i++){
      //if there is space then there is words 
      //1 space equals to 2 words
        if(strng[i]==' '){
          //counting words
            countword++;
        }
        
    }
    
    //printing words
    cout<<"Number of word in sentence:"<<countword+1;
    

    return 0;
}
