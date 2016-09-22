/* 
   File:   main
   Author: Abbas, Wade
   Created on September, 20th 2016, 12:12 PM
   Purpose: 
 */

//System Libraries
#include <iostream> 
#include <iomanip> //formatting 
#include <cmath> //used to trigonometric functions Sin Cos Tan

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PI=4*atan(1.0); //PI
const float CNVDEGR=PI/180; //conversion from degrees to radius 



//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float deg, radians;
    
   
    //Input values
    
    deg=0;
    radians=deg*CNVDEGR;//
  
    
    //Display Output
    cout<<"[ Degrees, Radians,    Sine,  Cosine, Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
           
    //plus deg 5
    deg+=5;
    radians=deg*CNVDEGR;//
  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //plus 3
    deg+=5;
    radians=deg*CNVDEGR;//
  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    
    deg+=5;
    radians=deg*CNVDEGR;//
  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    deg+=5;
    radians=deg*CNVDEGR;//
  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    deg+=5;
    radians=deg*CNVDEGR;//
  
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    //Exit Program
    return 0;
}