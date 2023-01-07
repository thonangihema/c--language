/*One technique that can be used to help break some simple forms of encryption is
frequency analysis. This analysis examines the encrypted text to determine which
characters are most common. Then it tries to map the most common letters in English, 
such as E and T, to the most commonly occurring characters in the encrypted text.
Create a function named letterFrequency that takes filename as input and returns the 
frequencies of all letters in a file. Ignore spaces, punctuation marks, and digits as you 
perform this analysis. Your program should be case insensitive, treating a and A as 
equivalent. 
Write a main program to test your function.*/
#include<bits/stdc++.h>
using namespace std;
map<char,int> letterFrequency(string filename)
{
    map<char,int>key;
    ifstream fin(filename);
    string line;
    while(getline(fin, line))
    {
        for(int i=0;i<line.length();i++)
        {
            if((tolower(line[i])<='z' && tolower(line[i])>='a'))
            {
                key[tolower(char(line[i]))]++;
            }
        }
    }
    return key;
}
int main()
{
    string fname;
    cin>>fname;
    map<char,int>res=letterFrequency(fname);
    for(auto j:res){
        cout<<j.first<<" - "<<j.second<<"\n";
    }
}
