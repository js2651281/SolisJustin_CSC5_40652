/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user for a positive integer value that uses a loop 
 * to validate the input. Use a second loop to complete the sum of all the 
 * integers from 1 up to the number entered.
 *
 * Created on January 22, 2018, 10:12 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    int userInt;        // Integer the user inputs.
    int count = 1;      // Starting number.
    int sum;            // Sum of the numbers.
    
    // Ask the user for a positive integer value.
    cout << "This program will complete the sum of all the integers from 1 up to"
            << " the number you enter.\n";
    cout << "Please enter a positive integer: ";
    cin >> userInt;
    while (userInt <= 0)
    {
        cout << "ERROR: Please enter a positive integer: ";
        cin >> userInt;
    }
    
    // Second loop to compute the sum of all the integers from 1-numEntered.
    for (count ; count <= userInt ; ++count)
    {
        sum += count;
    }
    cout << "The sum is " << sum;
    return 0;
}

