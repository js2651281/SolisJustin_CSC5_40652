/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user to enter a month, day, and 2 digit year.
 * The program will determine whether the month * the day = the year.
 *
 * Created on January 17, 2018, 8:45 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    int month, day, year;
    
    // Ask user to input month, day, year.
    cout << "Enter a month in numeric form: ";
    cin >> month;
    cout << "Enter a day in numeric form: ";
    cin >> day;
    cout << "Enter a two digit year: ";
    cin >> year;
    
    // Determine and display whether or not the date is "magic."
    if(month * day == year)
        cout << "Wow! The date you entered is magic!";
    else
        cout << "Sorry, the date you entered is not magic.";

    
    return 0;
}

