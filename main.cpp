#include<iostream>
#include "Points.h" // include header file
#include"Game.h" // include header file

using namespace std; // for cout, cin
int total; // variable total; data type int

int main() // main function
{
    string choice; // variable choice; data type int; holds user's choice to continue game play
    int total; // variable mytotal; data type int; initialized to 0
    int total1 = 0; //variable total1; data type int; initialized to 0
    bool play; // variable play; data type bool

    Game game; // Game object game declared
    cout << "Welcome to Go Fish 2.0!" << endl; // welcome message
    cout << "Would you like to play?" << endl; // Prompts user to play
    cout << "1 to play, 0 to exit:" << endl; // Provides user with input choices
    cin >> choice; // user enters game play choice

    if (choice == "1") // while user chooses to play game
        play = true; // play boolean is set to true
    else if (choice == "0") // while user chooses to end game
        play = false; // play boolean is false
    while ((choice != "0") && (choice != "1")) { // while user entry is not valid
// display correct input choices again
        cout
                << "You entered invalid data. Please enter the numerical value 1 if you want to play again or 0 if you dont."
                << endl;
        cin >> choice; // hopefully user enters valid input

        if (choice == "1") { // if user chooses proper input after improper input
            play = true;// play boolean is set to true
            break;// break
        }
    }


    total = 0; // variable total is initialized to 0
    while (play) { // while play boolean is set to true; user wants to play game

        total1 += game.playGame(total); // total1 variable keeps a running total of the game
//game.playgame(total) uses the game object to call the playgame function that passes the variable total
// when game.playgame(total) is called this funciton essentially mobilizes game play of die rolling and point accumulation
//each time this function is called (as many times as user wants to play game), the running total is incremented

        cout << "Do you want to play again? (0 for no, 1 for yes)" << endl;// asks user if they want to play again
        cin >> choice;// user enters choice

        if (choice == "1") // if user enters 1
        {
            play = true; // play is assigned to true
        } else if (choice == "0") // if user enters 0
        {
            play = false; // play is assigned to false
        }

        while ((choice != "0") && (choice != "1")) { // while user entry is not valid
// display correct inpout choices again
            cout
                    << "You entered invalid data. Please enter the numerical value 1 if you want to play again or 0 if you dont."
                    << endl;
            cin >> choice; // hopefully user enters valid input

            if (choice == "1") { // if user chooses proper input after improper input
                play = true;// play boolean is set to true
                break;// break
            }
        }

    }

    if (play == false)// if play is false (user chose not to play)
    {
        cout << "My Total game points are " << total1 << endl; // displays user's total points from whole game
        if (total1 > 100) // if game total greater than 100
            cout << "Awesome! You're a great fisher!" << endl; // congratulate user
        if (total1 < 100)// if game total is less than 100
            cout << "Good job, but play again so you can fish some more." << endl;// chastise user

    }
    return 0;// end main function
}