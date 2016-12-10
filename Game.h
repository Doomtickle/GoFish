#include "Points.h" // include Points header file
#include<iostream> // for cout,cin

using namespace std;// for cout,cin

class Game: public Points{ // Game class declaration; extended from Points class

// private member objects
private:


public: // public member functions

    Dice dice; // dice is an object of the dice class
    Points points; //points is an object of the points class
    int playGame(int);

};// end of class
