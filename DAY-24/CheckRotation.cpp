#include <iostream>
#include <string>

using namespace std;
int main(){
    //INITIALISING 2 STRINGS 
    string str;
    string str2;

   //INPUT FOR STRING
    cout<<"ENTER STRING:";
    cin>>str;

   //INPUT FOR STRING
    cout<<"ENTER ROTATED STRING:";
    cin>>str2;

   //IF WE DOUBLE THE STRING THEN IT WILL HAVE ALL KIND OF ROTATION
    string concatenate=str+str;

   //IT SHOULD HAVE SAME LENGTH
    if(str.length()!=str2.length()){
        cout<<"BOTH  STRINGS ARE DIFFERENT";
        return 0;
    }
   //THE 2nd STRING SHOULD BE PRESENT IN CONCATENATE WHICH IS ROTATION
    if(concatenate.find(str2)){
        cout<<str2<<" is the rotation of "<<str;
    }
   //ELSE CONDITION
    else{
        cout<<str2<<" is not the rotation of "<<str;

    }
    return 0;
}
