#include <iostream>
using namespace std;

int main() {
  //initialising array and size
    int arr[50], size;
//entering size
    cout << "Enter size: ";
    cin >> size;
//entering numbers in array
    for(int i=0; i<size; i++) {
        cout<<"ENTER NUMBER IN ARRAY:";
        cin >> arr[i];
    }
 //LOOP RUN TILL N 
    for(int j=0; j<size; j++) {
      //RUN TILL SIZE FOR  CHECKING WHICH NUMNER IS TWO TIMES PRESENT
        for(int i=j+1; i<size; i++) {
          //CHECKING
            if(arr[j] == arr[i]) {
               //LOOP FOR HAVING ONLY 1 TIME NUMBER WHICH IS PRESENT TWICE
                for(int k=i; k<size-1; k++) {
                    arr[k] = arr[k+1];
                }
    //REDUCING SIZE OF ARRAY
                size--;
                i--;
            }
        }
    }
//PRINTING ARRAT
    cout << "Array after removing duplicates:\n";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
