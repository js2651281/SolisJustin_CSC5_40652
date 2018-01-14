/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user to enter their monthly costs for: rent/mortgage, utilities, phones, cable.
 * Then it will display the total monthly cost of those expenses, and the total annual cost of those expenses.
 *
 * Created on January 12, 2018, 5:20 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    float rentMort,             // Monthly rent/mortgage payment (Used float just in case someone wanted to use decimals).
            utilities,          // Monthly utilities payment.
            phones,             // Monthly phone payment.
            cable,              // Monthly cable payment.
            totalMonthly,       // Total cost of all the expenses monthly.
            totalYearly;        // Total cost of all the expenses yearly.
    
    // Ask the user to enter monthly costs for: rent/mortgage, utilities, phones, cable.
    cout << "How much do you pay for rent/mortgage every month? ";
    cin >> rentMort;
    cout << "How much do you pay for utilities every month? ";
    cin >> utilities;
    cout << "How much do you pay for your phone(s) every month? ";
    cin >> phones;
    cout << "How much do you pay for cable every month? ";
    cin >> cable;
    
    // Calculate the total monthly cost, and the total yearly cost.
    totalMonthly = rentMort + utilities + phones + cable;
    totalYearly = 12 * totalMonthly;
    
    // Display total monthly cost, and total yearly cost.
    cout << fixed << setprecision(2) 
            << "Every month you pay $"
            << totalMonthly
            << " total. Every year you pay $"
            << totalYearly
            << " total.";
    
    return 0;
}

