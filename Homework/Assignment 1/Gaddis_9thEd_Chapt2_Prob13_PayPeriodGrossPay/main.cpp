/*
 * File:   main.cpp
 * Author: Justin Solis
 * This program will determine and display what the amount of an employee's gross pay should be if he is paid twice a month, and biweekly.
 * Created on January 5, 2018, 10:59 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    int annual = 39000,         // Annual pay.
            bimonthly,          // Paid twice per month.
            biweekly;           // Paid once every two weeks.
    
    // Calculate the employee's gross pay for bimonthly and biweekly paychecks.
    bimonthly = annual /24;     // Calculates the twice per month pay.
    biweekly = annual /26;      // Calculates the biweekly pay.
    
    // Display the information calculated.
    cout << "If an employee earns $" << annual << " annually, then they would earn $"
            << bimonthly << " every pay period if they were paid bi-monthly, and $"
            << biweekly << " every pay period if they were paid bi-weekly.";
    
    return 0;
}

