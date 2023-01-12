/*Given two non-negative integers num1 and num2 represented as strings, return the 
product of num1 and num2, also represented as a string. You must not use any built-in 
BigInteger library or convert the inputs to integer directly.
Input: num1 = "123", num2 = "456"
Output: "56088"*/
#include<bits/stdc++.h>
using namespace std;
string bigIntegerMul(string value1,string value2)
{
   int v1len=value1.length();
    int v2len=value2.length();
    vector<int>v(v1len+v2len,0);
       int carry=0;
    for(int i=v2len-1;i>=0;i--)
    {
        for(int j=v1len-1;j>=0;j--)
        {
           int mul=(value1[i]-'0')*(value2[i]-'0');
            int pos=mul+v[i+j+1];
            v[i+j+1]=pos%10;
            v[i+j]+=pos/10;
        }
    }
    string res="";
    for(auto i:v)
    {
        res+= to_string(i);
    }
    return res;
}
int main()
{
    string num1,num2;
    cin>>num1>>num2;
    cout<<bigIntegerMul(num1,num2);
}