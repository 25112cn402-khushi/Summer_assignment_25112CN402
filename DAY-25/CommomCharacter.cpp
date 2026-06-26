#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
   //initialising frequency array for each character of string
    vector <int> frequency(26,0);
    string str;
    string result;

//input for string
    cout<<"ENTER STRING:";
    cin>>str;

//checking frequency of each character in string
    for(char c:str){
        frequency[c-'a']++;
    }
//loop for array of frequency
    for(int i=0;i<26;i++){

     //if frequency is more than 1 then we are concatenating the chaarcater in result string
        if(frequency[i]>1){

            result=i+97;
            //printing character
            cout<<result<<" is occuring more than "<<frequency[i]<<" times\n";
            
        }
    }

    return 0;
}
