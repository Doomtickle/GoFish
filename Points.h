//
// Created by Daron Adkins on 12/9/16.
//

#ifndef GOFISH_POINTS_H
#define GOFISH_POINTS_H


#include<iostream> // for cout, cin
#include "Dice.h"// include Dice header file

using namespace std; // for cout,cin

class Points { // Points class declaration

public: // public member variables
    int iDiceValue; // variable that holds value of dice; data type int
    static int total; // variable that holds total points earned in game round; data type int
    int calculatePoints(int iDiceValue, int total);


    int getPoints() { // accessor function to get points earned from 1 round of the game
        return total;
    }// end of function


};// end of class

#endif //GOFISH_POINTS_H
