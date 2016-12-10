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
    static int iTotal; // variable that holds iTotal points earned in game round; data type int
    int calculatePoints(int iDiceValue, int iTotal);
};// end of class

#endif //GOFISH_POINTS_H
