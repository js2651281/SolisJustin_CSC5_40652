/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user to enter a # within the range of 1-10.
 * Use a switch statement to display the Roman numeral version of the #.
 *
 * Created on January 17, 2018, 8:34 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    int number;
    
    // Ask the user to enter a # within the range of 1-10.
    cout << "Enter a # within the range of 1 to 10: ";
    cin >> number;
    
    // Use a switch statement to display the Roman numeral version of the #.
    switch(number)
    {
        case 1 : cout << "I is the Roman numeral equivalent for 1.";
        break;
        case 2 : cout << "II is the Roman numeral equivalent for 2.";
        break;
        case 3 : cout << "III is the Roman numeral equivalent for 3.";
        break;
        case 4 : cout << "IV is the Roman numeral equivalent for 4.";
        break;
        case 5 : cout << "V is the Roman numeral equivalent for 5.";
        break;
        case 6 : cout << "VI is the Roman numeral equivalent for 6.";
        break;
        case 7 : cout << "VII is the Roman numeral equivalent for 7.";
        break;
        case 8 : cout << "VIII is the Roman numeral equivalent for 8.";
        break;
        case 9 : cout << "IX is the Roman numeral equivalent for 9.";
        break;
        case 10 : cout << "X is the Roman numeral equivalent for 10.";
        default : cout << "You did not enter a # within the range of 1 to 10.";
    }
    
    return 0;
}

