//
// Created by Daron Adkins on 12/9/16.
//

#ifndef GOFISH_DICE_H
#define GOFISH_DICE_H

#include<time.h> // for random function
#include <stdlib.h>// for random function


using namespace std; // for cout, cin
class Dice // Dice class declaration

{

public: // public member functions
    int iDiceValue; // iDiceValue holds value after dice is rolled; data type int
    unsigned int rollDice(){ // rollDice function rolls the dice
        srand((unsigned int) time(NULL)); // seeds random number generator; initializes time to NULL
        int dicevalue = rand() %6 +1; // iDiceValue integer is assigned to a random number 1 through 6
        return dicevalue; // random number stored in dice value is returned
    }// end of rolldice function
}; // end of class declaration

#endif // end of header file

