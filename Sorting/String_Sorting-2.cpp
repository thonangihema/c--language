/*Create a function named sortDomains that sorts given array of domain names in order of 
the reversed domain name. For example, the reverse domain of cs.iitg.edu is 
edu.iitg.cs. Include a main program to test your function.
*/
#include <bits/stdc++.h>
using namespace std;
string sortDomains(string s)
{
    reverse(s.begin(),s.end());
    s=s+'.';
    int len=s.length();
    int start=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='.')
        {
            reverse(s.begin()+start,s.begin()+i);
            start=i+1;
        }
    }
    return s;
}
int main()
{
    string words="";
    getline(cin,words,'\n');
    cout<<sortDomains(words);
}