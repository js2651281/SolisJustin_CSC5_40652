/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will calculate the total tax on a gallon gas, base price for a gallon of gas, % price due to gas tax, and oil company profit range.
 *
 * Created on January 10, 2018, 11:01 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define variables
    float gallon,                           // Price the user pays for a gallon of gas with no tax (Base price for a gallon of gas).
            totalTax,                       // Total tax for a gallon of gas.
            totalPrice,                     // How much a person pays for a gallon of gas (with tax).
            oldTotalPrice,                  // The previous total price for a gallon of gas.
            percentagePrice,                // Percentage price due to gas tax.
            fedTax = .184,                  // Federal tax on a gallon of gas (cents/gallon).
            stateTax = .417,                // State tax on a gallon of gas (cents/gallon).
            oldStateTax = .297,             // Old state tax on a gallon of gas (cents/gallon).
            stateSalesTax = .0225,          // State sales tax.
            companyProfitLower = .07,       // Lower bound of oil company profit.
            companyProfitUpper = 6.5;       // Upper bound of oil company profit (percent).
    
    // Ask the user how much a gallon of gas costs for them.
    cout << "How much do you pay for a gallon of gas (dollars and cents)? $";
    cin >> gallon;
    
    // Calculate
    totalTax = fedTax + stateTax + (gallon * stateSalesTax);                     // Total tax people pay for a gallon of gas.
    totalPrice = gallon + fedTax + stateTax + (gallon * stateSalesTax);          // Total price people currently pay for a gallon of gas.
    oldTotalPrice = gallon + fedTax + oldStateTax + (gallon * stateSalesTax);    // Total price people used to pay for a gallon of gas.
    percentagePrice = totalTax / gallon * 100;                                  // Percentage price for a gallon of gas (PROBABLY CHANGE)                                              // Lower bound of company profit.
    companyProfitLower = companyProfitLower / gallon * 100;                     // Lower bound of company profit.
    
    // Display calculations
    cout << "The total tax on a gallon of gas is "  << setprecision(2) << totalTax << ".\n"
            << "The base price for a gallon of gas is $" << setprecision(3) << gallon << ".\n"
            << "The percentage price due to the gas tax is " << setprecision(4) << percentagePrice << "%.\n"
            << "The oil company profit range is: " << setprecision(3) << companyProfitLower << "% to " << setprecision(2) << companyProfitUpper << "%.";
    
    return 0;
}

