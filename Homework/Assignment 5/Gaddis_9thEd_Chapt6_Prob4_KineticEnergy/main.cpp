/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will ask the user to enter values for mass and velocity, and put them
 * into a function named kineticEnergy. Then it will output the amount of kinetic energy
 * the object has.
 *
 * Created on February 4, 2018, 5:07 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes.
float kineticEnergy(float mass, float velocity);

int main(int argc, char** argv) {

    // Initialize variables.
    float mass, velocity;
    
    // Ask the user to enter mass and velocity.
    cout<<"This program will determine kinetic energy from numbers you input.\n";
    cout<<"Please enter a mass and velocity: ";
    cin>>mass>>velocity;
    
    // Call the kineticEnergy function and output the result.
    cout<<"The kinetic energy is: "<<kineticEnergy(mass, velocity);
    return 0;
}

float kineticEnergy(float mass, float velocity){
    int total;
    
    total = 0.5*mass*pow(velocity, 2);
    return total;
}