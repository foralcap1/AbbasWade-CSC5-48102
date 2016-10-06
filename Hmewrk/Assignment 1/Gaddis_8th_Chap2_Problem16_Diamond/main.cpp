/* 
  File:   main.cpp
  Author: Abbas, Wade
 Purpose: To Draw a Diamond Pattern Using Any Character
  Created on September 20, 2016, 11:03 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {

 char s=' ';//The space character
    char x;    //Character used to create the diamond
    
    //Input values
    cout<<"What character would you like to use to make the diamond shape?"<<endl;
    cout<<"Input?"<<endl; //input *
    cin>>x;
    
    //Process values -> Map inputs to Outputs
    
           // The Diamond
    cout<<s<<s<<s<<x<<s<<s<<s<<endl;
    cout<<s<<s<<x<<x<<x<<s<<s<<endl;
    cout<<s<<x<<x<<x<<x<<x<<endl;
    cout<<x<<x<<x<<x<<x<<x<<x<<endl;
    cout<<s<<x<<x<<x<<x<<x<<s<<endl;
    cout<<s<<s<<x<<x<<x<<s<<s<<endl;
    cout<<s<<s<<s<<x<<s<<s<<s<<endl;
    

    
    
    
    
    
    return 0;
}

