#include <iostream>
using namespace std;

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
        cout<<"\n14. EXIT!";
      
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
             cout<<"THANK YOU . Byee!\n";
             break;

        default:
            cout<<"Invalid Choice"<<endl;
        }

    }while(choice!=14);

    return 0;
}
