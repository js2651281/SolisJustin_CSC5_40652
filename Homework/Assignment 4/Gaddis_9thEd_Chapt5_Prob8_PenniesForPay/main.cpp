/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will calculate how much a person earns in a month if the salary
 * is one penny the first day, two pennies on the second day, four
 * pennies the third day, and so on with the pay doubling each day the employee works.
 * Ask for the # of days the employee works during the month, validate that it is
 * between 1 and 31, then display a table showing how much the salary was
 * for each day worked, as well as the total pay earned for the month.
 * The output should be displayed in dollars with two decimal points.
 *
 * Created on January 23, 2018, 12:17 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    const float PENNY = .01;
    int days = 1, count = 1, inputDays;
    float salary, total;
    
    // Ask how many days the employee works.
    cout << "This program will calculate a worker's pay if they were paid in pennies.\n";
    cout << "How many days did the employee work this month? ";
    cin >> inputDays;
    
    // Validate that it is between 1 and 31.
    while (days < 1 || days > 31)
    {
        cout << "Please enter a number between 1 and 31.";
        cin >> inputDays;
    }
    
    // Table title.
    cout << left << setw(15) << "Days" << left << setw(15) << "Salary" << "Total\n";
    
    // Create the table.
    for (count >= 1; count <= 31; count++, days++)
    {
        salary = PENNY * (pow(2, count - 1));
        total = salary * days;
        
        cout << left << setw(15) << fixed << setprecision(2)
                << days << left << setw(15) << salary << total << endl;
    }
    return 0;
}

