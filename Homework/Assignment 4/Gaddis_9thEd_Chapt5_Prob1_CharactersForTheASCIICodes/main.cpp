/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will use a loop to display the characters for each ASCII code 32
 * through 127. Display 16 characters on each line with one space between
 * characters.
 *
 * Created on January 22, 2018, 9:18 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    int count = 1;
    char character = 32;
    
    // Use loop to display characters for ASCII codes 32-127.
    for (count >= 1; count <= 95; character++ && count++)
    {
        cout << character << " ";
        if (count % 16 == 0)
        {
            cout << endl;
        }
    }
    return 0;
}

