/* 
   File:   main
   Author: Abbas, Wade
   Created on September, 27th 2016, 4:35 PM
   Purpose: To Get An Average on All 5 Student Test Scores
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
    float ts1,     //Shows all of test scores of first test
          ts2,     //
          ts3,     //
          ts4,     //     
          ts5,     //through last fifth test.
          totScre, //Total of all scores added together.
          avRg; //Average of all scores. 
   
  
    //Test score number 1 input
    cout<<"Please enter the 5 test scores you wish to submit"<<endl;
    cout<<"Test Score number 1?"<<endl;
    cin>>ts1;
    
    //Test score number 2 input
    cout<<"Test Score number 2?"<<endl;
    cin>>ts2;
    
    //Test score number 3 input
    cout<<"Test Score number 3?"<<endl;
    cin>>ts3;
    
    //Test score number 4 input
    cout<<"Test Score number 4?"<<endl;
    cin>>ts4;
    
    //Test score number 5 input 
    cout<<"Test Score number 5?"<<endl;
    cin>>ts5;
    
    //Processing all scores together 
    totScre=ts1+ts2+ts3+ts4+ts5; 
    
    cout<<"Your total score from all 5 tests is: "<<setprecision(2)<<fixed<<
    totScre<<endl;
    
    //Your average from all the total test scores combined
    avRg=totScre/5;
    
    cout<<"---------------------------------------------"<<endl;
    cout<<"Your average score from all 5 tests is: "<<avRg<<endl;

    //Exit Program
    return 0;
}