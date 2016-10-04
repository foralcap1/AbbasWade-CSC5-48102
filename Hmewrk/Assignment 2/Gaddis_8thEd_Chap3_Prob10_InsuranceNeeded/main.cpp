/* 
   File:   main
   Author: Abbas, Wade
   Created on September, 27th 2016, 7:27 PM
   Purpose: To Find Out How Much Insurance Is Needed To Protect Your Home
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //For fixed point notation, one decimal point percision
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float pNeed,      //Percent needed to have enough money to rebuild house 
          costH,      //Cost of User's house
          saveH;      //How much money in dollar amount you would need insured 
   
    //Percent that is needed to rebuild a damaged home 
    pNeed=.8;
    
    //User inputs how much their house costs
    cout<<"How much money is your home currently worth?"<<endl;
    cin>>costH;
    
    //Given amount needed to save damaged home
    saveH=pNeed*costH;
    
    //Output the 80 percent amount needed for the resident
    cout<<setprecision(2)<<setw(16)<<fixed;
    cout<<"At the price of your home, you will need to have at least\n$"<<saveH
        <<", saved to rebuild your damaged home."<<endl;
    
    //Exit Program
    return 0;
}