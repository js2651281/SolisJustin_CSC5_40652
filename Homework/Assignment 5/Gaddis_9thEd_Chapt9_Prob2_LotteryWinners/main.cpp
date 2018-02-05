/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will use a linear search to see if a lottery ticket number is a winner.
 *
 * Created on February 4, 2018, 10:28 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

// Function prototypes.
int search(int numbers[], int ARRAY_SIZE, int input);

int main(int argc, char** argv) {

    // Initialize variables.
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int input;
    
    // Ask the user to input a lottery ticket number.
    cout<<"Please enter a 5 digit lottery ticket number: ";
    cin>>input;
    
    // Call the search function to see if the input is valid.
    if (search(numbers, ARRAY_SIZE, input) == input)
        cout<<"Congratulations! You picked a winning number!";
    else
        cout<<"Sorry, try again.";
    return 0;
}

int search(int numbers[], int ARRAY_SIZE, int input){
    int index = 0;
    int position = -1;
    bool found = false;
    
    while (index<ARRAY_SIZE && !found){
        if (numbers[index] == input){
            found = true;
            position = input;
        }
        index++;
    }
    return position;
}