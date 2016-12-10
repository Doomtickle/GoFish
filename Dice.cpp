/*
 * Go Fish! 2016 by Daron Adkins
 * Project 6 - Chapter 7, Programming Challenge 18
 * Last updated: 12/9/16
 */
#include <cstdlib>
#include <time.h>
#include "Dice.h"
#include "Points.h"

int Dice::rollDice() { // rollDice function rolls the dice

    srand((unsigned int) time(NULL)); // seeds random number generator; initializes time to NULL

    int iDicevalue = rand() % 6 + 1; // iDiceValue integer is assigned to a random number 1 through 6

    return iDicevalue;
}

