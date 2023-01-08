/*Create a function named sortIntegersDesc that sorts given array of integers in descending 
order. Include a main program to test your function*/
#include<bits/stdc++.h>
using namespace std;
bool cmp(int first,int second)
{
    return second<first;
}
vector<int> sortIntegerDesc(vector<int>arr)
{
    sort(arr.begin(),arr.end(),cmp);
    return arr;
}
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter number of values: ";
    cin>>n;
    cout<<"Enter values: ";
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<int>res{sortIntegerDesc(v)};
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
}