#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
   //initialising frequency array string
   int n;
   cout<<"Enter the number of names:";
   cin>>n;
   string names[n]; 

//input for names
   for(int i=0;i<n;i++){
    cout<<"ENTER STRING:";
    cin>>names[i];
}
//bubble sort in string
//loop for checking each name
    for(int i=0;i<=n-1;i++){

        //loop will work for each letter in word
        for(int j=i+1;j<n;j++){

            //checking the larger character 
            if(names[i]>names[j]){

                //interchanging the word when condition get true
                string temp=names[i];
                names[i]=names[j];
                names[j]=temp;
            }
        }
    }

//printing in aplhabetical order
    for(int i=0;i<n;i++){
        cout<<names[i]<<"  ";
    }
    return 0;
}
