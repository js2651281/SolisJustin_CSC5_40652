/*
 * File:   main.cpp
 * Author: Justin Solis
 * This program will calculate and display the # of acres in a tract of land whose size is 869x360 feet.
 * Created on January 5, 2018, 4:40 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    float acre = 43450,         // Size of an acre.
            landWidth = 869,    // Width of the tract of land.
            landHeight = 360,   // Height of the tract of land.
            landTotal,          // Total area of the tract of land.
            landAcre;           // The amount of acres in the land.

    
    // Calculate the # of acres in a tract of land whose size is 869x360 feet.
    landTotal = landWidth * landHeight;
    landAcre = landTotal / acre;
    
    // Display the information.
    cout << "There are " << landAcre << " acres in a tract of land whose size is 869x360 feet.";
    
    return 0;
}

