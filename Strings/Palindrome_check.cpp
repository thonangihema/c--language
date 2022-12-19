#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string pal)
{
   string rev=pal;
   reverse(pal.begin(),pal.end());
    if(pal==rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string value;
    cin>>value;
    if(isPalindrome(value))
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"Not a Palindrome";
    }
}