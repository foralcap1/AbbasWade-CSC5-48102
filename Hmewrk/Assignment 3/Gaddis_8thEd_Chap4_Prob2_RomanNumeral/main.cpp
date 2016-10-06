/* 
   File:   main
   Author: Abbas, Wade
   Created on October, 4th 2016, 5:44 PM
   Purpose: To convert a number between one and ten to Roman Numeral
 */

//System Libraries
#include <iostream>   //Input/Output object
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short input; //users number input
    
    //Ask user to input value between one and ten
    cout<<"Please input value between 1-10"<<endl;
    cin>>input;
    
    //Respond to input with switch statement
    switch (input){
            case 1 : cout<<"The Roman numeral for "<<input<<" is I.\n";
                       break;
            case 2 : cout<<"The Roman numeral for "<<input<<" is II.\n";
                       break;
            case 3 : cout<<"The Roman numeral for "<<input<<" is III.\n";
                       break;
            case 4 : cout<<"The Roman numeral for "<<input<<" is IV.\n";
                       break;
            case 5 : cout<<"The Roman numeral for "<<input<<" is V.\n";
                       break;
            case 6 : cout<<"The Roman numeral for "<<input<<" is VI.\n";
                       break;
            case 7 : cout<<"The Roman numeral for "<<input<<" is VII.\n";
                       break;
            case 8 : cout<<"The Roman numeral for "<<input<<" is VIII.\n";
                       break;
            case 9 : cout<<"The Roman numeral for "<<input<<" is IX.\n";
                       break;
            case 10 : cout<<"The Roman numeral for "<<input<<" is X.\n";
                       break;
            default   : cout<<"You did NOT enter a number 1-10!\n";
        }
    //Exit Program
    return 0;
}