/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will display a table of speeds in kilometers per hour
 * with their values converted to mph. The table should display the speeds from 
 * 40 kph - 120 kph, in increments of 10 kph.
 *
 * Created on January 22, 2018, 11:37 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    float mph, kph = 40;
    int count;
    
    // Title.
    cout << left << setw(25) << "Kilometers per hour" << "Miles per hour\n";
    
    // Create the table.
    for (count = 1 ; count <= 9 ; count++, kph+=10)
    {
        mph = kph * 0.6214;
        
        cout << fixed << setprecision(3) << left << setw(25) << kph << mph << endl;
    }
    return 0;
}

