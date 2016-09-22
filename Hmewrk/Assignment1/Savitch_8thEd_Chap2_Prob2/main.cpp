/* 
   File:   main
   Author: Abbas, Wade
   Created on September, 20th 2016, 11:22 AM
   Purpose: Iteration to Find Square Root
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //square root function
#include <iomanip>    //format library
#include <cstdlib>    //random number seed
#include <ctime>      //time to set random number seed

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float MAXRAND=pow(2,31)-1; //max signed positive value for int

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    float n,guess,r;
    float scale=90, shift=10;
    unsigned short counter=0;
    //Input values -float  random number between (10,100) vs
   //               integer random number rand( )%scale+shift (10,1000)
    n=rand()/MAXRAND*scale+shift;
    guess=n/2;
    
    //display the initialization
    cout<<"The Number to Find the Square Root of = "<<n<<endl;
    cout<<"The Initial Guess                     = "<<guess<<endl;
    
    //First Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter +=1;
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
            
    
//second pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
   
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //third pass
    
     r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
   
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //fourth pass
     r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
   
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //fifth pass
    
     r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
   
    cout<<"Pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //answer is 
    cout<<"The sqrt of ("<<n<<")="<<sqrt(n)<<endl;
    //Exit Program
    
    
    return 0;
}