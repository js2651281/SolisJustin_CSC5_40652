/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask for 5 test scores, then calculate the average and display it.
 * The display should be in fixed-point notation, with 1 decimal point of precision.
 *
 * Created on January 12, 2018, 5:48 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    float test1,
            test2,
            test3,
            test4,
            test5,
            average;
    
    // Ask for 5 test scores.
    cout << "Enter the result of test 1: ";
    cin >> test1;
    cout << "Enter the result of test 2: ";
    cin >> test2;
    cout << "Enter the result of test 3: ";
    cin >> test3;
    cout << "Enter the result of test 4: ";
    cin >> test4;
    cout << "Enter the result of test 5: ";
    cin >> test5;
    
    // Calculate the average of the test scores.
    average = (test1 + test2 + test3 + test4 + test5) / 5;
    
    // Display the average of the test scores.
    cout << fixed << setprecision(1)
            << "The average of the test scores is " 
            << average
            << ".";
    
    return 0;
}

