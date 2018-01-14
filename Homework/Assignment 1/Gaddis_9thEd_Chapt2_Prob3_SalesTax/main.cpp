/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will compute the sales tax on a $95 purchase.
 *
 * Created on January 5, 2018, 3:54 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables (sales tax, county sales tax, state sales tax, and total tax).
    float   purchase = 95,
            stateTax = .065,
            countyTax = .02,
            totalStateTax,
            totalCountyTax,
            totalTax;
    
    // Calculate the total tax.
    totalStateTax = purchase * stateTax;
    totalCountyTax = purchase * countyTax;
    totalTax = purchase * (stateTax + countyTax);
    
    // Display the purchase price, sales tax, county tax, and total tax amounts on the screen.
    cout << "The total purchase price is $" << purchase << ". The state sales tax is 6.5%, and the county tax is 2% of the purchase."
            " The total tax is 8.5% of the purchase. The state sales tax amounts to $" << totalStateTax << 
            ". The county tax amounts to $" << totalCountyTax << ", and the total tax amounts to $" << totalTax << ".";
    return 0;
}

