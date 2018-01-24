/* 
 * File:   main.cpp
 * Author: Justin Solis
 * Menu for the problems in chapter 5.
 *
 * Created on January 22, 2018, 9:47 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    // Define the variables.
    int probNum;
    
    // Loop on menu and problems
    do
    {
        
        // Menu with input of choice.
        cout << "Choose from the following Menu" << endl;
        cout << "1. Gaddis_9thEd_Chapt5_Prob1_CharactersForTheASCIICodes" << endl;
        cout << "2. Gaddis_9thEd_Chapt5_Prob2_SumOfNumbers" << endl;
        cout << "3. Gaddis_9thEd_Chapt5_Prob3_DistanceTraveled" << endl;
        cout << "4. Gaddis_9thEd_Chapt5_Prob4_CelsiusToFahrenheitTable" << endl;
        cout << "5. Gaddis_9thEd_Chapt5_Prob5_SpeedConversionChart" << endl;
        cout << "6. Gaddis_9thEd_Chapt5_Prob6_OceanLevels" << endl;
        cout << "7. Gaddis_9thEd_Chapt5_Prob7_CircleAreas" << endl;
        cout << "8. Gaddis_9thEd_Chapt5_Prob8_PenniesForPay" << endl;
        cout << "9. Gaddis_9thEd_Chapt5_Prob9_WeightLoss" << endl;
        cout << "10. Gaddis_9thEd_Chapt5_Prob10_CaloriesBurned" << endl;
        cout << "Type 1 to 10 only" << endl << endl;
        cin >> probNum;
        cout << endl;
        
        // Output the results
        switch(probNum)
        {
            case 1 : 
            {
                // Define variables.
                int count = 1;
                char character = 32;
                
                // Use loop to display characters for ASCII codes 32-127.
                for (count >= 1; count <= 95; character++ && count++)
                {
                    cout << character << " ";
                    if (count % 16 == 0)
                    {
                        cout << endl;
                    }
                }
                break;
            }
            case 2 : 
            {
                // Define the variables.
                float numEntered;     // Integer the user inputs.
                float count;          // Starting number.
                float sum;            // Sum of the numbers.
                
                // Ask the user for a positive integer value.
                cout << "This program will complete the sum of all the integers from 1 up to"
                        << " the number you enter.\n";
                cout << "Please enter a positive integer: ";
                cin >> numEntered;
                while (numEntered <= 0)
                {
                    cout << "ERROR: Please enter a positive integer: ";
                    cin >> numEntered;
                }
                
                // Second loop to compute the sum of all the integers from 1-numEntered.
                for (count = 1; count <= numEntered ; ++count)
                {
                    sum = sum + count;
                }
                cout << "The sum is " << sum;
               break; 
            }
            case 3 : 
            {
                // Define variables.
                float distance, hours = 1, speed, userHours;
                
                // Ask the user to enter the speed of the vehicle, and how many hours it has traveled.
                cout << "This program will calculate how many miles a vehicle has traveled in"
                        << " x hours at y speed.\n";
                cout << "How fast was the vehicle going (in mph)? ";
                cin >> speed;
                cout << "How many hours has the vehicle been traveling? ";
                cin >> userHours;
    
                if(speed <= 0 || userHours <= 0)
                    cout << "Please restart the program and enter positive integers.";
                // Titles.
                if(speed >= 0 && userHours >= 0)
                    cout << left << setw(16) << "Hour" << "Miles Traveled\n";
    
                // Use a loop to display the total distance traveled at the end of each hour of the time period.
                for (hours >= 1; hours <= userHours ; hours++ )
                {
                    distance = hours * speed;
                    cout << left << setw(16) << hours  << distance << endl;
                }        
                break;
            }
            case 4 :
            {
                // Define variables.
                float fahrenheit, celsius = 0;
                int count;
                
                // Title.
                cout << left << setw(8) << "Celsius" << "Fahrenheit\n";
                
                // Use a loop to display a table of Celsius temperatures from 0 to 30 and their Fahrenheit equivalents.
                for (count = 1 ; count <= 30 ; count ++, celsius++)
                {
                    fahrenheit = ((1.8 * celsius) + 32);
                    cout << left << setw(8) << celsius << fahrenheit << endl;
                }
                break;
            }
            case 5 :
            {
                // Define variables.
                float mph, kph = 40;
                int count;
                
                // Title.
                cout << left << setw(25) << "Kilometers per hour" << "Miles per hour\n";
                
                // Create the table.
                for (count = 1 ; count <=9 ; count ++, kph+=10)
                {
                    mph = kph * 0.6214;
                    
                    cout << fixed << setprecision(3) << left << setw(25) << kph << mph << endl;
                }
                break;
            }
            case 6 : 
            {
                // Define the variables.
                double oceanRise = 3.1,      // mm the ocean rises each year.
                        years,
                        count = 1,
                        total;
                
                // Title.
                cout << left << setw(15) << "Millimeters" << "Years\n";
                
                // Create the chart.
                for (count >= 1; count <= 25 ; count++, years++)
                {
                    total = years * oceanRise;
                    
                    cout << left << setw(15) << fixed << setprecision(2)
                             << total << years << endl;
                }
            }
            case 7 :
            {
                // Define the variables.
                const float PI = 3.14;
                int radius = 1, count;
                float area;
                
                // Title.
                cout << left << setw(10)
                        << "Radius" << "Area\n";
                
                // Chart.
                for (count = 1; count <= 8; count++, radius++)
                {
                    area = PI * pow(radius, 2);
                    
                    cout << fixed << setprecision(2) << left << setw(10)
                            << radius << area << endl;
                }
                break;
            }
            case 8 :
            {
                    // Define the variables.
                const float PENNY = .01;
                int days = 1, count = 1, inputDays;
                float salary, total;
    
                // Ask how many days the employee works.
                cout << "This program will calculate a worker's pay if they were paid in pennies.\n";
                cout << "How many days did the employee work this month? ";
                cin >> inputDays;
    
                // Validate that it is between 1 and 31.
                while (days < 1 || days > 31)
                {
                    cout << "Please enter a number between 1 and 31.";
                    cin >> inputDays;
                }
    
                // Table title.
                cout << left << setw(15) << "Days" << left << setw(15) << "Salary" << "Total\n";
    
                // Create the table.
                for (count >= 1; count <= 31; count++, days++)
                {
                    salary = PENNY * (pow(2, count - 1));
                    total = salary * days;
        
                    cout << left << setw(15) << fixed << setprecision(2)
                            << days << left << setw(15) << salary << total << endl;
                }
                break;
            }
            case 9 :
            {
                // Define variables.
                float weight;
                int count = 1;
                
                // Ask for weight.
                cout << "If a moderately active person cut their calorie intake by 500 calories a day,"
                        << " they can lose about 4 lbs per month.\n";
                cout << "This program will calculate how much weight you will lose if you were to try this diet.\n";
                cout << "Enter your current weight: ";
                cin >> weight;
                
                // Table title.
                cout << left << setw(10)
                        << "Month #" << "Weight\n";
                
                // Create the table.
                for (count >= 1; count <= 6; count ++, weight -= 4)
                {
                    cout << left << setw(10)
                            << count << weight << endl; 
                }
                break;
            }
            case 10 :
            {
                // Define variables.
                const float CALS =3.9;
                int time = 5;
                float calsBurned;
                
                // Chart title.
                cout << left << setw(10) << "Time" << "Calories Burned\n";
                
                // Create the chart.
                for (time = 5 ; time <= 30; time += 5)
                {
                    calsBurned = CALS * time/60;
                    
                    cout << left << setw(10)
                            << time << calsBurned << endl;
                }
                break;
            }
            default : cout << "You chose to exit the program.\n";
        } break;
    } while(probNum >= 1 && probNum <= 10);
    return 0;
}

