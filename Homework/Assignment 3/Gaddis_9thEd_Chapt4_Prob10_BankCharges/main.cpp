/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask for the # of checks written during the past month,
 * then compute and display the bank's fees for the month.
 *
 * Created on January 17, 2018, 10:24 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    int check;
    
    // Ask the user to write the # of checks written during the past month.
    cout << "Enter the # of checks written during the past month. ";
    cin >> check;
    
    // Compute the bank's fees for the month (add 15 dollars to the check price because the bank charges $15 per month + check fees).
    if(check >= 60)
        cout << "You owe the bank $" << (15 + (.04 * check)) << ".";        // Total for >60 checks at $.04 a check.
    else if(check >= 40)
        cout << "You owe the bank $" << (15 + (.06 * check)) << ".";        // Total for >40 checks at $.06 a check.
    else if(check >= 20)
        cout << "You owe the bank $" << (15 + (.08 * check)) << ".";        // Total for >20 checks at $.08 a check.
    else if(check >= 0)
        cout << "You owe the bank $" << (15 + (.1 *check)) << ".";          // Total for <20 checks at $.1 a check.
    else if(check < 0)
        cout << "Sorry, please restart the program and enter a number greater than 0.";
    return 0;
}

