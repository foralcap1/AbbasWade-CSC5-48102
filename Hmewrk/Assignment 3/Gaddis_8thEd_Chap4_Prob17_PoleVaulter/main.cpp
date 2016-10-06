/* 
   File:   main
   Author: Abbas, Wade
   Created on October, 4th 2016, 7:51 PM
   Purpose: Record a Pole Vaulters name, date and how high he vaulted and tell 
            him the best times in order 
 */

//System Libraries
#include <iostream>   //Input/Output object
#include <iomanip>    //setting coins precision 
#include <string>     //pole vaulters name 
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string         name;           //pole vaulters name 
    unsigned short d1,d2,d3,       //days which the vaulter vaulted
                   m1,m2,m3,       //months in which the vaulter vaulted 
                   y1,y2,y3;       //years the vaulter vaulted 
    float          met1,met2,met3; //the amount of meters he vaulted
    
    //Ask the user what his name is
    cout<<"What is your name Vaulter?"<<endl;
    getline(cin, name);
    
    //Ask the user for the information of jump 1
    cout<<"\nWhat was the month in two digit format you jumped your first jump?\n";
    cin>>m1;
    cout<<"What was the day in two digit format you jumped your first jump?\n";
    cin>>d1;
    cout<<"What was the year in two digit format you jumped your first jump?\n";
    cin>>y1;
    cout<<"What was the height in meters on that jump? Please only input 2.0-5.0\n";
    cin>>met1;
    //If the user uses any number that is out of the range that we specified we
    //we kill the program
        if ((met1 < 2.0) || (met1 > 5.0))
          {
		cout << "We told you to enter between 2.0-5.0 meters!!" << endl;
		return 0;
	}
    
    //Ask the user for the information of jump 2
    cout<<"\nWhat was the month in two digit format you jumped your second jump?\n";
    cin>>m2;
    cout<<"What was the day in two digit format you jumped your second jump?\n";
    cin>>d2;
    cout<<"What was the year in two digit format you jumped your second jump?\n";
    cin>>y2;
    cout<<"What was the height in meters on that jump? Please only input 2.0-5.0\n";
    cin>>met2;
        if ((met2 < 2.0) || (met2 > 5.0))
          {
		cout << "We told you to enter between 2.0-5.0 meters!!" << endl;
		return 0;
	}
    
    //Ask the user for the information of jump 3
    cout<<"\nWhat was the month in two digit format you jumped your third jump?\n";
    cin>>m3;
    cout<<"What was the day in two digit format you jumped your third jump?\n";
    cin>>d3;
    cout<<"What was the year in two digit format you jumped your third jump?\n";
    cin>>y3;
    cout<<"What was the height in meters on that jump? Please only input 2.0-5.0\n";
    cin>>met3;
        if ((met3 < 2.0) || (met3 > 5.0))
          {
		cout << "We told you to enter between 2.0-5.0 meters!!" << endl;
		return 0;
	}
    
    //Now output the information 
    cout<<"\n"<<name<<", you have had three jumps."<<endl;
    if      ((met1 > met2) && (met2 > met3) && (met1 > met3))
        cout<<"Here are the best in order form greatest to least:\n"
            <<met1<<" meters on "<<m1<<"/"<<d1<<"/"<<y1<<",\n"
            <<met2<<" meters on "<<m2<<"/"<<d2<<"/"<<y2<<",\n"
            <<met3<<" meters on "<<m3<<"/"<<d3<<"/"<<y3<<",\n"<<endl;
    
    else if ((met1 > met2) && (met3 > met2) && (met1 > met3))
        cout<<"Here are the best in order form greatest to least:\n"
            <<met1<<" meters on "<<m1<<"/"<<d1<<"/"<<y1<<",\n"
            <<met3<<" meters on "<<m3<<"/"<<d3<<"/"<<y3<<",\n"
            <<met2<<" meters on "<<m2<<"/"<<d2<<"/"<<y2<<",\n"<<endl;
    
    else if ((met2 > met1) && (met1 > met3) && (met2 > met3))
        cout<<"Here are the best in order form greatest to least:\n"
            <<met2<<" meters on "<<m2<<"/"<<d2<<"/"<<y2<<",\n"
            <<met1<<" meters on "<<m1<<"/"<<d1<<"/"<<y1<<",\n"
            <<met3<<" meters on "<<m3<<"/"<<d3<<"/"<<y3<<",\n"<<endl;
    
    else if ((met2 > met1) && (met3 > met1) && (met2 > met3))
        cout<<"Here are the best in order form greatest to least:\n"
            <<met2<<" meters on "<<m2<<"/"<<d2<<"/"<<y2<<",\n"
            <<met3<<" meters on "<<m3<<"/"<<d3<<"/"<<y3<<",\n"
            <<met1<<" meters on "<<m1<<"/"<<d1<<"/"<<y1<<",\n"<<endl;
    
    else if ((met3 > met1) && (met1 > met2) && (met3 > met2))
        cout<<"Here are the best in order form greatest to least:\n"
            <<met3<<" meters on "<<m3<<"/"<<d3<<"/"<<y3<<",\n"
            <<met1<<" meters on "<<m1<<"/"<<d1<<"/"<<y1<<",\n"
            <<met2<<" meters on "<<m2<<"/"<<d2<<"/"<<y2<<",\n"<<endl;
    
    else if ((met3 > met1) && (met2 > met1) && (met3 > met2))
        cout<<"Here are the best in order form greatest to least:\n"
            <<met3<<" meters on "<<m3<<"/"<<d3<<"/"<<y3<<",\n"
            <<met2<<" meters on "<<m2<<"/"<<d2<<"/"<<y2<<",\n"
            <<met1<<" meters on "<<m1<<"/"<<d1<<"/"<<y1<<",\n"<<endl;
      
    //Exit Program
    return 0;
}