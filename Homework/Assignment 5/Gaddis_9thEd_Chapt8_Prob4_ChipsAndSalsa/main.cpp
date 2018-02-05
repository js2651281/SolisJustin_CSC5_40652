/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will let a chip and salsa maker keep track of their sales for 5
 * different types of salsa. 
 *
 * Created on February 4, 2018, 9:24 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

// Function prototypes.
int high(int sales[], int);

int main(int argc, char** argv) {

    // Initialize variables.
    const int ARRAY_SIZE = 5;
    string name[ARRAY_SIZE] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    string high, low;
    int sales[ARRAY_SIZE];
    int total;
    
    // Ask the user to enter the number of jars sold for each type of salsa.
    for (int i=0; i<ARRAY_SIZE; i++){
        cout<<"Please enter the sales for "<<name[i]<<" salsa: ";
        cin>>sales[i];
        total+=sales[i];
        
        if(sales[i]<0){
            cout<<"Please enter a number above 0: ";
            cin>>sales[i];
        }
        if(sales[i]>sales[i-1])
            high=name[i];
        if(sales[i]<sales[i-1])
            low=name[i];
        else
            low=name[0];
    }
    
    // Produce a report that displays the sales for each type of salsa, total sales, 
    // and the names of the highest selling and lowest selling products.
    cout<<endl;
    
    for (int i=0; i<ARRAY_SIZE; i++){
        cout<<"Sales for "<<name[i]<<" salsa: "<<sales[i]<<endl;
    }
    
    cout<<"Total sales: "<<total<<endl;
    cout<<"Highest selling salsa: "<<high<<"."<<endl;
    cout<<"Lowest selling salsa: "<<low<<"."<<endl;
    
    return 0;
}

int high(int sales[], int ARRAY_SIZE){
    int high=0, low;
    
    for (int count=0; count<ARRAY_SIZE; count++){
        if (sales[count]>high)
            high=sales[count];
    }
}