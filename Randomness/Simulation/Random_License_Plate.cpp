/*In a particular jurisdiction, older license plates consist of three letters followed by three 
digits. When all of the license plates following that pattern had been used, the format was 
changed to four digits followed by three letters. Create a function named 
randomLicencePlate that generates a random license plate. Your function should have
approximately equal odds of generating a sequence of characters for an old license plate 
or a new license plate. Write a main program that calls your function and displays the 
randomly generated license plate.*/
#include<bits/stdc++.h>
using namespace std;
string randomLicencePlate()
{
    srand(time(0));
    string licanceplate="";
    int len=rand()%2+6;
    if(len>6)
    {
        for(int i=0;i<4;i++)
        {
            char a=rand()%10+48;
            licanceplate+=a;
        }
        for(int i=0;i<3;i++)
        {
            char b=rand()%26+65;
            licanceplate+=b;
        }
    }
    else
    {
         for(int i=0;i<3;i++)
        {
            char b=rand()%26+65;
            licanceplate+=b;
        }
        for(int i=0;i<3;i++)
        {
            char a=rand()%10+48;
            licanceplate+=a;
        }
       
    }
    return licanceplate;
}
int main()
{
    cout<<randomLicencePlate()<<"\n";
}