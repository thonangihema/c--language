/*Given a string s, find the first non-repeating character in it and return its index. If it does 
not exist, return -1.
Input: s = "algorithmica"
Output: 1
*/
#include<bits/stdc++.h>
using namespace std;
int firstunique(string s)
{
    int count[26]={0};
    for(int i=0;i<s.length();i++)
    {
        count[s[i]-'a']+=1;
    }
    for(int i=0;i<s.length();i++)
    {
        if(count[s[i]-'a']==1)
        {
            return i;
        }
    }
    return -1;

}
int main()
{
    string word;
    cin>>word;
    cout<< firstunique(word);
}