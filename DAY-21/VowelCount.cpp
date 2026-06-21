#include <iostream>
#include <string>
using namespace std;

int main(){
    //initialising required variables
    int length,vowelcount=0,constcount=0;
    string strng;

    //enter string 
    cout<<"Enter string:";
    getline(cin,strng);

   //length of string by length function
    length=strng.length();
    for(int i=0;i<length;i++){

        //vowel count by checking aeiou 
        if(strng[i]=='a'||strng[i]=='o'||strng[i]=='i'||strng[i]=='u'||strng[i]=='e'||strng[i]=='A'|| strng[i]=='E'||strng[i]=='I'||strng[i]=='O'||strng[i]=='U'){
            //counting vowelcount
            vowelcount++;

        }
        else{
            //counting constcount          
            constcount++;
        }    

    }
    //printing counstonents count and vowel count
    cout<<constcount<<" is number of constonents "<<"\n";
    cout<<vowelcount<<" is number of vowels";
    return 0;


}
