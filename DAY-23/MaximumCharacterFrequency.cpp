#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
   //making array frequency initialised by 0 for each character
    vector<int> freq(26,0);
    string str ;
    int max=0;
    char result;

   //input of string
    cout<<"enter string:";
    cin>>str;

//loop for counting frequency at each index of string character
    for(char character:str){
        freq[character-'a']++;
    }
//loop for maximum frequency 
    for(int i=0;i<26;i++){
      //max condition
        if(max<freq[i]){
            max=freq[i];
          //finding character
            result=i+97;

        }
        
    }
//printing maximum character
    cout<<result<<" is maximum occuring character";
    return 0;


}
