/*The year is divided into four seasons: spring, summer, fall (or autumn) and winter. While 
the exact dates that the seasons change vary a little bit from year to year because of the 
way that the calendar is constructed, we will use the following dates for this exercise:
 season      first_day
 spring      march 20
 summer      june 21
 fall        september 22
 winter      december 21
Create a program that reads a month and day from the user. The user will enter the name 
of the month as a string, followed by the day within the month as an integer. Then your 
program should display the season associated with the date that was entered*/
#include<iostream>
using namespace std;
int main()
{
    int d;
    string s;
    cout<<"Enter the month and day: ";
    cin>>s>>d;
    if(s=="january"||s=="february"||(s=="march" && d<20)||(s=="december" && d>20))
    {
        cout<<"Winter";
    }
    else if((s=="march" && d>=20)||(s=="april")||(s=="may")||(s=="june" && d<21))
    {
        cout<<"Spring";
    }
    else if((s=="june" && d>=21)||(s=="july")||(s=="august")||(s=="september" && d<22))
    {
        cout<<"Summer";
    }
    else if((s=="september" && d>=22)||(s=="october")||(s=="november")||(s=="december" && d<21))
    {
        cout<<"Fall";
    }
    else 
    {
        cout<<"Winter";
    }
}