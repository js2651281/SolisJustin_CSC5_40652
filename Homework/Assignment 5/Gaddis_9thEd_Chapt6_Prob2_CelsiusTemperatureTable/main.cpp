/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will make a function called celsius that accepts a Fahrenheit temp
 * and convert it to Celsius. It will also make a loop that displays a table of the
 * Fahrenheit temperatures 0-20 and their Celsius equivalents.
 *
 * Created on February 4, 2018, 4:32 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
float celsius(float fahrenheit);

int main(int argc, char** argv) {

    // Initialize variables.
    float fahrenheit=1;
    
    // Title
    cout<<fixed<<setprecision(1)<<left<<setw(15)
            <<"Fahrenheit"<<"Celsius\n";
    // Loop that counts to 20.
    for (int i=1; i<=20; i++, fahrenheit++){
        cout<<left<<setw(15)<<fahrenheit<<celsius(fahrenheit)<<endl;
    }
    return 0;
}

float celsius(float fahrenheit){
    float total;
    
    total = (5*(fahrenheit-32))/9;
    return total;
}

