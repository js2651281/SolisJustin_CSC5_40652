/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will calculate the military budget as a percentage of the federal budget.
 *
 * Created on January 11, 2018, 9:01 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    // Define variables.
    float milBdgt = 639.1E9f,           // Military budget = 639.1 billion
            fedBdgt = 4.094E12f,        // Federal budget = 4.094 trillion
            percentage;                 // Military budget as a percentage of the federal budget
    
    // Calculate.
    percentage = (milBdgt / fedBdgt) * 100;     // Calculates how much % the military budget is.
    
    // Display information.
    cout << "The military budget is " << setprecision(4) << percentage << "% of the total federal budget.";

    return 0;
}

