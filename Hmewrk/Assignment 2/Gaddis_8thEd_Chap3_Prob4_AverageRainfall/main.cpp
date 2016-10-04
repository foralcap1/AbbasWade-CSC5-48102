/* 
   File:   main
   Author: Abbas, Wade
   Created on September, 27th 2016, 5:41 PM
   Purpose: To Get An Average of Rainfall in any Named Month
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //For fixed point notation, one decimal point percision
#include <string>     //For adding the string input/outputs
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string month1,month2,month3;         //Months are entered here as strings.
    float  mRF1,mRF2,mRF3;               //Lets user input amount of rainfall in 
                                         //all three months separately.
    float  totRF,                        //Total of rainfall added together.
           avgRF;                        //Average of all rainfall in months. 
   
  
    //First month input
    cout<<"Please enter the name of the first month you wish "; 
    cout<<"to submit"<<endl;
    cin>>month1;
    
    //First month rainfall
    cout<<"What was this month's recorded rainfall?"<<endl;
    cin>>mRF1;
    
    //Second month input
    cout<<"\nPlease enter the name of the second month you wish "; 
    cout<<"to submit"<<endl;
    cin>>month2;
    
    //Second month rainfall
    cout<<"What was that month's recorded rainfall?"<<endl;
    cin>>mRF2;
    
    //Third month input
    cout<<"\nPlease enter the name of the third month you wish "; 
    cout<<"to submit"<<endl;
    cin>>month3;
    
    //Third month rainfall
    cout<<"What was this last month's recorded rainfall?"<<endl;
    cin>>mRF3;

    //Processing rainfall all together 
    totRF=mRF1+mRF2+mRF3; 
    
    cout<<"\nThe total amount of rainfall in these 3 months: "<<setprecision(2)
    <<fixed<<totRF<<endl;
    
    //Average rainfall that was within the 3 months given
    avgRF=totRF/3;
    
    cout<<"\n--------------------------------------------------------\n"<<endl;
    cout<<"Your average rainfall for "<<month1<<", "<<month2<<
        ",and "<<month3<<" was: "<<avgRF<<endl;

    //Exit Program
    return 0;
}