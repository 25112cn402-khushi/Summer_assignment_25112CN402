#include <iostream>
#include<string>
using namespace std;
 int main(){
    //initialisisng length and string 
    int length;
    string strng;

   //input for string
    cout<<"ENTER STRING:";
    getline(cin,strng);

   //length of string by string function
    length=strng.length();

   //loop for length of string
    for(int i=0;i<length;i++){
        //for checking alphabet
        if(strng[i]>'a' && strng[i]<'z'){
            //making it larger string by ASCII number
            strng[i]=strng[i]-32;
        }
    
    }
    //print the string
    cout<<strng<<" changed";
    return 0;
 }
