//
// Created by Daron Adkins on 12/9/16.
//

#ifndef GOFISH_POINTS_H
#define GOFISH_POINTS_H


#include<iostream> // for cout, cin
#include "Dice.h"// include Dice header file

using namespace std; // for cout,cin

class Points{ // Points class declaration

public: // public member variables
    int iDiceValue; // variable that holds value of dice; data type int
    int total; // variable that holds total points earned in game round; data type int

    int getpoints(int iDiceValue){ // getPoints function to assign rolled number with points earned and item caught while fishing; passes iDiceValue
        switch(iDiceValue){ // switch case declaration; cases 1-6 ( values of possible die rolls)

            case 1: // when 1 is rolled
                cout<<"\nYou rolled "<<iDiceValue<<" \n"<<endl; // displays to user what number has been rolled
                cout<<"Huge Fish \n"; // displays what the user caught while fishing

                total=0+20; // total is incremented by 20


                break; // break
            case 2:// when 2 is rolled
                cout<<"\nYou rolled "<<iDiceValue<<" \n"<<endl;// displays to user what number has been rolled
                cout<<"Old shoe \n";// displays what the user caught while fishing

                total=0+5;// total is incremented by 5

                break; // break
            case 3: // when 3 is rolled
                cout<<"\nYou rolled "<<iDiceValue<<" \n"<<endl; // displays to user what number has been rolled
                cout<<"Little Fish\n";// displays what the user caught while fishing

                total=0+10; // total is incremented by 10

                break; // break
            case 4:// when the user rolls 4
                cout<<"\nYou rolled "<<iDiceValue<<"\n"<<endl;// displays to user what number has been rolled
                cout<<"Small prawn\n";// displays what the user caught while fishing

                total=0+7;// total is incremented by 7

                break;// break

            case 5:// when the user rolls 5
                cout<<"\nYou rolled "<<iDiceValue<<"\n"<<endl; // displays to user what number has been rolled
                cout<<"Shark\n";// displays what the user caught while fishing

                total=0+40;// total is incremented by 40

                break; // break
            case 6:// when 6 is rolled
                cout<<"\nYou rolled "<<iDiceValue<< "\n"<<endl;// displays to user what number has been rolled
                cout<<"Huge Catfish\n";// displays what the user caught while fishing

                total=0+30;// total is incremented by 30

                break;// break
        }
        return total;// return total from number rolled

    }

    int getPoints() { // accessor function to get points earned from 1 round of the game
        return total;
    }// end of function


};// end of class

#endif //GOFISH_POINTS_H
