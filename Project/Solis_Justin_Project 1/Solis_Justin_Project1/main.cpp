/* 
 * File:   main.cpp
 * Author: Justin Solis
 * Created on February 1, 2018. 2:07 p.m.
 * Purpose:  Cross one-side or the other
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    // Random number seed.
    unsigned seed;
    seed = time(0);
    srand(seed);
    
    // Output file.
    ofstream outputFile;
    outputFile.open("game.txt");
    // Initialize variables.
    int input, c1, c2, c3, c4, c5, d1, d2;
    float pHand, dHand;
    string pC="Your cards : ", dC="\nDealers cards : ", win="\nYou win!\n", lose="\nYou lose!\n";
    bool check, check1;
    char a;
    
    // State what the game will do
    cout<<"Blackjack\n"
            <<"The goal of this game is to get as close to, or hit 21 while staying above the dealer.\n"
            <<"1. Start game.\n"<<"2. End program.\n\n";
    cin>>input;
    cout<<endl;
    
    if(input==1)
        check=true;
    else if(input==2)
        check=false;
    else if(!(input==1 || input==2)){
        cout<<"Please enter either 1 or 2.";
        cin>>input;
    }
    
    // Set the cards as random, and make card>10=10.
    c1 = rand()%13+1;
    c2 = rand()%13+1;
    c3 = rand()%13+1;
    c4 = rand()%13+1;
    c5 = rand()%13+1;
    d1 = rand()%13+1;
    d2 = rand()%13+1;
    
    if(c1==10)
        c1=11;
    if(c1>10)
        c1=10;

    if(c2==10)
        c2=11;
    if(c2>10)
        c2=10;
    
    if(c3==10)
        c3=11;
    if(c3>10)
        c3=10;
    
    if(c4==10)
        c2=11;
    if(c4>10)
        c4=10;
    
    if(d1==10)
        d1=11;
    if(d1>10)
        d1=10;
    
    if(d2==10)
        d2=11;
    if(d2>10)
        d2=10;
    
    // Play the game.
    while (check==true){
        pHand = c1+c2;                                                          // 2 cards.
        dHand = d1+d2;
        check1=false;
        if(pHand<21){
            cout<<fixed<<setprecision(1)<<"Your hand : "<<pHand<<endl<<"Dealers hand : "<<d1<<" and x\n";
            cout<<"Would you like to hit?\n1. Yes\n2. No\n";
            cin>>input;
            check1=true;
        }
        else if(pHand==21 && dHand<pHand){
            cout<<"Your hand : "<<c1<<" "<<c2<<" = "<<pHand<<endl<<"Dealers hand : "
                        <<d1<<" "<<d2<<" = "<<dHand<<win;
            outputFile<<win;
            check1=false;
        }
        else if(pHand==21 && dHand==pHand){
            cout<<"Your hand : "<<c1<<" "<<c2<<" = "<<pHand<<endl<<"Dealers hand : "
                    <<d1<<" "<<d2<<" = "<<dHand<<lose;
            check1=false;
            outputFile<<lose;
        }
                
        while (check1==true){
            if(input==1){
                // Add another card to pHand.
                pHand += c3;                                                    // 3 cards.
                if(pHand<21 && dHand<=21){
                    cout<<"Your hand : "<<pHand<<endl<<"Dealers hand : "<<d1<<" and x\n";
                    cout<<"Would you like to hit?\n1. Yes\n2. No\n";
                    cin>>input;

                    if(input==1){
                        do{
                            pHand += c4;                                        // 4 cards.
                        } while (pHand==c1+c2+c3);
                        if(pHand<21 && dHand<=21){
                            cout<<"Your hand : "<<pHand<<endl<<"Dealers hand : "<<d1<<" and x\n";
                            cout<<"Would you like to hit?\n1. Yes\n2. No\n";
                            cin>>input;
                            
                            // Add another card to pHand.
                            pHand += c5;                                        // 5 cards.
                            switch(input){
                                case 1 : cout<<"Your hand : "<<pHand<<endl<<"Dealers hand : "<<d1<<" and x\n";
                            }
                            if(input==1){
                                if(pHand<21 && dHand<=21){
                                    cout<<"Would you like to hit?\n1. Yes\n2. No\n";
                                    cin>>input;
                                }
                                else if(pHand>21){
                                    cout<<pC<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" = "<<pHand<<dC
                                            <<d1<<" "<<d2<<" = "<<dHand<<endl<<lose;
                                    outputFile<<lose;
                                }
                                else if(pHand<=21 && dHand>21){
                                    cout<<pC<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" = "<<pHand<<dC
                                            <<d1<<" "<<d2<<" = "<<dHand<<endl<<win;
                                    outputFile<<win;
                                }
                                else if(pHand==21 && dHand<21){
                                    cout<<pC<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" + "<<pHand<<dC
                                            <<d1<<" "<<d2<<" + "<<dHand<<endl<<win;
                                    outputFile<<win;
                                }
                            }
                            else if(input==2 && pHand<21 && dHand<pHand){
                                cout<<pC<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" = "<<pHand<<dC
                                        <<d1<<" "<<d2<<" = "<<dHand<<endl<<win;
                                outputFile<<win;
                                input=0;
                            }
                            else if(input==2 && pHand<21 && dHand>pHand){
                                cout<<pC<<c1<<" "<<c2<<" "<<c3<<" "<<c4<< " = "<<pHand<<dC
                                        <<d1<<" "<<d2<<" = "<<dHand<<endl<<lose;
                                outputFile<<lose;
                                input=0;
                            }
                        }
                        else if(pHand>21){
                            cout<<"Your cards: "<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" = "<<pHand<<"\nDealer's cards: "
                                    <<d1<<" "<<d2<<" = "<<dHand<<endl<<lose;
                            outputFile<<lose;
                        }
                        else if(pHand<=21 && dHand>21){
                            cout<<"Your cards: "<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" = "<<pHand<<"\nDealer's cards: "
                                    <<d1<<" "<<d2<<" = "<<dHand<<endl<<win;
                            outputFile<<win;
                        }
                        else if(pHand==21 && dHand<21){
                            cout<<"Your cards: "<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" = "<<pHand<<"\nDealer's cards: "
                                    <<d1<<" "<<d2<<" = "<<dHand<<endl<<win;
                            outputFile<<win;
                        }
                    }
                    if(input==2 && pHand<21 && dHand<pHand){
                        cout<<"Your cards : "<<c1<<" "<<c2<<" "<<c3<<" = "<<pHand<<"\nDealer's cards: "
                                <<d1<<" "<<d2<<" = "<<dHand<<endl<<win;
                        outputFile<<win;
                        input=0;
                    }
                    else if(input==2 && pHand<21 && dHand>pHand){
                        cout<<"Your cards : "<<c1<<" "<<c2<<" "<<c3<<" = "<<pHand<<"\nDealer's cards: "
                                <<d1<<" "<<d2<<" = "<<dHand<<endl<<lose;
                        outputFile<<lose;
                        input=0;
                    }
                    else if(!(input==1 || input==2 || input==0)){
                        cout<<"Please enter either 1 or 2.";
                        cin>>input;
                    }
                }
                else if(pHand>21){
                    cout<<"Your cards: "<<c1<<" "<<c2<<" "<<c3<<" = "<<pHand<<"\nDealer's cards: "
                            <<d1<<" "<<d2<<" = "<<dHand<<endl<<lose;
                    outputFile<<lose;
                }
                else if(pHand<=21 && dHand>21){
                    cout<<"Your cards: "<<c1<<" "<<c2<<" "<<c3<<" = "<<pHand<<"\nDealer's cards: "
                            <<d1<<" "<<d2<<" = "<<dHand<<endl<<win;
                    outputFile<<win;
                }
                else if(pHand==21 && dHand<21){
                    cout<<"Your cards: "<<c1<<" "<<c2<<" "<<c3<<" = "<<pHand<<"\nDealer's cards: "
                            <<d1<<" "<<d2<<" = "<<dHand<<endl<<win;
                    outputFile<<win;
                }
            }
            else if(input==2 && pHand<21 && dHand<pHand){
                cout<<"Your cards : "<<c1<<" "<<c2<<" = "<<pHand<<"\nDealer's cards: "
                        <<d1<<" "<<d2<<" = "<<dHand<<endl<<win;
                outputFile<<win;
                input=0;
            }
            else if(input==2 && pHand<21 && dHand>pHand){
                cout<<"Your cards : "<<c1<<" "<<c2<<" = "<<pHand<<"\nDealer's cards: "
                        <<d1<<" "<<d2<<" = "<<dHand<<endl<<lose;
                outputFile<<lose;
                input=0;
            }
            else if(!(input==1 || input==2)){
                cout<<"Please enter either 1 or 2.";
                cin>>input;
            }
            check1=false;
        }
        check=false;
    }
    return 0;
}