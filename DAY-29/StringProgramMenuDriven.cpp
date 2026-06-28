#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void lengthString() {
    string str;
    cout << "ENTER STRING: ";
    cin.ignore();
    getline(cin, str);

    cout << "LENGTH OF STRING = " << str.length() << endl;
}

void reverseString() {
    string str;
    cout << "ENTER STRING: ";
    cin.ignore();
    getline(cin, str);

    reverse(str.begin(), str.end());

    cout << "REVERSED STRING = " << str << endl;
}

void palindrome() {
    string str, temp;

    cout << "ENTER STRING: ";
    cin.ignore();
    getline(cin, str);

    temp = str;
    reverse(temp.begin(), temp.end());

    if (str == temp)
        cout << "STRING IS PALINDROME\n";
    else
        cout << "STRING IS NOT PALINDROME\n";
}

void countVowels() {
    string str;
    int vowels = 0, consonants = 0;

    cout << "ENTER STRING: ";
    cin.ignore();
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "VOWELS = " << vowels << endl;
    cout << "CONSONANTS = " << consonants << endl;
}

void compareStrings() {
    string str1, str2;

    cout << "ENTER FIRST STRING: ";
    cin.ignore();
    getline(cin, str1);

    cout << "ENTER SECOND STRING: ";
    getline(cin, str2);

    if (str1 == str2)
        cout << "BOTH STRINGS ARE EQUAL\n";
    else
        cout << "BOTH STRINGS ARE NOT EQUAL\n";
}

void concatenateStrings() {
    string str1, str2;

    cout << "ENTER FIRST STRING: ";
    cin.ignore();
    getline(cin, str1);

    cout << "ENTER SECOND STRING: ";
    getline(cin, str2);

    cout << "CONCATENATED STRING = " << str1 + str2 << endl;
}

void uppercase() {
    string str;

    cout << "ENTER STRING: ";
    cin.ignore();
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
        str[i] = toupper(str[i]);

    cout << "UPPERCASE STRING = " << str << endl;
}

void lowercase() {
    string str;

    cout << "ENTER STRING: ";
    cin.ignore();
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);

    cout << "LOWERCASE STRING = " << str << endl;
}

int main() {
    int choice;

    do {
        cout << "\n******** STRING MENU ********\n";
        cout << "1. Find Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Palindrome Check\n";
        cout << "4. Count Vowels & Consonants\n";
        cout << "5. Compare Two Strings\n";
        cout << "6. Concatenate Strings\n";
        cout << "7. Convert to Uppercase\n";
        cout << "8. Convert to Lowercase\n";
        cout << "9. Exit\n";

        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice) {
            case 1:
                lengthString();
                break;

            case 2:
                reverseString();
                break;

            case 3:
                palindrome();
                break;

            case 4:
                countVowels();
                break;

            case 5:
                compareStrings();
                break;

            case 6:
                concatenateStrings();
                break;

            case 7:
                uppercase();
                break;

            case 8:
                lowercase();
                break;

            case 9:
                cout << "THANK YOU!\n";
                break;

            default:
                cout << "INVALID CHOICE\n";
        }

    } while (choice != 9);

    return 0;
}
