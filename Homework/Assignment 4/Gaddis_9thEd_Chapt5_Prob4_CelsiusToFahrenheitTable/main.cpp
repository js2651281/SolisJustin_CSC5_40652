/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will use a loop to display a table of Celsius temperatures from
 * 0 to 30 and their Fahrenheit equivalents.
 *
 * Created on January 22, 2018, 11:22 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    float fahrenheit, celsius = 0;
    int count;
    
    // Title.
    cout << left << setw(8) << "Celsius" << "Fahrenheit\n";
    
    // Use a loop to display a table of Celsius temperatures from 0 to 30 and their Fahrenheit equivalents.
    for (count = 1 ; count <= 30 ; count++, celsius++)
    {
        fahrenheit = ((1.8 * celsius) + 32);
        cout << left << setw(8) << celsius << fahrenheit << endl;
    }
    return 0;
}

