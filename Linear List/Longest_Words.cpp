/*Create a function named longestWords that takes an array of words as input and returns a 
list containing all the longest words. The order of the elements in the returned list must 
match the order of the elements in the original list. Include a main program to test your 
function.
Input: [“list”, “vector”, “map”, “set”, “array”, “words”, “string”]
Output: [“vector”, “string”]*/
#include<bits/stdc++.h>
using namespace std;
vector<string> longestWords(vector<string>lst)
{
    vector<string>r;
    int  len=0;
    for(int i=0;i<lst.size();i++)
    {
        if(lst[i].length()>len)
        {
            len=lst[i].length();
            r.clear();
            r.push_back(lst[i]);
        }
        else if(lst[i].length()==len)
        {
         r.push_back(lst[i]);   
        }
    }
    return r;
}
int main()
{
    cout<<"[";
    string w;
    vector<string>words;
    while(cin>>w)
    {
        if(w=="]")
        {
            break;
        }
        words.push_back(w);
    }
    vector<string>res=longestWords(words);
    cout<<"[ ";
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<" ]";

}