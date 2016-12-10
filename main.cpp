/*
 * Go Fish! 2016 by Daron Adkins
 * Project 6 - Chapter 7, Programming Challenge 18
 * Last updated: 12/9/16
 */

#include<iostream>
#include "Points.h" // include header file
#include"Game.h" // include header file

using namespace std; // for cout, cin
int total; // variable iTotal; data type int

void mainMenu(string &strChoice, bool &bPlay, Game &game);

void askToRepeatGame(Game &game, string &strChoice, int iTotal, int &iTotal1, bool &bPlay);

void displayExitMessage(int iTotal1);

int main() // main function
{
    Game game;
    string strChoice; // variable strChoice; data type int; holds user's strChoice to continue game bPlay
    int iTotal; // variable mytotal; data type int; initialized to 0
    int iTotal1 = 0; //variable iTotal1; data type int; initialized to 0
    bool bPlay; // variable bPlay; data type boolGame game;

    mainMenu(strChoice, bPlay, game);

    iTotal = 0; // variable iTotal is initialized to 0
    while (bPlay) { // while bPlay boolean is set to true; user wants to bPlay game

        askToRepeatGame(game, strChoice, iTotal, iTotal1, bPlay);

    }

    if (bPlay == false)// if bPlay is false (user chose not to bPlay)
    {
        displayExitMessage(iTotal1);

    }
    return 0;// end main function
}

void displayExitMessage(int iTotal1) {
    cout << "Your Total fishing points are " << iTotal1 << endl; // displays user's iTotal points from whole game
    if (iTotal1 > 100) // if game iTotal greater than 100
            cout << "Awesome! You're a great fisher!" << endl; // congratulate user
    if (iTotal1 < 100)// if game iTotal is less than 100
            cout << "Good job, but play again so you can fish some more." << endl;// chastise user

}

void askToRepeatGame(Game &game, string &strChoice, int iTotal, int &iTotal1, bool &bPlay) {
    iTotal1 += game.playGame(iTotal);
    // iTotal1 variable keeps a running iTotal of the game
    //game.playgame(iTotal) uses the game object to call the playgame
    // function that passes the variable iTotal when game.playgame(iTotal)
    // is called.
    // This function essentially mobilizes game bPlay of die rolling and point accumulation
    //each time this function is called (as many times as user wants to bPlay game), the
    // running iTotal is incremented

    cout << "Do you want to play again? (0 for no, 1 for yes)" << endl;// asks user if they want to bPlay again
    cin >> strChoice;// user enters strChoice

    if (strChoice == "1") // if user enters 1
        {
            bPlay = true; // bPlay is assigned to true
        } else if (strChoice == "0") // if user enters 0
        {
            bPlay = false; // bPlay is assigned to false
        }

    while ((strChoice != "0") && (strChoice != "1")) { // while user entry is not valid
// display correct inpout choices again
            cout
                    << "You entered invalid data. Please enter the numerical value 1 if you want to play again or 0 if you dont."
                    << endl;
            cin >> strChoice; // hopefully user enters valid input

            if (strChoice == "1") { // if user chooses proper input after improper input
                bPlay = true;// bPlay boolean is set to true
                break;// break
            }
        }
}

void mainMenu(string &strChoice, bool &bPlay, Game &game) {// Game object game declared
    cout << "Welcome to Go Fish 2016!" << endl; // welcome message
    cout << "Would you like to play?" << endl; // Prompts user to bPlay
    cout << "1 to play, 0 to exit:" << endl; // Provides user with input choices
    cin >> strChoice; // user enters game bPlay strChoice

    if (strChoice == "1") // while user chooses to bPlay game
        bPlay = true; // bPlay boolean is set to true
    else if (strChoice == "0") // while user chooses to end game
        bPlay = false; // bPlay boolean is false
    while ((strChoice != "0") && (strChoice != "1")) { // while user entry is not valid
// display correct input choices again
        cout
                << "You entered invalid data. Please enter the numerical value 1 if you want to play again or 0 if you dont."
                << endl;
        cin >> strChoice; // hopefully user enters valid input

        if (strChoice == "1") { // if user chooses proper input after improper input
            bPlay = true;// bPlay boolean is set to true
            break;// break
        }
    }
}