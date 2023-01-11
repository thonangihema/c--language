/*You are given a string num consisting of digits only. Return the largest palindromic 
integer (in the form of a string) that can be formed using digits taken from num. It should 
not contain leading zeroes.
Input: num = "444947137"
Output: "7449447"
*/
 #include<bits/stdc++.h>
using namespace std;
string largestPalindromic(string inp)
{
    char last;
    string first="";
    string second="";
    string mid1="";
    vector<int>v(10,0);
    int c=0,max=0;
    for(auto i:inp)
    {
        v[i-'0']++;
        if(max<v[i-'0'])
        {
            max=v[i-'0'];
        }
    }
    for(auto i:inp)
    {
        if(v[i-'0']>1)
        {
            if(v[i-'0']==max)
            {
                first=first+i;
            second=second+i;
            v[i-'0']=v[i-'0']-2;
            max=max-2;
            }
            else
            {
                first=i+first;
            second=i+second;
            v[i-'0']=v[i-'0']-2;
            }

        }
        else if(v[i-'0']==1 && c==0)
            {
                mid1=mid1+i;
                c=1;
            }
            
        }
        reverse(second.begin(),second.end());
        
    return first+mid1+second;
}
int main()
{
    string s;
    cin>>s;
    cout<<largestPalindromic(s);
}
