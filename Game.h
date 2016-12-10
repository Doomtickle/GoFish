/*
 * Go Fish! 2016 by Daron Adkins
 * Project 6 - Chapter 7, Programming Challenge 18
 * Last updated: 12/9/16
 */

#include "Points.h" // include Points header file
#include<iostream> // for cout,cin
using namespace std;// for cout,cin

class Game : public Points { // Game class declaration; extended from Points class

// private member objects
private:
    Dice dice; // dice is an object of the dice class
    Points points; //points is an object of the points class

public: // public member functions
    int playGame(int);

};// end of class
