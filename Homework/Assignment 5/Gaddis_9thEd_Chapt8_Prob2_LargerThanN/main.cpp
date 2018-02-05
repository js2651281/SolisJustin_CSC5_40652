/* 
 * File:   main.cpp
 * Author: Justin Solis
 * Create a program with a function that accepts 3 arguments:
 * an integer array, an integer size that includes how many elements are in the array,
 * and an integer n. The function should display all the numbers in the array
 * that are greater than the number n.
 *
 * Created on February 4, 2018, 8:35 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

// Function prototypes.
int function(int array[], int size, int n);

int main(int argc, char** argv) {

    // Define variables.
    int size=10,
            array[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
            n = 3;
    
    // Display what n is.
    cout<<"n = 3\n\n";
    
    // Call the function.
    cout<<"The numbers greater than n are:\n";
    cout<<function(array, size, n);
    return 0;
}

int function(int array[], int size, int n){
    for (int i=1, j=0; i<size; ++i, j++){
        if (array[j]>n)
            cout<<array[j]<<" ";
    }
}
