/*
Create a function named sortStrings that sorts given array of strings in descending order 
with case insensitivity. Include a main program to test your function.*/
#include<bits/stdc++.h>
using namespace std;
bool cmp(string first,string second)
{
    return second<first;
}
vector<string> sortIntegerDesc(vector<string>arr)
{
    for(int i=0;i<arr.size();i++)
    {
    transform(arr[i].begin(),arr[i].end(),arr[i].begin(),::tolower);
    }
    sort(arr.begin(),arr.end(),cmp);
    return arr;
}
int main()
{
    vector<string>v;
    int n;
    cout<<"Enter number of words: ";
    cin>>n;
    cout<<"Enter words: ";
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        v.push_back(a);
    }
    vector<string>res{sortIntegerDesc(v)};
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
}