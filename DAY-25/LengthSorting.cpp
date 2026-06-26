#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
   //initialising frequency  string
   int n;
   cout<<"Enter the number of names:";
   cin>>n;

   string names[n]; 

//input for names
   for(int i=0;i<n-1;i++){
    cout<<"ENTER STRING:";
    cin>>names[i];
}
//bubble sort in string
//loop for checking each name length
    for(int i=0;i<=n-1;i++){

        //loop will work for each word
        for(int j=i+1;j<n;j++){

            //checking the larger word length 
            if(names[i].length()>names[j].length()){

                //interchanging the word when condition get true
                string temp=names[i];
                names[i]=names[j];
                names[j]=temp;
            }
        }
    }

//printing in length order
    for(int i=0;i<n;i++){
        cout<<names[i]<<"  ";
    }
    return 0;
}
