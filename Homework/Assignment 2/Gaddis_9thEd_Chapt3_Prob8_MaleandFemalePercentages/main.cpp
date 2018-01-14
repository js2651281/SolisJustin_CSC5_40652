/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user to enter the # of males and females in a class.
 * Then it will compare and report what % of the students are male, and what % of the students are female.
 * The output will be displayed with 2 decimal points.
 *
 * Created on January 12, 2018, 6:11 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    float male, female, total, percentMale, percentFemale;
    
    // Ask the user for the # of males and females in a class.
    cout << "How many males are registered in this class? ";
    cin >> male;
    cout << "How many females are registered in this class? ";
    cin >> female;
    
    // Calculate what % of the class is male/female.
    total = male + female;
    percentMale = male / total * 100;
    percentFemale = female / total * 100;
    
    // Display the results.
    cout << fixed << setprecision(2)
            << "Males are "
            << percentMale
            << "% of the class, and females are "
            << percentFemale
            << "% of the class.";
    
    return 0;
}

