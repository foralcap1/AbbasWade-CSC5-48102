/* 
   File:   main
   Author: Abbas, Wade
   Created on October, 4th 2016, 4:18 PM
   Purpose: To Determine a User's Rectangle Area given Measurements
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
    float          w1, l1, p1, a1; //Float for users input of width, and length 
                                   // and our given area and perimeter for 1st shape
    float          w2, l2, p2, a2; //Information for the second shape 
    
    //Ask the user to input the following: length and width of the first shape
    cout<<"Please enter the length of the first rectangle"<<endl;
    cin>>l1;
    cout<<"Now please enter the width of the first rectangle"<<endl;
    cin>>w1;
    
    //Calculate the given inputs for the area and perimeter of first rectangle 
    a1=l1*w1;
    p1=(2*l1)+(2*w1);
    
    //Ask the user to input the following: length and width of the second shape
    cout<<"Please enter the length of the second rectangle"<<endl;
    cin>>l2;
    cout<<"Now please enter the width of the second rectangle"<<endl;
    cin>>w2;
    
    //Calculate the given inputs for the area and perimeter of first rectangle 
    a2=l2*w2;
    p2=(2*l2)+(2*w2);
    
    cout<<"\nThe area and perimeter for the first rectangle is: Area: "<<a1
        <<" and the perimeter is: Perimeter: \n"<<p1<<endl;
    cout<<"The area and perimeter for the second rectangle is: Area: "<<a2
        <<" and the perimeter is: Perimeter: \n"<<p2<<endl;
        if      (a1 > a2)
            cout<<"\nArea of the first rectangle is the greatest."<<endl;
        else if (a2 > a1)
            cout<<"\nArea of the second rectangle is the greatest."<<endl;
        else if (a1 == a2)
            cout<<"\nThe areas of both rectangles are equal to one another"<<endl;
        
    
    //Exit Program
    return 0;
}