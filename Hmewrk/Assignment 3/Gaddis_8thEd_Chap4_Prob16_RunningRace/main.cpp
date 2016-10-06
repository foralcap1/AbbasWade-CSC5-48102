/* 
  File:   main.cpp
  Author: Abbas, Wade
  Created on October 4, 2016, 9;56 PM
  Purpose: Determine which runner had the fastest time and which place they came in
 */

//System Libraries Here
#include <iostream>
#include <string>               //for the names of the runners
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string             r1,r2,r3;      //for the names of the runners 
    unsigned short     t1,t2,t3;      //time the runners each placed in
    
    //Ask for the input of the runners names 
    cout<<"Please enter the first runners name, then press ENTER."<<endl;
    getline(cin, r1);
    cout<<"Please enter the second runners name, then press ENTER."<<endl;
    getline(cin, r2);
    cout<<"Please enter the third runners name, then press ENTER."<<endl;
    getline(cin, r3);
    
    //Ask for the input of the runners times
    cout<<"\nPlease enter "<<r1<<"'s time in -POSITIVE- minutes, then press ENTER."<<endl;
    cin>>t1;
        if (t1 < 0)
          {
		cout << "We told you to enter a positive number!!" << endl;
		return 0;
	}
    cout<<"Please enter "<<r2<<"'s time in -POSITIVE- minutes, then press ENTER."<<endl;
    cin>>t2;
        if (t2 < 0)
          {
		cout << "We told you to enter a positive number!!" << endl;
		return 0;
	}
    
    cout<<"Please enter "<<r3<<"'s time in -POSITIVE- minutes, then press ENTER."<<endl;
    cin>>t3;
        if (t3 < 0)
          {
		cout << "We told you to enter a positive number!!" << endl;
		return 0;
	}
   
    if      ((t1 > t2) && (t2 > t3) && (t1 > t3))
        cout<<"The results for the race are:\n"
            <<"3. "<<r1<<", with "<<t1<<" minutes\n"
            <<"2. "<<r2<<", with "<<t2<<" minutes\n"
            <<"\nAnd first place with the fastest time is:\n"
            <<"1. "<<r3<<", with "<<t3<<" minutes\n"<<endl;
    
    else if ((t1 > t2) && (t3 > t2) && (t1 > t3))
        cout<<"The results for the race are:\n"
            <<"3. "<<r1<<", with "<<t1<<" minutes\n"
            <<"2. "<<r3<<", with "<<t3<<" minutes\n"
            <<"\nAnd first place with the fastest time is:\n"
            <<"1. "<<r2<<", with "<<t2<<" minutes\n"<<endl;
    
    else if ((t2 > t1) && (t1 > t3) && (t2 > t3))
        cout<<"The results for the race are:\n"
            <<"3. "<<r2<<", with "<<t2<<" minutes\n"
            <<"2. "<<r1<<", with "<<t1<<" minutes\n"
            <<"\nAnd first place with the fastest time is:\n"
            <<"1. "<<r3<<", with "<<t3<<" minutes\n"<<endl;
    
    else if ((t2 > t1) && (t3 > t1) && (t2 > t3))
        cout<<"The results for the race are:\n"
            <<"3. "<<r2<<", with "<<t2<<" minutes\n"
            <<"2. "<<r3<<", with "<<t3<<" minutes\n"
            <<"\nAnd first place with the fastest time is:\n"
            <<"1. "<<r1<<", with "<<t1<<" minutes\n"<<endl;
    
    else if ((t3 > t1) && (t1 > t2) && (t3 > t2))
        cout<<"The results for the race are:\n"
            <<"3. "<<r3<<", with "<<t3<<" minutes\n"
            <<"2. "<<r1<<", with "<<t1<<" minutes\n"
            <<"\nAnd first place with the fastest time is:\n"
            <<"1. "<<r2<<", with "<<t2<<" minutes\n"<<endl;
    
    else if ((t3 > t1) && (t2 > t1) && (t3 > t2))
        cout<<"The results for the race are:\n"
            <<"3. "<<r3<<", with "<<t3<<" minutes\n"
            <<"2. "<<r2<<", with "<<t2<<" minutes\n"
            <<"\nAnd first place with the fastest time is:\n"
            <<"1. "<<r1<<", with "<<t1<<" minutes\n"<<endl;
           
    return 0;
}


