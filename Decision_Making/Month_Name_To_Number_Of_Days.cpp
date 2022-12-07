/*
The length of a month varies from 28 to 31 days. In this exercise you will create a 
program that reads the name of a month from the user as a string. Then your program 
should display the number of days in that month. Display “28 or 29 days” for February so 
that leap years are addressed.
*/
#include<iostream>
using namespace std;
int main()
{
    string month;
    cout<<"Enter month:";
    cin>>month;
    if((month=="january")||(month=="march")||(month=="may")||(month=="july")||(month=="august")||(month=="october")||(month=="december"))
    {
        cout<<31;
    }
    else if(month=="february")
    {
        cout<<"28 or 29";
    }
    else
    {
        cout<<30;
    }
}