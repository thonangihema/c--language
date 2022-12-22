/*Create a function named reverseWords that takes a string from the user and returns a 
string with words reversed. For example, if input string is “India is Best” then the 
returned string is “Best is India”
*/
#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{
    reverse(s.begin(),s.end());
    s=s+' ';
    int len=s.length();
    int start=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]==' ')
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
   
    cout<<reverseWords(words);
}