/*
Write a program to count the number of days between two dates. The two dates are given 
as strings, their format is YYYY-MM-DD as shown in the examples.
Input: date1 = "2020-01-15", date2 = "2019-12-31"
Output: 15*/
#include<bits/stdc++.h>
using namespace std;
int days(int month,int year)
{
    if(month==2)
    {
        if((year%4==0 && year%100!=0)||year%400==0)
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else if(month==4||month==6||month==9||month==11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}
   int differentYear(int yr,int mt,int dt)
    {
         int d=0;
        for(int y=1900;y<yr;y++)
        {
             if((y%4==0 && y%100!=0)||y%400==0)
            {
                d+=366;
            }
            else
            {
                d+=365;
            }
        }
        for(int m=1;m<mt;m++)
        {
            d+=days(m,yr);
        }
        return d+dt;

    }
int daysBetweenDates(string date1,string date2)
{
    int year1=stoi(date1.substr(0,4));
    int month1=stoi(date1.substr(5,2));
    int day1=stoi(date1.substr(8,2));
     int year2=stoi(date2.substr(0,4));
    int month2=stoi(date2.substr(5,2));
    int day2=stoi(date2.substr(8,2));
    if(year1==year2 && month1==month2)
    {
        return abs(day2-day1);
    }
    else if(year1==year2)
    {
        if(month1<month2)
        {
        return abs(days(month1,year1)-day1)+day2;
        }
        else
        {
          return abs(days(month2,year2)-day2)+day1;  
        }
        
    }
    else
    {
        int one=differentYear(year1,month1,day1);
        int two=differentYear(year2,month2,day2);
        return abs(two-one);

        
    }
}
int main()
{
 string d1,d2;
    cin>>d1>>d2;
    cout<<"Days betweeen Dates : "<<daysBetweenDates(d1,d2);
}
