/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will use a linear search algorithm, and a binary search algorithm
 * to find a number in that array. It should also keep count of the # of comparisons
 * it makes.
 *
 * Created on February 4, 2018, 10:41 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

// Function prototypes.
int linearSearch(int numbers[], int ARRAY_SIZE, int x);
int binarySearch(int numbers[], int ARRAY_SIZE, int x);

int main(int argc, char** argv) {

    // Initialize variables.
    const int ARRAY_SIZE = 20;
    int numbers[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int x = 13;
    
    cout<<"Linear search comparisons: "<<linearSearch(numbers, ARRAY_SIZE, x)<<endl;
    cout<<"Binary search comparisons: "<<binarySearch(numbers, ARRAY_SIZE, x);
    
    return 0;
}

int linearSearch(int numbers[], int ARRAY_SIZE, int x){
    int index = 0;
    int position = -1;
    bool found = false;
    
    while (index < ARRAY_SIZE && !found){
        if (numbers[index] == x){
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}

int binarySearch(int numbers[], int ARRAY_SIZE, int x){
    int first = 0,
            last = ARRAY_SIZE - 1,
            middle,
            position = -1;
    bool found = false;
    
    while (!found && first <= last){
        middle = (first + last) / 2;
        if (numbers[middle] == x){
            found = true;
            position = middle;
        }
        else if (numbers[middle] > x)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}