/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will calculate the miles per gallon a car gets.
 * Created on January 5, 2018, 4:22 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    int car = 16,            // The # of gallons a car's gas tank can hold.
            travel = 312,       // The distance (in miles) a car can travel before refueling.
            mpg;                // The miles per gallon the car gets.
    
    // Calculate the miles per gallon the car gets.
    mpg = travel / car;
    
    // Display the result on the screen.
    cout << "If a car travels " << travel << " miles, and holds " << car << " gallons in it's tank."
            << " It can potentially get " << mpg << " miles per gallon.";
    return 0;
}

