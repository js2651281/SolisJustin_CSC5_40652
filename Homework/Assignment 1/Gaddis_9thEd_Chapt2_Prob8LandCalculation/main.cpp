/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will compute and display the number of square feet and square meters in 1/2 acre of land.
 * Created on January 5, 2018, 4:53 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    
    // Define the variables.
    float acre = 43560,                // Square feet of an acre.
            squareMeters= 10.7639,      // Square meters in an acre.
            halfAcre = (.5 * acre),      // Square feet in 1/2 an acre.
            halfAcreSqrMeters;           // Square meters in 1/2 an acre.
    
    // Calculate square meters in 1/2 an acre.
    halfAcreSqrMeters = halfAcre / squareMeters;
    
    // Display the result.
    cout << "Half an acre in square feet = " << halfAcre << ". Half an acre in square meters = " << halfAcreSqrMeters << ".";
    
    return 0;
}

