/*Write a function named isInteger that determines whether or not the characters in a string 
represent a valid integer. When determining if a string represents an integer you should 
ignore any leading or trailing white space. Once this white space is ignored, a string 
represents an integer if its length is at least 1 and it only contains digits, or if its first 
character is either + or - and the first character is followed by one or more characters, all 
of which are digits. Write a main program that reads a string from the user and reports 
whether or not it represents an integer*/
#include<bits/stdc++.h>
using namespace std;
bool isInteger(string val)
{
    int c=0;
    for(int i=0;i<val.length();i++)
    {
        if(isdigit(val[i])==false)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    if(isInteger(s))
    {
        cout<<"valid Integer";
    }
    else
    {
        cout<<"Not a valid Integer";
    }
}