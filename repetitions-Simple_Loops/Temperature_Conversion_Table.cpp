/*Write a program that displays a temperature conversion table for degrees Celsius and
degrees Fahrenheit. The table should include rows for all temperatures between 0 and 100 
degrees Celsius that are multiples of 10 degrees Celsius. Include appropriate headings on 
your columns. The formula for converting between degrees Celsius and degrees 
Fahrenheit can be found on the Internet.*/
#include<iostream>
using namespace std;
int main()
{
    long fahrenheit,celsius;
    int start=0,stop=100;
    cout<<"fahrenheit -> celsius"<<"\n";
    fahrenheit=start;
   while(fahrenheit<=stop)
    {
        celsius=(fahrenheit-32)*5/9;
        cout<<fahrenheit<<"            "<<celsius;
        fahrenheit=fahrenheit+10;
        cout<<"\n";
    }
    cout<<"----------------------------\n";
  cout<<"celsius -> fahrenheit "<<"\n";
  celsius=start;
   while(celsius<=stop)
    {
        fahrenheit = (celsius * 9 / 5) + 32;
        cout<<celsius<<"          "<<fahrenheit;
        celsius=celsius+10;
        cout<<"\n";
    }  
    
    
}