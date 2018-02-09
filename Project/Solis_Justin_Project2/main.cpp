/* 
 * File:   main.cpp
 * Author: Justin Solis
 * This is a game of Blackjack.
 *
 * Created on February 6, 2018, 4:31 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

// Function prototypes.
void game();
int shuffle(int card[], int DECK);
int win(int pHand, int dHand, int card[], int& DECK, int count=0);
int lose(int pHand, int dHand, int card[], int& DECK, int count=0);
bool end();

int main(int argc, char** argv) {
    
    // Initialize variables.
    int input;
    bool inp;
    
    // State what the game will do.
    cout<<"Blackjack\n"
            <<"The goal of this game is to get as close to, or hit 21 while staying above the dealer.\n"
            <<"1. Start game.\n2. End program.\n";
    cin>>input;
    cout<<endl;
    inp=true;
    
    //Input validation.
    do{
    switch(input){
        case 1 : game();
                inp=false; break;
        case 2 : end();
                inp=false; break;
        default : cout<<"Please enter 1 or 2.\n";
                    cin>>input; break;
    }
    } while(inp==true);

    if (end()==false)
        exit(0);
    
    return 0;
}

//--------------------//
//-----Start game-----//
//--------------------//
void game(){
    // Initialize variables.
    static int DECK = 15;
    int card[DECK] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10, 11, 12, 13, 14, 15}, input, 
            count = 0, timesHit = 3;
    float pHand, dHand;
    bool play = true;
    
    // Call the shuffle function.
    card[DECK]=shuffle(card, DECK);
    
    // Player and dealer start with two cards.
    pHand = card[0]+card[1];
    dHand = card[14]+card[15];
        
    cout<<"Your hand: "<<card[0]<<" "<<card[1]<<" = "<<pHand<<endl;
    cout<<"Dealers hand: "<<card[14]<<" "<<"and x."<<endl;
    
    // Checks if player's hand starts at 21/above 21.
    if(pHand==21 && dHand<pHand){
        win(pHand, dHand, card, DECK, count);
        play=false;
    }
    else if(pHand==21 && dHand==pHand){
        lose(pHand, dHand, card, DECK, count);
        play=false;
    }
    else if(pHand>21 && dHand<pHand){
        lose(pHand, dHand, card, DECK, count);
        play=false;
    }
    
    // This loop controls the game. 
   while(play==true){
        // Ask the user if they want to hit.
        cout<<"Would you like to hit?\n1. Hit\n2. End game.\n";
        cin>>input;
        cout<<endl;
        
        //---------------------//
        //----Controls hits----//
        //---------------------//
        if(input==1){
            if(pHand<21){
                for(int i=2; i<timesHit; i++){
                    if(pHand<21){
                    pHand += card[i];
                    cout<<"New card: "<<card[i]<<endl;
                    cout<<"Your hand: "<<pHand<<endl;
                    cout<<"Dealers hand: "<<card[14]<<" "<<"and x."<<endl<<endl;
                    count++;
                    }
                    //------------------------------//
                    //--------Win conditions--------//
                    //------------------------------//
                    if(input==2 && pHand<=21 && dHand<pHand){
                        win(pHand, dHand, card, DECK, count);
                        play=false;
                    }
                    if(input==2 && pHand<=21 && dHand>21){
                        win(pHand, dHand, card, DECK, count);
                        play=false;
                    }
                    if(pHand==21 && dHand<pHand){
                        win(pHand, dHand, card, DECK, count);
                        play=false;
                    }
                    if(pHand ==21 && dHand>21){
                        win(pHand, dHand, card, DECK, count);
                        play=false;
                    }
                    //-------------------------------//
                    //--------Lose conditions--------//
                    //-------------------------------//
                    if(pHand<dHand && dHand<21){
                        lose(pHand, dHand, card, DECK, count);
                        play=false;
                    }
                    if(pHand>21 && dHand<pHand){
                        lose(pHand, dHand, card, DECK, count);
                        play=false;
                    }
                    if(pHand==21 && pHand==dHand){
                        lose(pHand,dHand, card, DECK, count);
                        play=false;
                    }
                }
            }
        }
        
        else if(input==2 && pHand<=21 && dHand<pHand){
            win(pHand, dHand, card, DECK, count);
            play=false;
        }
        else if(input==2 && pHand<=21 && dHand>21){
            win(pHand, dHand, card, DECK, count);
            play=false;
        }
        else if(input==2 && pHand<dHand && dHand<21){
            lose(pHand, dHand, card, DECK, count);
            play=false;
        }
        else if(input==2 && pHand>21 && dHand<pHand){
            lose(pHand, dHand, card, DECK, count);
            play=false;
        }
        else if(input==2 && pHand==dHand){
            lose(pHand, dHand, card, DECK, count);
            play=false;
        }
    }
    if(play==false)
        end();
}

//--------------------//
//-Controls Shuffling-//
//--------------------//
int shuffle(int card[], int DECK){
    // Random number seed and deck.
    srand(static_cast<unsigned int>(time(0)));
    
    // Set the cards as random, make card>10=10.
    for (int i=0; i<DECK; i++){
        card[i]=rand()%13+1;
        if(card[i]>10)
            card[i] = 10;
        if(card[i]==1)
            card[i] = 11;
    }
    return card[DECK];
}

//--------------------//
//---Win and output---//
//--------------------//
int win(int pHand, int dHand, int card[], int &DECK, int count){
    // Output file.
    ofstream outputFile;
    outputFile.open("game.txt");
    
    // Initialize variables.
    string win = "You win!";
    count += 2;
    
    //Output users hand
    if(count<=3){
        cout<<left<<setw(15)<<"Your cards: ";
        outputFile<<left<<setw(15)<<"Your cards: ";
        for(int i=0; i<count; i++){
            cout<<card[i]<<" ";
            outputFile<<card[i]<<" ";
        }
        cout<<" = "<<pHand;
        cout<<endl;
    }
    
    if(count>3){
        cout<<left<<setw(15)<<"Your hand = "<<pHand<<endl;
        outputFile<<setw(15)<<"Your hand = "<<pHand<<endl;
    }
    
    //Output dealers hand
        cout<<left<<setw(15)<<"Dealers cards: "<<card[14]<<" "<<card[15]<<
                " = "<<dHand<<endl;
        cout<<endl<<win;
        outputFile<<left<<setw(15)<<"Dealers cards: "<<card[14]<<" "<<card[15]<<
                " = "<<dHand<<endl;
        outputFile<<endl<<win;
        outputFile.close();
}

//---------------------//
//---Lose and output---//
//---------------------//
int lose(int pHand, int dHand, int card[], int &DECK, int count){
    //Output file.
    ofstream outputFile;
    outputFile.open("game.txt");
    
    //Initialize variables.
    string lose = "You lose. =[";     
    count += 2;
    
    //Output user's hand
    if(count<=3){
        cout<<left<<setw(15)<<"Your cards: ";
        outputFile<<left<<setw(15)<<"Your cards: ";
            for(int i=0; i<count; i++){
                cout<<card[i]<<" ";
                outputFile<<card[i]<<" ";
            }
        cout<<" = "<<pHand;
        cout<<endl;
        }
    
    if(count>3){
        cout<<left<<setw(15)<<"Your hand = "<<pHand<<endl;
        outputFile<<left<<setw(15)<<"Your hand = "<<pHand<<endl;
    }
    
    //Output dealers hand
        cout<<left<<setw(15)<<"Dealers cards: "<<card[14]<<" "<<card[15]<<
                " = "<<dHand<<endl;
        cout<<endl<<lose;
        outputFile<<" = "<<pHand;
        outputFile<<endl;
        outputFile<<left<<setw(15)<<"Dealers cards: "<<card[14]<<" "<<card[15]<<
                " = "<<dHand<<endl;
        outputFile<<lose;
        outputFile.close();
}

//------------------//
//---End the game---//
//------------------//
bool end(){
    return false;
}