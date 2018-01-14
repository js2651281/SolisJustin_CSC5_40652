/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user to enter the name of three months, and the amount of rain (in inches) that fell that month.
 * Then it will display the average monthly rainfall for those three months.
 *
 * Created on January 12, 2018, 5:56 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    string month1,
            month2,
            month3;
    float rainMonth1,       // Rainfall for month 1.
            rainMonth2,     // Rainfall for month 2.
            rainMonth3,     // Rainfall for month 3.
            average;        // Total average rainfall for the three months.
    
    // Ask the user to enter the name of each month,a nd the amount of rain that fell in each month.
    cout << "Enter the name of month 1. ";
    getline(cin, month1);
    cout << "Enter the name of month 2. ";
    getline(cin, month2);
    cout << "Enter the name of month 3. ";
    getline(cin, month3);
    cout << "Enter the average rainfall for "
            << month1
            << " in inches. ";
    cin >> rainMonth1;
    cout << "Enter the average rainfall for "
            << month2
            << " in inches. ";
    cin >> rainMonth2;
    cout << "Enter the average rainfall for "
            << month3
            << " in inches. ";
    cin >> rainMonth3;
    
    // Calculate the average rainfall.
    average = (rainMonth1 + rainMonth2 + rainMonth3) / 3;
    
    // Display the average.
    cout << fixed << setprecision(2)
            << "The average rainfall for "
            << month1
            << ", "
            << month2
            << ", and "
            << month3
            << "  is: "
            << average
            << " inches.";
    
    return 0;
}

