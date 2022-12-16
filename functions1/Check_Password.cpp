/*Problem 5: Check Password
Create a function named checkPassword that determines whether or not a password is 
good. We will define a good password to be a one that is at least 8 characters long and 
contains at least one uppercase letter, at least one lowercase letter, and at least one 
number. Your function should return true if the password passed to it as its only 
parameter is good. Otherwise it should return false. Include a main program that reads a 
password from the user and reports whether or not it is good.*/
#include <iostream>
using namespace std;
bool checkPassword(string psw)
{
    int cap=0,small=0,num=0;
    if(psw.length()>=8)
    {
    for(int i=0;i<psw.length();i++)
    {
        if(psw[i]>='A' && psw[i]<='Z')
        {
            cap=cap+1;
        }
        else if(psw[i]>='a' && psw[i]<='z')
        {
            small=small+1;
        }
        else if(psw[i]>='0' && psw[i]<='9')
        {
            num=num+1;
        }
        
    }
    if((cap>=1)&&(num>=1)&&(small>=1))
    {
        return true;
    }
    else
    {
        return false;
    }
    }
    else
    {
        return false;
    }
}
int main()
{
    string password;
    cin>>password;
    if(checkPassword(password))
    {
        cout<<"Good password";
    }
    else
    {
        cout<<"Not a good password";
    }

    return 0;
}