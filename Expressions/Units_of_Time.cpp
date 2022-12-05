/*
Write a program that begins by reading a number of seconds from the user. Then your 
program should display the equivalent amount of time in the form D:HH:MM:SS, where 
D, HH, MM, and SS represent days, hours, minutes and seconds respectively. The hours,
minutes and seconds should all be formatted so that they occupy exactly two digits. Use 
your research skills determine what additional character needs to be included in the 
format specifier so that leading zeros are used instead of leading spaces when a number is 
formatted to a particular width.
*/
#include<iostream>
using namespace std;
int main()
{
    int n,d,mm,ss,hh,sd,sh,sm;
    cout<<"Enter seconds:";
    cin>>n;
    sm=60;
    sh=60*sm;
    sd=24*sh;
    d=n/sd;
    n=n%sd;
    hh=n/sh;
    n=n%sh;
    mm=n/sm;
     n=n%sm;
    ss=n;
    printf("%d:%02d:%02d:%02d",d,hh,mm,ss);
    //cout<<d<<":"<<hh<<":"<<mm<<":"<<ss<<"\n";
}