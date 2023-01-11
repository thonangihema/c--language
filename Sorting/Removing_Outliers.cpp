/*
When analyzing data collected as part of a science experiment it may be desirable to 
remove the most extreme values before performing other calculations. Create a function 
named removeOutliers that takes an array of integers and a non-negative integer, n, as its 
parameters. The function should create a new copy of the list with the n largest elements 
and the n smallest elements removed. Then it should return the new copy of the list as the
function’s only result. The order of the elements in the returned list does not have to
match the order of the elements in the original list. Include a main program to test your 
function*/
#include<bits/stdc++.h>
using namespace std;
vector<int> removeOutliers(vector<int>&exp,int n)
{
    vector<int>res;
    sort(exp.begin(),exp.end());
    for(int i=n;i<=(exp.size()-n-1);i++)
    {
        res.push_back(exp[i]);
    }
    return res;
}
int main()
{
    vector<int>inp;
    int size,n;
    cout<<"enter no of values : ";
    cin>>size;
    cout<<"\n Enter values: ";
    for(int i=0;i<size;i++)
    {
        int value;
        cin>>value;
        inp.push_back(value);
    }
    cout<<"\nEnter n value : ";
    cin>>n;
    if(inp.size()>=(2*n))
    {
         vector<int>result{removeOutliers(inp,n)};
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    }
    else
    {
        cout<<"invalid input\n";
    }
}