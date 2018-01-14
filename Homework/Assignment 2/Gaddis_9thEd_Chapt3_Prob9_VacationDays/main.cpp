/*
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the users to enter the # of days they plan to spend on their next vacation.
 * It will then compute and report how long that is in hours, minutes, and seconds.
 *
 * Created on January 12, 2018, 6:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    int days,       // Days spent on vacation.
            hours,  // Hours spent on vacation.
            mins,   // Minutes spent on vacation.
            secs;   // Seconds spent on vacation.
            
    // Ask the user to enter the # of days they plan to spend on vacation.
    cout << "How many days do you plan on spending on your next vacation? ";
    cin >> days;
    
    // Compute how long that is in hours, mins, and seconds.
    hours = days * 24;
    mins = days * 1440;
    secs = days * 86400;
    
    // Display the results.
    cout << "You will spend "
            << hours
            << " hours, "
            << mins
            << " minutes, and "
            << secs
            << " seconds on vacation.";
    
    return 0;
}

