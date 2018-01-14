/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will show how much a company should sell circuit boards for.
 *
 * Created on January 5, 2018, 10:47 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    double productionPrice = 14.95,         // How much it costs to produce the circuit board
            percent = .35,                  // How much percent profit the company wants to make.
            salePrice;                      // How much the company should sell the circuit boards to make a 35% profit.
    
    // Calculate how much the company should sell the circuit boards for.
    salePrice = (productionPrice * percent) + productionPrice;
    
    // Display how much the company should sell the circuit boards for.
    cout << "The company should sell the circuit boards for $" << salePrice 
            << " if they want to make a 35% profit.";
    
    return 0;
}

