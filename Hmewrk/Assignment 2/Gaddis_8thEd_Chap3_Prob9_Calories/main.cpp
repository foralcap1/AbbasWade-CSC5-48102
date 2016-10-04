/* 
   File:   main
   Author: Abbas, Wade
   Created on September, 27th 2016, 3:45 PM
   Purpose: To Report How Many Calories Were Eaten Per Cookie
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short cookies,  //Input number of cookies user says they have 
                             //eaten. 
                   calPC,    //Calories per cookie
                   totCal;   //Total number of calories consumed from input of 
                             //cookies.
    
            
    
    //Input values 
    cookies,calPC=100;
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<"Type how many cookies you consumed out of the bag\n";
    cout<<"Then press ENTER "<<endl;
    cin>>cookies;
    totCal=calPC*cookies;
    
    cout<<"You have consumed a total of: "<<totCal<<" calories."<<endl;
    
    //Exit Program
    return 0;
}