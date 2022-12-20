/*Create a function removeMysteryLength that takes a string of alpha-numeric characters 
with the length appended to the string, removes the length part of it, returns the remaining 
string. For example, if input string is “JamesBond00712” where, 12 is length of string 
JamesBond007 then, return “JamesBond007”*/
#include<bits/stdc++.h>
using namespace std;
string removeMysteryLength(string anc)
{
     int len=0,pos=1,j=1;
    for(int i=anc.length()-1;i>=0;i--)
    {
        len=len+(pos*(anc[i]-'0'));
       if((len)==(anc.length()-j))
       {
      
       return anc.substr(0,len);
       }
       else
       {
        pos=pos*10;
        j++;

       }
    }

}
int main()
{
    string alphanum;
    cin>>alphanum;
    cout<<removeMysteryLength(alphanum);
   
}