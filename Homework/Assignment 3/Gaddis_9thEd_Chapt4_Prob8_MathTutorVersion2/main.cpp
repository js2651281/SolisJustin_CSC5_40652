/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This program will display a math problem to be added.
 * It should wait for the user to enter the answer.
 * If the answer is correct, congratulate; if the answer is wrong, show correct answer.
 *
 * Created on January 17, 2018, 9:54 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {

    // Define variables.
    unsigned seed;
    seed = time(0);
    srand(seed);
    int number1 = rand() % 50 + 1,             // Random number 1
            number2 = rand() % 50 + 1,         // Random number 2
            answer,                             // Answer the user inputs.
            realAnswer;                         // The correct answer.
    
    // Display the problem and prompt user to answer.
    cout << "Add the following numbers together:\n\n";
    cout << setw(5) << number1 << endl;
    cout << "+ " << setw(3) << number2 << endl;
    cout << "---- \n";
    cin >> answer;
    
    // Determine whether the answer is wrong or right.
    realAnswer = number1 + number2;
    
    // Display whether or not the answer is correct or not.
    if(answer == realAnswer)
        cout << "Congratulations! You got the answer correct!";
    else 
        cout << "The correct answer is " << realAnswer << ".";
    return 0;
}

