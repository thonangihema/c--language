/*Given a string s which consists of lowercase or uppercase letters, return the length of the 
longest palindrome that can be built with those letters. Assume that letters are case 
sensitive, for example, "Aa" is not considered a palindrome here.
Input: s = "abccccdd"
Output: 7*/
#include<bits/stdc++.h>
using namespace std;
int longPalindrome(string word)
{
    map<char, int> arr ;
        for (char x:word)
         {
            arr[x]++;
        }
int c=0,freq=0,carry=0;
for(int i=0;i<arr.size();i++)
{
    if(arr[i]%2==0)
    {
        c+=arr[i];
    }
    else
    {
        freq=1;
        c+=arr[i]-1;
    }
}

if(freq==1)
{
    c++;
}

return c;
/* int arr[52]={0};
for(auto s:word)
{
    if(s>='a' && s<='z')
    {
        ++arr[s-'a'+6];
    }
    else
    {
        ++arr[s-'A'];
    } 
}
int c=0,freq=0;
for(int i=0;i<52;i++)
{
    if(arr[i]%2==0)
    {
        c+=arr[i];
    }
    else
    {
        freq=max(freq,arr[i]);
        c+=arr[i]-1;
    }
}
if(freq>=1)
{
    c++;
}
return c; */

}
int main()
{
    string s;
         cin>>s;
        cout<<longPalindrome(s);
        cout<<"\n";
}