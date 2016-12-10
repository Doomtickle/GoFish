#include "Dice.h"
#include "Points.h"
#include "Game.h"


int Game::playGame(int total) { // function playgame definition, passes total variable

    Dice dice;
    Points points;
// the playgame function calls methods from other functions to simulate game play
    int choice, points_to_add; // variables choice and points to add are declared; data type int
    int iDiceValue;

    points_to_add = 0; // points to add is initialized to 0
    iDiceValue = dice.rollDice(); // iDiceValue variable is assigned to rollDice function; function is called to roll dice; returns dice value
    total = total + points.calculatePoints(
            iDiceValue, total); // variable total is assigned to itself plus object of calculatePoints function;
    // when object of calculatePoints function is called, the die value is assigned to the points system in the case switch
    // calculatePoints function passes value of die roll; will return the total points earned in that round of game play
    // total is is now assigned to itself to the total value returned from the calculatePoints function


    cout << "You earned:" << total << " points in that round."
         << endl; // displays isolated points earned in each round of game play

    return total;// return variable total

}// end of function
