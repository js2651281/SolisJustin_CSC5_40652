/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user for the length and width of two rectangles.
 * It will tell the user which rectangle has the greater area, or if the areas
 * are the same.
 *
 * Created on January 17, 2018, 8:53 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define the variables.
    float length1, width1, area1,           // Length, width, and area of rectangle 1.
            length2, width2, area2;         // Length, width, and area of rectangle 2.
    
    // Ask the user to enter the length and width of two rectangles.
    cout << "Enter the length of rectangle 1: ";
    cin >> length1;
    cout << "Enter the width of rectangle 1: ";
    cin >> width1;
    cout << "Enter the length of rectangle 2: ";
    cin >> length2;
    cout << "Enter the width of rectangle 2: ";
    cin >> width2;
    
    // Calculate the area of the rectangles.
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    // Determine which rectangle has the greater area, or if the areas are the same; then display the information.
    if(area1 == area2)
        cout << "The areas of the two rectangles are the same.";
    if(area1 > area2)
        cout << "The area of rectangle 1 is greater than the area of rectangle 2.";
    if(area2 > area1)
        cout << "The area of rectangle 2 is greater than the area of rectangle 1.";
    return 0;
}

