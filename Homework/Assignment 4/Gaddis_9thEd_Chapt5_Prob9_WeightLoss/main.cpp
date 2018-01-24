/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user to enter their starting weight, then create
 * and display a table showing what their expected weight will be
 * at the end of each month for the next 6 months if they stay on a 500 calorie cut diet.
 *
 * Created on January 23, 2018, 12:50 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    float weight;
    int count = 1, month;
    
    // Ask for weight.
    cout << "If a moderately active person cut their calorie intake by 500 calories a day,"
            << " they can lose about 4 lbs per month.\n";
    cout << "This program will calculate how much weight you will lose if you were to try this diet.\n";
    cout << "Enter your current weight: ";
    cin >> weight;
    
    // Table title.
    cout << left << setw(10)
            << "Month #" << "Weight\n";
    
    // Create the table.
    for (count >= 1; count <= 6; count++, weight -= 4)
    {
        cout << left << setw(10)
                << count << weight << endl;
    }
    return 0;
}

