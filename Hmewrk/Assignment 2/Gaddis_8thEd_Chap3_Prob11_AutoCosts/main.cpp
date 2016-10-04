/* 
   File:   main
   Author: Abbas, Wade
   Created on September, 27th 2016, 6:56 PM
   Purpose: To Get a Total of Auto Expenses Monthly and Annually
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
    float loan,insure,gas,oil,tires,maint, //Input in dollar amounts.
          tmCost,taCost;                   //Total monthly and 
                                           //total annual spending on car.

    //First expense to input
    cout<<"Please enter the monthly cost of your auto loan expense:"<<endl;
    cin>>loan;
    
    //Second expense to input
    cout<<"Please enter the monthly cost of your auto insurance expense:"<<endl;
    cin>>insure;
    
    //Third expense to input
    cout<<"Please enter the monthly cost of your auto gas expense:"<<endl;
    cin>>gas;
    
    //Fourth expense to input
    cout<<"Please enter the monthly cost of your auto tires expense:"<<endl;
    cin>>tires;
    
    //Fifth expense to input
    cout<<"Please enter the monthly cost of your auto maintenance expense:"<<endl;
    cin>>maint;
    
    //Total monthly and annual spending on all automobile expenses
    tmCost=loan+insure+gas+tires+maint;
    taCost=tmCost*12;
    
    //Output of monthly and annual expenses
    cout<<setprecision(2)<<fixed;
    cout<<"\"Your Monthly Expenses with Your Automobile\"\n"<<endl;
    cout<<"Loan Payment          : $"<<loan<<endl;
    cout<<"Insurance Payment     : $"<<insure<<endl;
    cout<<"Gas Payments          : $"<<gas<<endl;
    cout<<"Tire Payments         : $"<<tires<<endl;
    cout<<"Maintenance Payment   : $"<<maint<<endl;
    cout<<"----------------------------------\n"<<endl;
    cout<<"Total Monthly Expenses: $"<<tmCost<<endl;
    cout<<"         and             "<<endl;
    cout<<"Total Annual Expenses : $"<<taCost<<endl;      
    
    //Exit Program
    return 0;
}