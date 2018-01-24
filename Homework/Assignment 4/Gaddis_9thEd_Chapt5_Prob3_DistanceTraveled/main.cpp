/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user for the speed of a vehicle (in mph) and how
 * many hours it has traveled. It should use a loop to display the total distance
 * traveled at the end of each hour of that time period.
 *
 * Created on January 22, 2018, 10:48 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    float distance, hours = 1, speed, userHours;
    
    // Ask the user to enter the speed of the vehicle, and how many hours it has traveled.
    cout << "This program will calculate how many miles a vehicle has traveled in"
            << " x hours at y speed.\n";
    cout << "How fast was the vehicle going (in mph)? ";
    cin >> speed;
    cout << "How many hours has the vehicle been traveling? ";
    cin >> userHours;
    
    if(speed <= 0 || userHours <= 0)
        cout << "Please restart the program and enter positive integers.";
    // Titles.
    if(speed >= 0 && userHours >= 0)
    cout << left << setw(16) << "Hour" << "Miles Traveled\n";
    
    // Use a loop to display the total distance traveled at the end of each hour of the time period.
    for (hours >= 1; hours <= userHours ; hours++ )
    {
        distance = hours * speed;
        cout << left << setw(16) << hours  << distance << endl;
    }
        
    return 0;
}

