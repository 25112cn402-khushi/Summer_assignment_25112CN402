#include <iostream>
#include <string>
using namespace std;

int score = 0;

void startquiz() {
    int ans;

    cout << "\n******** QUIZ STARTED ********\n";

    //  askingvquestion 1
    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n";
    cout << "Enter Answer: ";
    cin >> ans;
  
   //checking answer
    if(ans == 2) {
        cout << "Correct!\n";
        score++;
    }
    else {
        cout << "Wrong! Correct Answer is Delhi.\n";
    }

    // asking question 2
    cout << "\n2. Which language is used for Object-Oriented Programming?\n";
    cout << "1. C\n2. HTML\n3. C++\n4. SQL\n";
    cout << "Enter Answer: ";
    cin >> ans;

  //checking answer
    if(ans == 3) {
        cout << "Correct!\n";
        score++;
    }
    else {
        cout << "Wrong! Correct Answer is C++.\n";
    }

    // asking question 3
    cout << "\n3. How many days are there in a leap year?\n";
    cout << "1. 365\n2. 366\n3. 364\n4. 360\n";
    cout << "Enter Answer: ";
    cin >> ans;

    if(ans == 2) {
        cout << "Correct!\n";
        score++;
    }
    else {
        cout << "Wrong! Correct Answer is 366.\n";
    }

    // asking question 4
    cout << "\n4. Which symbol is used for comments in C++ (single line)?\n";
    cout << "1. /* */\n2. //\n3. ##\n4. <!-- -->\n";
    cout << "Enter Answer: ";
    cin >> ans;

    if(ans == 2) {
        cout << "Correct!\n";
        score++;
    }
    else {
        cout << "Wrong! Correct Answer is //.\n";
    }

    // asking question 5
    cout << "\n5. Which planet is known as the Red Planet?\n";
    cout << "1. Earth\n2. Venus\n3. Mars\n4. Jupiter\n";
    cout << "Enter Answer: ";
    cin >> ans;

    if(ans == 3) {
        cout << "Correct!\n";
        score++;
    }
    else {
        cout << "Wrong! Correct Answer is Mars.\n";
    }

    cout << "\nQuiz Completed!\n";
}

//for displaying your score
void displayscore() {
    cout << "\nYour Score: " << score << " / 5\n";
}

//reset to your new score
void resetscore() {
    score = 0;
    cout << "\nScore Reset Successfully!\n";
}
//here the main function will call doifferent function with its use

int main() {
    int choice;

    do {
        cout << "\n******** QUIZ APPLICATION ********\n";
        cout << "1. Start Quiz\n";
        cout << "2. Display Score\n";
        cout << "3. Reset Score\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                score = 0;
                startquiz();
                break;

            case 2:
                displayscore();
                break;

            case 3:
                resetscore();
                break;

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}
