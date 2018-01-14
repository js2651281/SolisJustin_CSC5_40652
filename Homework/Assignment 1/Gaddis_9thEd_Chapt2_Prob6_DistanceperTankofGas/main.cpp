/* 
 * File:   main.cpp
 * Author: Justin
 * This program will calculate and display the distance a car can travel on one tank of gas when driven in
 * town and on the highway.
 * Created on January 5, 2018, 4:29 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    float tank = 20,               // Gallons the gas tank can hold.
            mpgTown = 23.5,         // Miles per gallon in town.
            totalMpgTown,           // Distance the car can travel on 1 tank in town.
            mpgHighway = 28.9,      // Miles per gallon on the highway.
            totalMpgHighway;        // Distance the car can travel on 1 tank on the highway.
    
    // Calculate the distance the car can travel on 1 tank of gas in town and on the highway.
    totalMpgTown = mpgTown * tank;
    totalMpgHighway = mpgHighway * tank;
    
    // Display the results.
    cout << "If a car can hold " << tank << " gallons in it's gas tank, and it has " << mpgTown << " miles per gallon in town, and "
            << mpgHighway << " miles per gallon on the highway. Then it's total miles per gallon on one tank would be "
            << totalMpgTown << " in town, and " << totalMpgHighway << " on the highway.";
    
    return 0;
}

