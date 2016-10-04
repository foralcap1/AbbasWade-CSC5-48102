/* 
   File:   main
   Author: Abbas, Wade
   Created on September, 29th 2016, 12:04 PM
   Purpose: To Determine the Band of Radiation From the Wavelength 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float     waveLI; //wave length user puts in 
    string    finWL; //the actual wave length
    
    
    cout<<"Please input the wave length in meters?"<<endl;
    cout<<"This program determines the band of radiation"<<endl;
    cin>>waveLI;
    
    finWL=(waveLI>=1e-2f)?"Radio Band":
          (waveLI>=1e-3f)?"Micro-Wave Band":
          (waveLI>=4e-7f)?"Visible Band":
          (waveLI>=1e-8f)?"Ultra-Violet Band":
          (waveLI>=1e-11f)?"X-Ray Band":"Gamma-Ray Band";
    
    cout<<"Your wave length is "<<finWL<<endl;
    
    
    return 0;
}