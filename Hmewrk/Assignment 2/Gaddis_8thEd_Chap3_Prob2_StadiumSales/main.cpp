/* 
   File:   main
   Author: Abbas, Wade
   Created on September, 27th 2016, 5:41 PM
   Purpose: To Get The Total Sales Amount of Each Seating Section in a Stadium
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
    unsigned short priceA,priceB,priceC, //Price of section of seats
                   soldA,soldB,soldC;    //Input amount of tickets sold
    float          tsA,tsB,tsC,tSales;   //Total sales from all seats                         
   
    //Prices of different seating sections
    priceA=15;
    priceB=12;
    priceC=9;
            
    //First seating section sales
    cout<<"How many tickets did Seating Section A sell?"<<endl;
    cin>>soldA;
    
    //Second seating section sales
    cout<<"How many tickets did Seating Section B sell?"<<endl;
    cin>>soldB;
    
    //Third seating section sales
    cout<<"How many tickets did Seating Section C sell?"<<endl;
    cin>>soldC;
    
    //Calculate each section individually
    tsA=priceA*soldA;
    tsB=priceB*soldB;
    tsC=priceC*soldC;
    tSales=tsA+tsB+tsC;
    
    //Grand total of seating sections individually
    cout<<setprecision(2)<<fixed;
    cout<<"Section A sold : $"<<tsA<<endl;
    cout<<"Section B sold : $"<<tsB<<endl;
    cout<<"Section C sold : $"<<tsC<<endl;
    cout<<"_______________________________"<<endl;
    cout<<"For a Grand Total\n";
    cout<<"in stadium sales of : $"<<tSales<<endl;
    

    //Exit Program
    return 0;
}