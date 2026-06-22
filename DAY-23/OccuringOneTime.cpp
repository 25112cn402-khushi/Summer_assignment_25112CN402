#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  //initially taking frequency of each character string as 0 in another array for 26 aplhabets
    vector<int> freq(26,0);
    string str;

  //input for string
    cout<<"enter string:";
    cin>>str;

  //loop for adding frequency in for each character 
    for(char character:str){
        freq[character-'a']++;
    }
  //now loop for checking frequency equals to 1
    for(char c:str){
        if(freq[c-'a']==1){
          //printing character and then break it because only  charcter occuring one time
            cout<<c<<" occuring first time " ;
            break;
        }
    }
    return 0;


}
