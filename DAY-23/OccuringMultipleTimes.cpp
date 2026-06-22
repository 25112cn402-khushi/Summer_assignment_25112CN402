#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  //having array for 26 times which is frequency of each character in string
    vector<int> freq(26,0);
    string str;

  //input for string
    cout<<"enter string:";
    cin>>str;

  //counting frequency of each string charcter 
    for(char character:str){
        freq[character-'a']++;
    }
  //cheching which occurs most time
    for(char c:str){
      //checking which occurs more than 1 time
        if(freq[c-'a']>1){
            cout<<c<<" is occuring more than 1 time ";
            break;
        }
    }
    return 0;


}
