/*
 * Go Fish! 2016 by Daron Adkins
 * Project 6 - Chapter 7, Programming Challenge 18
 * Last updated: 12/9/16
 */

#ifndef GOFISH_POINTS_H
#define GOFISH_POINTS_H


#include<iostream> // for cout, cin
#include "Dice.h"// include Dice header file

using namespace std; // for cout,cin

class Points { // Points class declaration

public: // public member variables
    int calculatePoints(int iDiceValue, int iTotal);
};// end of class

#endif //GOFISH_POINTS_H
