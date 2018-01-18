/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program asks the user to enter two #s, and uses the conditional operator
 * to determine which # is smaller, and which is larger.
 *
 * Created on January 17, 2018, 8:08 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define input variables.
    int number1,     // The first number the user enters.
            number2; // The second number the user enters.
    
    // Define output variables.
    int answer;
    
    // Ask the user to enter two numbers.
    cout << "Enter two numbers separated by a space: ";
    cin >> number1 >> number2;
    
    // Use the conditional operator (?:) to determine which # is larger/smaller.
    (number1 > number2) ? answer = 0 : answer = 1;
    
    // Display the results.
    if(answer == 0)
        cout << "The first number is larger than the second number.\n";
    else
        cout << "The second number is larger than the first number.\n";
    
    return 0;
}

