#include <iostream>
#include "Points.h"

using namespace std;

int Points::calculatePoints(int iDiceValue,
                            int total) { // getPoints function to assign rolled number with points earned and item caught while fishing; passes iDiceValue
    switch (iDiceValue) { // switch case declaration; cases 1-6 ( values of possible die rolls)

        case 1: // when 1 is rolled
            cout << "\nYou rolled " << iDiceValue << " \n" << endl; // displays to user what number has been rolled
            cout << "Treasure Chest! \n"; // displays what the user caught while fishing

            total = 0 + 20; // total is incremented by 20

            break; // break
        case 2:// when 2 is rolled
            cout << "\nYou rolled " << iDiceValue << " \n" << endl;// displays to user what number has been rolled
            cout << "Old shoe...it's pretty smelly... \n";// displays what the user caught while fishing

            total = 0 + 5;// total is incremented by 5

            break; // break
        case 3: // when 3 is rolled
            cout << "\nYou rolled " << iDiceValue << " \n" << endl; // displays to user what number has been rolled
            cout << "Maybe a minnow? I don't know...It's tiny, though.\n";// displays what the user caught while fishing

            total = 0 + 10; // total is incremented by 10

            break; // break
        case 4:// when the user rolls 4
            cout << "\nYou rolled " << iDiceValue << "\n" << endl;// displays to user what number has been rolled
            cout << "A Goldfish!\n";// displays what the user caught while fishing

            total = 0 + 7;// total is incremented by 7

            break;// break

        case 5:// when the user rolls 5
            cout << "\nYou rolled " << iDiceValue << "\n" << endl; // displays to user what number has been rolled
            cout << "Huge Catfish!!\n";// displays what the user caught while fishing

            total = 0 + 40;// total is incremented by 40

            break; // break
        case 6:// when 6 is rolled
            cout << "\nYou rolled " << iDiceValue << "\n" << endl;// displays to user what number has been rolled
            cout << "Moby Dick!\n";// displays what the user caught while fishing

            total = 0 + 30;// total is incremented by 30

            break;// break
    }
    return total;// return total from number rolled

}
