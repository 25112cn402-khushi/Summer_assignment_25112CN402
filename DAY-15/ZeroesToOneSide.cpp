#include <iostream>
using namespace std;

void moveZeros(int arr[], int n) {
    int index = 0;
  //loop for making all number which is not 0 in front
    for (int i = 0; i < n; i++) {
        //conditin for number having not equal to 0
        if (arr[i] != 0) {
            //making numbers to front 
            arr[index] = arr[i];
            //increasing index
            index++;
        }
    }
  //loop for making array index  equals to 0 till size
    while (index < n) {
    arr[index] = 0;
    index++;
    }
}

int main() {
    int size;
    //input size
    cout << "ENTER LENGTH: ";
    cin >> size;
    int arr[50];
    //loop for enter numbers in array 
    for (int i = 0; i < size; i++) {
        cout << "ENTER NUMBERS IN ARRAY: ";
        cin >> arr[i];
    }
    //calling function
    moveZeros(arr, size);
   
    //printing array
    cout << "Array after moving zeros to end:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
