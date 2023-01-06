/*Given two non-negative integers, num1 and num2 represented as string, return the sum of
num1 and num2 as a string. You must not use any built-in BigInteger library or convert 
the inputs to integer directly.
Input: num1 = "456", num2 = "77"
Output: "533”
*/
#include<bits/stdc++.h>
using namespace std;
string bigAddition(string a,string b)
{
    int alen=a.length();
    int blen=b.length();
    //appending 0's to suffix of small numbers
   if(alen>blen)
    {
        for(int i=0;i<(alen-blen);i++)
        {
            b='0'+b;
        }
    }
    else if(alen<blen)
    {
        for(int i=0;i<(blen-alen);i++)
        {
            a='0'+a;
        } 
    }
    string s="";
    int c=0;
    for(int i=a.length()-1;i>=0;i--)
    {
    s=char((((a[i]-'0')+(b[i]-'0')+c)%10)+'0')+s;
    c=((a[i]-'0')+(b[i]-'0')+c)/10;
    }
    if(c>0)
    {
         s=char(c+ '0')+s;
    }
    return s;

}
int main()
{
    string num1,num2;
    cin>>num1>>num2;
    cout<<bigAddition(num1,num2);
}