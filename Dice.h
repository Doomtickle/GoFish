/*
 * Go Fish! 2016 by Daron Adkins
 * Project 6 - Chapter 7, Programming Challenge 18
 * Last updated: 12/9/16
 */

#ifndef GOFISH_DICE_H
#define GOFISH_DICE_H

#include<time.h> // for random function
#include <stdlib.h>// for random function


class Dice // Dice class declaration

{

public: // public member functions
    int rollDice();

    int iDiceValue; // iDiceValue holds value after dice is rolled; data type int
    void setIDiceValue(int iDiceValue);

    int getIDiceValue() const;
}; // end of class declaration

#endif // end of header file

