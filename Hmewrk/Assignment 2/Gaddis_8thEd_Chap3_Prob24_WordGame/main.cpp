/* 
   File:   main
   Author: Abbas, Wade
   Created on September, 27th 2016, 8:34 PM
   Purpose: Create a Word Game!
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>    //For input words

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string         name,city,college,job,
                   animal,pet;             //User string inputs
    unsigned short age;                     //Age of User
    
    //Ask User to Input their answers
    cout<<"What is your name? Then press ENTER."<<endl;
    getline(cin, name);
    cout<<name<<endl;
    
    cout<<"Name one city in the World. Then press ENTER."<<endl;
    getline(cin, city);
    cout<<city<<endl;
    cin.clear();
    
    cout<<"Name one College or University. Then press ENTER."<<endl;
    getline(cin, college);
    cout<<college<<endl;
    
    cout<<"How old are you? Then press ENTER."<<endl;
    cin>>age;
    cout<<age<<endl;
    cin.ignore();
//    cin.clear();
            
    cout<<"Name a profession you would love to enter. Then press ENTER."<<endl;
    getline(cin, job);
    cout<<job<<endl;
//    cin.ignore();
//    cin.clear();
//            
    cout<<"Name a type of animal. Then press ENTER."<<endl;
    getline(cin, animal);
    cout<<animal<<endl;
//    cin.ignore();
            
    cout<<"What's a great pet's name? Then press ENTER."<<endl;
    getline(cin, pet);
    cout<<pet<<endl;
//    cin.ignore();
            
    //Then organize their input's to fit in the pre-written game story
    cout<<"There once was a person named "<<name<<" who lived in "<<city
        <<"."<<" At the age of "<<age<<", "<<name<<" went to college\nat "
        <<college<<". "<<name<<" graduated and went to work as a "
        <<job<<"."<<" Then, "<<name<<" adopted a(n) "<<animal<<" named "<<pet
        <<"."<<" They both lived happily ever after!"<<endl;
    
    
    
    return 0;
}

