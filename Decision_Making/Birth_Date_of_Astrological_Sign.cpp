/*The horoscopes commonly reported in newspapers use the position of the sun at the time 
of one’s birth to try and predict the future. This system of astrology divides the year into 
twelve zodiac signs, as outline
Write a program that asks the user to enter his or her month and day of birth. Then your 
program should report the user’s zodiac sign as part of an appropriate output message.
*/
#include<iostream>
using namespace std;
int main()
{
    string m;
    int d;
    cout<<"Enter month and day of birth : ";
    cin>>m>>d;
    if((m=="December" && d>=22)||(m=="january" && d<=19))
    {
        cout<<"Capricorn";
    }
    else if((m=="january" && d>=20)||(m=="february" && d<=18))
    {
        cout<<"Aquarius";
    }
    else if((m=="february" && d>=19)||(m=="march" && d<=20))
    {
        cout<<"Pisces";
    }
    else if((m=="march" && d>=21)||(m=="april" && d<=19))
    {
        cout<<"Aries";
    }
    else if((m=="april" && d>=20)||(m=="may" && d<=20))
    {
        cout<<"Taurus";
    }
    else if((m=="may" && d>=21)||(m=="june" && d<=20))
    {
        cout<<"Gemini";
    }
    else if((m=="june" && d>=21)||(m=="july" && d<=22))
    {
        cout<<"Cancer";
    }
    else if((m=="july" && d>=23)||(m=="august" && d<=22))
    {
        cout<<"Leo";
    }
    else if((m=="august" && d>=23)||(m=="september" && d<=22))
    {
        cout<<"Vigro";
    }
    else if((m=="september" && d>=23)||(m=="october" && d<=22))
    {
        cout<<"Libra";
    }
    else if((m=="october" && d>=23)||(m=="november" && d<=21))
    {
        cout<<"Scorpio";
    }
    else if((m=="november" && d>=22)||(m=="december" && d<=21))
    {
        cout<<"Sagittarius";
    }
}