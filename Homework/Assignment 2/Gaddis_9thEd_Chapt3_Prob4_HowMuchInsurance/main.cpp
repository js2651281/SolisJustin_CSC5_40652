/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user to enter the replacement cost of a building.
 * Then it will display the minimum amount of insurance (80%) that should be purchased for the property.
 *
 * Created on January 12, 2018, 5:30 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    float repCost,                      // Replacement cost of a building.
            minInsurance,               // Minimum amount of insurance that should be bought.
            minInsurancePercentage = .8;     // 80% of the amount it would cost to replace the building.
    
    // Ask the user to enter the replacement cost of a building.
    cout << "Enter the replacement cost of a building. ";
    cin >> repCost;
    
    // Calculate the minimum amount of insurance that should be bought.
    minInsurance = repCost * minInsurancePercentage;
    
    // Display the minimum amount of insurance that should be bought.
    cout << "The minimum amount of insurance that should be bought is $"
            << minInsurance
            << ".";
    
    
    return 0;
}

