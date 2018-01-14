/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will predict how much the East Coast division of a company will generate
 * if the company has $8.6 million in sales for the year.
 *
 * Created on January 5, 2018, 3:45 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    float eastCoastPercent = .58,      // East Coast sales division generates 58% of total sales.
            totalSales = 8.6E6,        // Total sales for the company are $8.6 million.
            totalEastCoast;            // Total sales the East Coast division is predicted to make.
    
    // Calculate 
    totalEastCoast = eastCoastPercent * totalSales;
    
    // Display the total $ the East Coast division will make.
    cout << "It is predicted that the East Coast division will make $" << totalEastCoast << " this year.";
    
    return 0;
}

