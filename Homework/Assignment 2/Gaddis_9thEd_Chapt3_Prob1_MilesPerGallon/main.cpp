/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will calculate a car's gas milage.
 *
 * Created on January 12, 2018, 4:52 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define variables (use float just in case someone wants to put "174.8 miles")
    float gallons,      // The amount of gallons the car can hold.
            miles,      // The amount of miles the car can drive on a full tank.
            mpg;        // The miles per gallon the car gets.
    
    // Ask for the # of gallons the car can hold, and the # of miles it can be driven on a full tank.
    cout << "How many gallons can your car hold? ";
    cin >> gallons;
    cout << "How many miles can your car drive before running out of gas? ";
    cin >> miles;
    
    // Calculate gas milage.
    mpg = miles / gallons;
    
    // Display gas milage.
    cout << "Your car gets " << mpg << " miles per gallon.";
    
    return 0;
}

