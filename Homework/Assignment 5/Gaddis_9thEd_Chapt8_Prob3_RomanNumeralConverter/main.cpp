/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will convert any decimal number between 1 and 20 to Roman numerals.
 * The Roman numerals should be stored in an array of strings, and the decimal number
 * should be used to locate the array element holding the Roman numeral equivalent.
 *
 * Created on February 4, 2018, 9:06 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    // Initialize variables.
    string romanNum[20] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", 
                        "IX", "X", "XI", "XII", "XIII", "XIV", "XV", "XVI", 
                        "XVII", "XVIII", "XIX", "XX"};
    int num;
    
    // Ask the user to enter a number
    while(!num==0){
        cout<<"Please enter a decimal number between 1 and 20. Enter 0 to exit the program: ";
        cin>>num;
        
        switch(num){
            case 1 : cout<<romanNum[0]<<endl; break;
            case 2 : cout<<romanNum[1]<<endl; break;
            case 3 : cout<<romanNum[2]<<endl; break;
            case 4 : cout<<romanNum[3]<<endl; break;
            case 5 : cout<<romanNum[4]<<endl; break;
            case 6 : cout<<romanNum[5]<<endl; break;
            case 7 : cout<<romanNum[6]<<endl; break;
            case 8 : cout<<romanNum[7]<<endl; break;
            case 9 : cout<<romanNum[8]<<endl; break;
            case 10 : cout<<romanNum[9]<<endl; break;
            case 11 : cout<<romanNum[10]<<endl; break;
            case 12 : cout<<romanNum[11]<<endl; break;
            case 13 : cout<<romanNum[12]<<endl; break;
            case 14 : cout<<romanNum[13]<<endl; break;
            case 15 : cout<<romanNum[14]<<endl; break;
            case 16 : cout<<romanNum[15]<<endl; break;
            case 17 : cout<<romanNum[16]<<endl; break;
            case 18 : cout<<romanNum[17]<<endl; break;
            case 19 : cout<<romanNum[18]<<endl; break;
            case 20 : cout<<romanNum[19]<<endl; break;
        }
    }
    return 0;
}

