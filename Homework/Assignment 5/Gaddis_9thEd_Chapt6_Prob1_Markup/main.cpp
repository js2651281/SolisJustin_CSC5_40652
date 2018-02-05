/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user to enter an item's price, and markup percentage.
 * Then it will display the retail price.
 * Program should have a function named calculateRetail that takes the cost and markup
 * and returns the retail price.
 *
 * Created on February 4, 2018, 4:15 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

// Function prototypes.
int calculateRetail(int cost, int markup);

int main(int argc, char** argv) {

    // Initialize variables.
    float cost, markup, total;
    
    // Ask the user to enter the wholesale cost and markup percentage.
    cout<<"Enter the wholesale cost and markup percentage of an item.\n";
    cin>>cost>>markup;
    
    // Check if any numbers are negative.
    if(cost<0 || markup<0){
        cout<<"Please enter positive numbers for wholesale cost and markup percentage.\n";
        cin>>cost>>markup;
    }
    // Call the calculateRetail function.
    total = calculateRetail(cost, markup);
    
    // Output the retail price of the item.
    cout<<"The total is $"<<total<<".";
    
    return 0;
}

int calculateRetail(int cost, int markup){
    int total;
    
    total = cost+(cost*(markup/100));
    return total;
}

