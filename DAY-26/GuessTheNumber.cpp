#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main(){
    //NUMBER SHOULD BE UNDER 100
    int upperlimit=100;

    //REUIRED VARIABLES
    int number,guess,numberofguess=0;
    
    //MAKING A RANDOM GENERATOR
    srand(time(NULL));
    
    //RANDOM NUMBER FORMED
    number=rand() % upperlimit;

   
    cout<<"NUMBER SHOULD BE BETWEEN 1 AND 100\n";
    //WE WILL USE DO WHILE IT WORK AT LEAST ONE TIME AND CHECK 
    do{
         cout<<"ENTER YOUR GUESS:";
         cin>>guess;

        //10 times gor guess the number
        if(numberofguess>9){
            cout<<"YOU LOOSE!\n";
            break;
        }
        //if we guessed number is higher then it will print lower number
        if(guess>number){
            cout<<"LOWER NUMBER\n";
            numberofguess++;
        }
        //if we guessed lower number than it will print higher number
        else if(guess<number){
            cout<<"HIGHER NUMBER\n";
            numberofguess++;

        }
        //otherwise you guessed the number
        else{
            cout<<"YOU GUESSED THE NUMBER\n";
            cout<<"YOU WIN\n";
        }

    }while(guess!=number);
    //loop will run until you find the number
    return 0;
}

