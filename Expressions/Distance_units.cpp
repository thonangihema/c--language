/*Write a program that begins by reading a measurement in feet from the user. Then your 
program should display the equivalent distance in inches, yards and miles. Use the 
Internet to look up the necessary conversion factors if you don’t have them memorized.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double f,i,y,m;
    cout<<"Enter distance in feets:";
    cin>>f;
    i=f*12;
    y=f/3.0;
    m=f/5280.0;
    cout<<f<<" feet = "<<i<<" inches\n";
     cout<<f<<" feet = "<<y<<" yards\n";
      cout<<f<<" feet = "<<m<<" miles\n";
}