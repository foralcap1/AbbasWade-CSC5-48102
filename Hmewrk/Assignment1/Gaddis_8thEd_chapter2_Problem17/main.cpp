/* 
   File:   main.cpp
   Author: Abbas, Wade 
   Purpose: Calculate cost of Stock Purchases
   Created on September 6, 2016, 11:33 AM
 */

#include <iostream>
  //User libraries
    
    //global constants
    const char PERCENT=100; //Conversion to percentage
    
    //Functional Prototypes
      
    //Program execution begins here! 
using namespace std;

int main(int argc, char** argv) {
    unsigned short nShares=750; //number of shares
    float ppShare=3.5e1f;       //price per share in $'s 
    unsigned char comish=2;     //commission percentage 
    float pricePd, comshPd, totPaid; //Price, Commission, Total Paid 
    
    //calculate the amount paid in $'s
    pricePd=nShares*ppShare;
    comshPd=pricePd*comish/PERCENT;
    totPaid=pricePd+comshPd;
    
    //output the results
    cout<<"Price of Stock Purchase Problem "<<endl;
    cout<<"Number of Shares Purchased = "<<nShares<<endl;
    cout<<"Price Per Share            = "<<ppShare<<endl;
    cout<<"Commission                 = "<<static_cast<int>(comish)<<"%"<<endl;
    cout<<"Price Paid for the shares  = $"<<pricePd<<endl;
    cout<<"Price Paid for Commission  = $"<<comshPd<<endl;
    cout<<"___________________________________"<<endl;
    cout<<"Total Paid                 = $"<<totPaid<<endl;
    
    return 0;
}

