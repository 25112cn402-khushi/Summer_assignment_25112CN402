#include <iostream>
#include <string>
using namespace std;

int main(){
   //initialising required strings
    string str;
   //substring is each word
    string substring="";
  //result is having maximum number of character in string
    string result="";
    int maxlen=0;

//input for string
    cout<<"ENTER STRING:";
    getline(cin,str);
    

//loop for entire string
    for(int i=0;i<=str.length();i++){

      //it will end when 1 word is completed
        if(i==str.length()|| str[i]==' '){

          //we eill check the length of substring 
            if(maxlen<substring.length()){

               //it will suppose to have largest word
                maxlen=substring.length();

               //it will have largest string
                result=substring;
            }
        //after each word substring become empty string for checking further
        substring="";}

      //when thw loop is working in a word
        else{
           //then character will add into substring 
            substring+=str[i];
        }
        
    }
  //print the largest word a sentence
    cout<<result<<" is longest word";
    return 0;
}   
