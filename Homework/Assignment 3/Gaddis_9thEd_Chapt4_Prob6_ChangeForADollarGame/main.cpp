/* 
 * File:   main.cpp
 * Author: Justin Splis
 * This program will ask the user to enter the # of pennies, nickels, dimes,
 * and quarters. If the total value of the coins is = to 1 dollar, the program
 * will congratulate the user for winning the game. If not, display a message
 * that tells the user whether the amount entered was > or < than a dollar.
 * Use constant variables to hold the coin values.
 *
 * Created on January 17, 2018, 9:15 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    const float PENNY = .01,
            NICKEL = .05,
            DIME = .10,
            QUARTER = .25,
            DOLLAR = 1.00;
    int penAmnt, nickAmnt, dimeAmnt, quarAmnt;   // Coin amounts.
    float total;
    
    // Ask the user to enter the # of pennies, nickels, dimes, and quarters.
    cout << "Enter an amount of pennies. ";
    cin >> penAmnt;
    cout << "Enter an amount of nickels. ";
    cin >> nickAmnt;
    cout << "Enter an amount of dimes. ";
    cin >> dimeAmnt;
    cout << "Enter an amount of quarters. ";
    cin >> quarAmnt;
    
    // Calculate whether or not the entered values = a dollar, and message accordingly.
    total = (penAmnt * PENNY) + (nickAmnt * NICKEL) + (dimeAmnt * DIME) + (quarAmnt * QUARTER);
    
    if(total == DOLLAR)
        cout << "Congratulations you won the game!";
    if(!(total == DOLLAR))
        cout << "The sum of the coins you entered is $"
                << total
                << ".";
    return 0;
}

