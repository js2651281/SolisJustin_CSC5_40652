/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will use a loop to display the # of calories burned after 5,
 * 10, 15, 20, 25, and 30 mins on a treadmill that burns 3.9 calories per hr.
 *
 * Created on January 23, 2018, 1:00 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    const float CALS = 3.9;
    int time = 5;
    float calsBurned;
    
    // Chart title.
    cout << left << setw(10) << "Time" << "Calories Burned\n";
    
    // Create the chart.
    for (time = 5 ; time <= 30 ; time += 5)
    {
        calsBurned = CALS * time/60;
        
        cout << left << setw(10)
                << time << calsBurned << endl;;
    }
    return 0;
}

