/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user for the name for a movie, and how many adult and child tickets were sold.
 * Adult tickets = $10, child tickets = $6.
 * Calculate and display how much the theater earns and pays to the distributor.
 *
 * Created on January 12, 2018, 6:29 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    int adult = 10, child = 6, adultSold, childSold;       // Tickets
    float gBoxOffice,       // Gross box office revenue.
            nBoxOffice,     // Net box office revenue (after distributor).
            distributor;    // Amount paid to distributor.
    string movie;           // Movie title.
    
    // Ask the user for the name of the movie, and how many adult and child tickets were sold.
    cout << "What is the name of the movie? ";
    getline(cin, movie);
    cout << "How many adult tickets were sold? ";
    cin >> adultSold;
    cout << "How many child tickets were sold? ";
    cin >> childSold;
    
    // Calculate the gross box office revenue, amount paid to distributor, and net box office revenue.
    gBoxOffice = (adult * adultSold) + (child * childSold);
    distributor = gBoxOffice * .2;
    nBoxOffice = gBoxOffice - distributor;
    
    // Display the information calculated.
    cout << fixed << setprecision(2)
            << left << setw(36)
            <<"\nMovie Name:" 
            << "\"" << movie << "\"" << endl;
    cout << left << setw(35) 
            << "Adult Tickets Sold:"
            << adultSold << endl;
    cout << left << setw(35)
            << "Child Tickets Sold:"
            << childSold << endl;
    cout << left << setw(35)
            << "Gross Box Office Revenue:"
            << "$" << gBoxOffice << endl;
    cout << left << setw(35)
            << "Amount Paid to Distributor"
            <<  "-$" << distributor << endl;
    cout << left << setw(35)
            << "Net Box Office Revenue"
            << "$" << nBoxOffice << endl;
    return 0;
}

