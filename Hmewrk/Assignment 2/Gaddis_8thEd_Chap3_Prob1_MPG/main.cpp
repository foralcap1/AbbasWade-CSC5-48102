/* 
   File:   main
   Author: Abbas, Wade
   Created on September, 27th 2016, 8:22 PM
   Purpose: To Calculate how many miles per gallon any User's Car would get 
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
    unsigned short carGal,fMiles; //Gallons in car, gal. can go on w/ full tank  
    float          dMiles;        //Drivable miles per gallon
    
    //User inputs how many gallons his car has 
    cout<<"How many gallons of gas does your car hold?"<<endl;
    cin>>carGal;
    
    //User inputs how many miles his car can go with a full tank of gas
    cout<<"How many miles can you go on a full tank of gas?"<<endl;
    cin>>fMiles;
    
    //Calculate and Display the MPG that the User's car may go per gallon
    dMiles=fMiles/carGal;
    
    cout<<"Your car is able to go "<<dMiles<<" miles per gallon of gas."<<endl;
    
   
            
    
    
    return 0;
}

