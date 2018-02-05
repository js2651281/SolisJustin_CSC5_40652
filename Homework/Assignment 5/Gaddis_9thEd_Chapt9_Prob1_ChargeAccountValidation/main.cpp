/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask a user to enter a charge account number, and search through
 * an array to check if the number entered is valid.
 *
 * Created on February 4, 2018, 10:01 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

// Function prototypes.
int search(int num[], int , int input);

int main(int argc, char** argv) {

    // Initialize variables.
    const int ARRAY_SIZE = 18;
    int num[ARRAY_SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152,
                    4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231,
                    3852085, 7576651, 7881200, 4581002};
    int input;
    
    // Ask the user to enter a 7 digit number.
    cout<<"Please enter a 7 digit number: ";
    cin>>input;
    
    // Call the search function to check if the number entered is correct.
    if (search(num, ARRAY_SIZE, input) == input)
        cout<<"Valid.";
    else 
        cout<<"Invalid.";
    return 0;
}

int search(int num[], int ARRAY_SIZE, int input){
    int index = 0;
    int position = -1;
    bool found = false;
    
    while (index<ARRAY_SIZE && !found){
        if (num[index] == input){
            found = true;
            position = input;
        }
        index++;
    }
    return position;
}