#include <iostream>
using namespace std;
int main() {
  //initialising array1 and array2
    int arr1[50], arr2[50];
    int size1, size2;
//enter size of 1st array
    cout << "ENTER SIZE1: ";
    cin >> size1;
//enter numbers in 1st array
    for(int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
//enter size of 2nd array
    cout << "ENTER SIZE2: ";
    cin >> size2;
//enter numbers in array 2
    for(int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
//let take k be equal to size 1
    int k = size1;
 //loop will run till size2 of array 2 to chcek weather the number present in array 1
    for(int i = 0; i < size2; i++) {
      //initialising bool false after every iteration of array 2
        bool found = false;
       //for checking numbers present in array 1 for checking
        for(int j = 0; j < size1; j++) {
          //checking
            if(arr2[i] == arr1[j]) {
              //if true make found = true
                found = true;
              //and break the loop
                break;
            }
        }
     //if number is not present in array 1 than 
        if(!found) {
          //adding number in array 1
            arr1[k] = arr2[i];
          //increasing value of k which is storing size of array 1
            k++;
        }
    }

    cout << "Union: ";
 //printing union
    for(int i = 0; i < k; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}
