/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will store the integers 50 and 100 in variables, store the sum of these two in a variable, then display the total.
 *
 * Created on January 5, 2018, 3:40 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define integers
    int int50, int100, total;
    int50 = 50;
    int100 = 100;
    total = int50 + int100;
    
    // Display the total.
    cout << "The total of int50 + int100 = " << total << "." << endl;
            
    return 0;
}

