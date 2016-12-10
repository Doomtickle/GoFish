/*
 * Go Fish! 2016 by Daron Adkins
 * Project 6 - Chapter 7, Programming Challenge 18
 * Last updated: 12/9/16
 */

#ifndef GOFISH_DICE_H
#define GOFISH_DICE_H

#include<time.h> // for random function
#include <stdlib.h>// for random function


struct DiceStruct{
   int value;
//my structure for the project requirements
};

class Dice // Dice class declaration
{

private:
    DiceStruct DiceValue;

public: // public member functions
    int rollDice();

    int getDiceValue(){
        return DiceValue.value;
    }

    void setDiceValue(){
       DiceValue.value = rollDice();
    }

}; // end of class declaration



#endif // end of header file

