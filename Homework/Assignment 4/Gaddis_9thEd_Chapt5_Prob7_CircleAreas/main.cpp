/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will create a table showing the radius and area for a circle
 * whose radius begins with 1 and continues doubling until it is 8.
 *
 * Created on January 23, 2018, 12:03 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    const float PI = 3.14;
    int radius = 1, count;
    float area;
    
    // Title.
    cout << left << setw(10) 
            << "Radius" << "Area\n";
    
    // Chart.
    for (count = 1; count <= 8; count++, radius++)
    {
        area = PI * pow(radius, 2);
        
        cout << fixed << setprecision(2) << left << setw(10)
                << radius << area << endl;
    }
    return 0;
}

