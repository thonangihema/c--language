/*
Create a function named tokenize that takes a string representing a mathematical 
expression with integers as its only parameter and breaks it into a list of tokens. Each 
token should be a parenthesis, an operator, or a number. Return the list of tokens as the 
function’s result. You may assume that the string passed to your function always contains 
a valid mathematical expression consisting of parentheses, operators and integers. Include 
a main program to test your function.
Input: 2+12*(123+23-4)/72 
Output: [“2”, “+”, “12”, “(”, “123”, “+”, “23”, “-”, “4”, “)”, “/”, “72”]
*/
#include<bits/stdc++.h>
using namespace std;
vector<string> tokenize(string exp)
{
    vector<string>token;
    string s=" ";
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]<='9' && exp[i]>='0')
        {
            s=s+exp[i];
            if(exp[i+1]<'0'||exp[i+1]>'9')
            {
               token.push_back(s);
                s=""; 
            }
        }
        else
        {
            string m="";
            m=m+exp[i];
            token.push_back(m);
        }
    }
    return token;
}
int main()
{
    string s;
    cin>>s;
    vector<string>res=tokenize(s);
    cout<<"[ ";
    for(auto i:res)
    {
           cout<<"\"" <<i<<"\""<<",";
    }
    cout<<" ]";
}