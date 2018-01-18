/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user to enter a number of seconds.
 * If the user enters a # that is >= 86400, display the # of days.
 * If the user enters a # that is <= 86400 but >= 3600 display the # of hours.
 * If the user enters a # that is <= 3600 but >= 60, display the # of minutes.
 *
 * Created on January 17, 2018, 9:31 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    const int MINUTE = 60,          // Seconds in a minute.
            HOUR = 3600,            // Seconds in an hour.
            DAY = 86400;            // Seconds in a day.
    float seconds;                    // Seconds input by the user.
    float days, hours, minutes;
    
    // Ask the user to enter a # of seconds.
    cout << "Enter a number of seconds: ";
    cin >> seconds;
    
    // Calculate the amount of days/hours/minutes in seconds.
    days = seconds / DAY;
    hours = seconds / HOUR;
    minutes = seconds / MINUTE;
    
    // Determine whether or not to display the time in  days, hours, minutes, or seconds.
    if(seconds >= DAY)
        cout << fixed << setprecision(2)
        << seconds << " seconds is " << days << " days.";
    else if(seconds >= HOUR)
        cout << fixed << setprecision(2)
        << seconds << " seconds is " << hours << " hours.";
    else if(seconds >= MINUTE)
        cout << fixed << setprecision(2)
        << seconds << " seconds is " << minutes << " minutes.";
    else if(seconds <= MINUTE)
        cout << fixed << setprecision(2)
        << "You entered " << seconds << " seconds.";
    return 0;
}

