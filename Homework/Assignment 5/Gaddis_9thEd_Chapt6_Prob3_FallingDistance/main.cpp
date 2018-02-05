/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will use a loop that counts to 10 to display a formula that is used to
 * determine the distance an object falls over time.
 *
 * Created on February 4, 2018, 4:52 PM
 */

#include <cstdlib>
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Global constants.
const float GRAVITY=9.8;
// Function prototypes.
float fallingDistance(float time);

int main(int argc, char** argv) {

    // Initialize variables.
    float time=1;
    
    // Title.
    cout<<fixed<<setprecision(1)<<left<<setw(10)<<"Time"<<"Distance"<<endl;
    
    // Make a loop that counts to 10 that calls the fallingDistance function.
    for(int i=1; i<=10; i++, time++){
        cout<<fixed<<left<<setw(10)<<time<<fallingDistance(time)<<endl;
    }
    return 0;
}

float fallingDistance(float time){
    float distance;
    
    distance = (.5)*GRAVITY*(pow(time, 2));
    return distance;
}
