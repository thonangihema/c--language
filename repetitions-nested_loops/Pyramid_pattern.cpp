/*
Given the value of n, write a program that displays the following pattern. For the given 
value of 4 for n, the pattern looks like this:
      *
    * * *
  * * * * *
* * * * * * *
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            cout<<"   ";
        }
        for(int k=0;k<((2*i)+1);k++)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
}