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
    sum=(s[0]-'0')+(s[1]-'0')+(s[2]-'0')+(s[3]-'0');
    cout<<sum;
}