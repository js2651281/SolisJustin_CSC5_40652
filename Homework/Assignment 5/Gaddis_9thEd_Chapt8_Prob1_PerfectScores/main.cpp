/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user to enter 20 test scores in the range of 0 to 100,
 * then store them in an array. It will report how many perfect scores were entered,
 * using a value-returning countPerfect function.
 *
 * Created on February 4, 2018, 8:11 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

// Function prototypes.
int countPerfect(int scores[], int);

int main(int argc, char** argv) {
    
    // Initialize variables.
    const int ARRAY_SIZE=20;
    int scores[ARRAY_SIZE];
    int total;
    
    // Use a for loop to ask the user to enter 20 test scores from 0 to 100.
    for (int count=0; count<ARRAY_SIZE; count++){
        cout<<"Please enter a number between 0 and 100 for the test result of student "
                <<"#"<<count+1<<": ";
        cin>>scores[count];
        
        if (scores[count]<0){
            cout<<"\nINVALID\nPlease enter a number between 0 and 100 for the test result of student"
                    <<"#"<<count+1<<": ";
            cin>>scores[count];
        }
    }
    
    // Use the countPerfect function to see how many perfect scores were entered.
    cout<<"The amount of perfect scores is: "<<countPerfect(scores, ARRAY_SIZE)<<".";
    
    return 0;
}

int countPerfect(int scores[], int){
    const int ARRAY_SIZE=20;
    int perfect;
    
    for (int count=0; count<ARRAY_SIZE; count++){
        if (scores[count]==100)
            perfect+=1;
    }
    return perfect;
}