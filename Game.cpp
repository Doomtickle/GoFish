//
// Created by Daron Adkins on 12/9/16.
//

#include "Dice.h"
#include "Points.h"
#include "Game.h"


int Game::playGame(int itotal) { // function playgame definition, passes itotal variable

    Dice dice;
    Points points;
// the playgame function calls methods from other functions to simulate game play
    int iDiceValue;

    dice.setDiceValue();
    iDiceValue = dice.getDiceValue();//using the getter method from dice
    itotal = itotal + points.calculatePoints(iDiceValue, itotal);
    // variable itotal is assigned to itself plus object of calculatePoints function;
    // when object of calculatePoints function is called, the die value is assigned to the points system in the case switch
    // calculatePoints function passes value of die roll; will return the itotal points earned in that round of game play
    // itotal is is now assigned to itself to the itotal value returned from the calculatePoints function


    cout << "You earned:" << itotal << " points in that round."
         << endl; // displays isolated points earned in each round of game play

    return itotal;// return variable itotal

}// end of function
