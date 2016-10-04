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
    float waveL;
    string 
    
    
    cout<<"Please input the wave length in meters?"<<endl;
    cout<<"This program determines the band of radiation"<<endl;
    cin>>waveL;
    
    if      (waveL>1e-2f)cout<<"Radio Band"<<endl;
    else if (waveL>1e-3f)cout<<"MicroWave Band"<<endl;
    else if (waveL>4e-7f)cout<<"Visible Band"<<endl;
    else if (waveL>1e-8f)cout<<"Ultra-Violet Band"<<endl;
    else if (waveL>1e-11f) cout<<"X-Ray Band"<<endl;
    else                   cout<<"Gamma-ray"<<endl;
    
    return 0;
}