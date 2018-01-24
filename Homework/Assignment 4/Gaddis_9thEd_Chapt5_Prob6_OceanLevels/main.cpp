/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will display a table showing the number of millimeters the oceans will have risen
 * each year for the next 25 years if the ocean continues rising at a rate of 3.1 mm per year.
 *
 * Created on January 22, 2018, 11:48 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    float oceanRise = 3.1,      // mm the ocean rises each year.
            years,
            count = 1,
            total;
    
    // Title.
    cout << left << setw(15) << "Millimeters" << "Years\n";
    
    // Create the chart.
    for (count >= 1 ; count <= 25 ; count++, years++)
    {
        total = years * oceanRise;
        
        cout << left << setw(15) << fixed << setprecision(2)
                << total << years << endl;
    }
    return 0;
}

