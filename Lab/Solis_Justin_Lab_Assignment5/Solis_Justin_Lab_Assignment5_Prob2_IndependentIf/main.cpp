/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user to input pay rate, and hours worked.
 * Then it will output the paycheck straight time to 40 hours, and double time
 * worked after 40 hrs.
 *
 * Created on January 18, 2018, 2:21 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    const int fortyHours = 40;
    float payRate, hrsWorked, payCheck, abv40Pay;
    
    // Input pay rate, hours worked.
    cout << "This program will calculate how much you should get paid for the week.\n";
    cout << "Enter how much you get paid per hour: ";
    cin >> payRate;
    cout << "Enter how many hours you worked this week: ";
    cin >> hrsWorked;
    
    // Calculate pay.
    payCheck = payRate * hrsWorked;
    abv40Pay = fortyHours * payRate;
    
    // Output paycheck.
    if (hrsWorked <= 0 || payRate < 0)
        cout << "Please enter a number greater than or equal to 0.";
    if (hrsWorked <= fortyHours && hrsWorked > 0 && payRate > 0)
        cout << "You have earned $" <<  payCheck << " this week.";
    if (hrsWorked > fortyHours)
        cout << "You have earned $" << abv40Pay+ ((2 * payRate) * (hrsWorked - 40));

    return 0;
}

