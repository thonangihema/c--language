/*
Given a roman numeral, convert it to an integer. For more details on the conversion 
process, you can refer the link given below.
Input: "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
*/
#include<bits/stdc++.h>
using namespace std;
int romanToInt(string val)
{
    int total=0;
    map<char,int>mp{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    for(int i=0;i<val.size();i++)
    {
        if(mp[val[i]]<mp[val[i+1]])
        {
            total+=mp[val[i+1]]-mp[val[i]];
            i=i+1;
            
        }
        else
        {
            total+=mp[val[i]];
        }
    }
    return total;
}
int main()
{
string rom;
cin>>rom;
cout<<romanToInt(rom);
}
