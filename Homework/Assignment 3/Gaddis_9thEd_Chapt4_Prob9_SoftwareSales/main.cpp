/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask for the # of units purchased and compute the total
 * cost of the purchase.
 *
 * Created on January 17, 2018, 10:08 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    const int PACKAGE = 199;
    int quantity, beforeDiscount;
    
    // Ask the user how many units were purchased.
    cout << "This package costs $199, how many packages would you like to buy? ";
    cin >> quantity;
    
    // Compute the total cost of the purchase.
    beforeDiscount = quantity * PACKAGE;
    // Display the information
    if(quantity >= 100)
        cout << "The total price of this purchase is " << (beforeDiscount - (beforeDiscount * .5));     // Total after 50% discount.
    else if(quantity >= 50)
        cout << "The total price of this purchase is " << (beforeDiscount - (beforeDiscount *.4));      // Total after 40% discount.
    else if(quantity >= 20)
        cout << "The total price of this purchase is " << (beforeDiscount - (beforeDiscount *.3));      // Total after 30% discount.
    else if(quantity >= 10)
        cout << "The total price of this purchase is " << (beforeDiscount - (beforeDiscount * .2));     // Total after 20% discount.
    else if (quantity <=0)
        cout << "Sorry, please enter a number greater than 0.";
    return 0;
}

