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

 

void inputArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];
    }
}

void displayArray(int arr[], int size){
    cout<<"Array Elements: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void searchElement(int arr[], int size){
    int key;
    cout<<"Enter Element to Search: ";
    cin>>key;

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"Element Found at Position "<<i+1<<endl;
            return;
        }
    }

    cout<<"Element Not Found"<<endl;
}

void maximum(int arr[], int size){
    int max=arr[0];

    for(int i=1;i<size;i++){
        if(arr[i]>max)
            max=arr[i];
    }

    cout<<"Maximum Element = "<<max<<endl;
}

void minimum(int arr[], int size){
    int min=arr[0];

    for(int i=1;i<size;i++){
        if(arr[i]<min)
            min=arr[i];
    }

    cout<<"Minimum Element = "<<min<<endl;
}

void sumArray(int arr[], int size){
    int sum=0;

    for(int i=0;i<size;i++)
        sum+=arr[i];

    cout<<"Sum = "<<sum<<endl;
}

void average(int arr[], int size){
    int sum=0;

    for(int i=0;i<size;i++)
        sum+=arr[i];

    cout<<"Average = "<<(float)sum/size<<endl;
}

void reverseArray(int arr[], int size){
    int last=size-1;
    int p=arr[0];
    for(int i=0;i<size/2;i++){
        arr[i]=arr[last];
        last--;
    }
    cout<<"Reversed Array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";}
}
int leftrotate(int arr[], int size,int time){
    int i=0;
    int last=size-1;
    for(int j=0;j<time;j++){
        int p=arr[0];
        for(i=0;i<size;i++){
            arr[i]=arr[i+1];
        }
        arr[last]=p;

    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    
}
int rightrotate(int arr[], int size,int time){
    int i=0;
    int last=size-1;
    for(int j=0;j<time;j++){
        int p=arr[last];
        for(i=size-1;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=p;

    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}
void moveZeros(int arr[], int n) {
    int index = 0;


    for (int i = 0; i < n; i++) {
    
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }}
    while (index < n) {
    arr[index] = 0;
    index++;}
}
void updateElement(int arr[], int size){
    int pos,value;
    cout<<"Enter Position to Update: ";
    cin>>pos;

    if(pos>=1 && pos<=size){
        cout<<"Enter New Value: ";
        cin>>value;

        arr[pos-1]=value;

        cout<<"Element Updated Successfully"<<endl;
    }
    else{
        cout<<"Invalid Position"<<endl;
    }
}
void deleteElement(int arr[], int size){
    int pos;
    cout<<"Enter Position to Delete: ";
    cin>>pos;

    if(pos>=1 && pos<=size){

        for(int i=pos-1;i<size-1;i++){

            arr[i]=arr[i+1];
        }

        size--;

        cout<<"Element Deleted Successfully"<<endl;
    }
    else{

        cout<<"Invalid Position"<<endl;
    }
}

int main(){

    int arr[100];
    int size;
    int choice;

    cout<<"Enter Size of Array: ";
    cin>>size;

    do{

        cout<<"\n******** ARRAY MENU ********";

        cout<<"\n1.  Input Array";
        cout<<"\n2.  Display Array";
        cout<<"\n3.  Search Element";
        cout<<"\n4.  Maximum Element";
        cout<<"\n5.  Minimum Element";
        cout<<"\n6.  Sum of Elements";
        cout<<"\n7.  Average";
        cout<<"\n8.  Reverse Array";
        cout<<"\n9.  Left Rotate Array";
        cout<<"\n10. Right Rotate Array";
        cout<<"\n11. Update Array";
        cout<<"\n12. Delete from Array";
        cout<<"\n13. Move Zeros To End";


        cout << "\n******** STRING MENU ********\n";
        cout << "14. Find Length\n";
        cout << "15. Reverse String\n";
        cout << "16. Palindrome Check\n";
        cout << "17. Count Vowels & Consonants\n";
        cout << "18. Compare Two Strings\n";
        cout << "19. Concatenate Strings\n";
        cout << "20. Convert to Uppercase\n";
        cout << "21. Convert to Lowercase\n";

        cout<<"\n22. EXIT!";
      
        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice){

        case 1:
            inputArray(arr,size);
            break;

        case 2:
            displayArray(arr,size);
            break;

        case 3:
            searchElement(arr,size);
            break;

        case 4:
            maximum(arr,size);
            break;

        case 5:
            minimum(arr,size);
            break;

        case 6:
            sumArray(arr,size);
            break;

        case 7:
            average(arr,size);
            break;

        case 8:
            reverseArray(arr,size);
            break;

        case 9:
            int time;
            cout<<"ENTER TIMES OF ROTATION:";
            cin>>time;

            leftrotate(arr,size,time);
            break;

        case 10:
            int time;
            cout<<"ENTER TIMES OF ROTATION:";
            cin>>time;
            rightrotate(arr,size,time);
            break;

        case 11:
            updateElement(arr, size);
            break;

        case 12:
           deleteElement(arr,size) ;
           break;

        case 13:
            moveZeros(arr,size);
            break;

        case 14:
            lengthString();
            break;

        case 15:
            reverseString();
            break;

        case 16:
            palindrome();
            break;            
            
        case 17:
            countVowels();
            break;

        case 18:
            compareStrings();
            break;

        case 19:
            concatenateStrings();
            break;

        case 20:
            uppercase();
            break;
        
        case 21:
            lowercase();
            break;
        
        case 22:
            cout<<"THANK YOU . Byee!\n";
            break;

        default:
            cout<<"Invalid Choice"<<endl;
        }

    }while(choice!=22);

    return 0;
}
