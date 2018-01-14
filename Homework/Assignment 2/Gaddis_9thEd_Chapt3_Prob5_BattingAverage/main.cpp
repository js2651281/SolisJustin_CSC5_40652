/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will find a baseball player's batting average up to 4 decimal places.
 * It will ask the user to enter the # of times a player was at bat, and the # of hits earned.
 *
 * Created on January 12, 2018, 5:37 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    float bat,            // Amount of times a player was up to bat.
            hit;        // Amount of hits a player earned.
    float average;      // Batting average.
    
    // Ask the user to enter the # of times a player was at bat, and the # of hits earned.
    cout << "How many times was the player up to bat? ";
    cin >> bat;
    cout << "How many hits did the player earn? ";
    cin >> hit;
    
    // Calculate the batting average.
    average = hit / bat;
    
    // Display the batting average.
    cout << fixed << setprecision(4)
            <<"The player's batting average was "
            << average
            << ".";
    
    return 0;
}

