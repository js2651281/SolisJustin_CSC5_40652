/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask how many stadium tickets were sold and display the income generated from each type of ticket.
 * The display will be in fixed-point notation with two decimal points.
 *
 * Created on January 12, 2018, 4:59 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    float classA = 15,
            classB = 12,
            classC = 9,
            cASold,         // Amount sold for class A.
            cBSold,         // Amount sold for class B.
            cCSold,         // Amount sold for class C.
            total;
    
    // Show how much each ticket costs.
    cout << "For a softball game, Class A seats cost $" 
            << classA 
            << ", Class B seats cost $"
            << classB
            << ", and Class C seats cost $"
            << classC
            << ".\n";
    
    // Ask how many tickets of each type were sold.
    cout << "How many Class A tickets were sold? ";
    cin >> cASold;
    cout << "How many Class B tickets were sold? ";
    cin >> cBSold;
    cout << "How many Class C tickets were sold? ";
    cin >> cCSold;
    
    // Calculate the total income.
    total = (classA * cASold) + (classB * cBSold) + (classC * cCSold);
    
    // Display the amount of income generated from ticket sales.
    cout << fixed << setprecision(2) 
            << "The total income generated from ticket sales was $"
            << total
            << ".";
    
    return 0;
}

