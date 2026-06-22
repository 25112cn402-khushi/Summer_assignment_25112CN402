#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  //having 2 frequency arary for both string
    vector<int> freq1(26, 0), freq2(26, 0);
    string str1, str2;

  //input of 1st string
    cout << "Enter 1st string: ";
    cin >> str1;
  //input of 2nd string
    cout << "Enter 2nd string: ";
    cin >> str2;

  //if length is different of both string then its not anagram
    if (str1.length() != str2.length()) {
        cout << "Its not anagram";
        return 0;
    }
  
//loop for frequency of each character in string 1
    for (char c : str1) {
        freq1[c - 'a']++;
    }
//loop for frequency of each character in string 2
    for (char c : str2) {
        freq2[c - 'a']++;
    }
//taking bool for checking
    bool check = true;

  //loop for checking frequency of each character in string
    for (int i = 0; i < 26; i++) {
      //checking if its false then break tha loop and chcek become false
        if (freq1[i] != freq2[i]) {
            check = false;
            break;
        }
    }
 //check condition
    if (check) {
        cout << "Its anagram";
      //else condition
    } else {
        cout << "Its not anagram";
    }

    return 0;
}
