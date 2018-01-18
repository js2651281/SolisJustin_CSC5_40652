/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user to enter the number of books purchased this month.
 * Then it will display the number of points awarded.
 *
 * Created on January 17, 2018, 9:01 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    int books;      // The amount of books the user purchased.
    
    // Ask the user to enter the # of books purchased this month.
    cout << "How many books did you purchase this month? ";
    cin >> books;
    
    // Figure out how many points are awarded, and display the results.
    if(books == 0)
        cout << "You earned 0 points.";
    if(books == 1)
        cout << "You earned 5 points.";
    if(books == 2)
        cout << "You earned 15 points.";
    if(books == 3)
        cout << "You earned 30 points.";
    if (books >= 4)
        cout << "You earned 50 points.";
    if (books < 0)
        cout << "Sorry, please enter a number greater than or equal to 0.";
    return 0;
}