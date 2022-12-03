/* Sum of the Digits in an Integer
Write a program that reads a four-digit integer from the user and displays the sum of its 
digits. For example, if the user enters 3141 then your program should display
3+1+4+1=9*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int sum=0;
    cout<<"enter 4 digits number:";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        sum=sum+(s[i]-'0');
    }
    cout<<sum;
}