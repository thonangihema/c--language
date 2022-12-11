/*
Given the value of n, write a program that displays the following pattern. For the given 
value of 4 for n, the pattern looks like this:
* * * *
  * * *
    * * 
      * 
 */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=i)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<"\n";
    }
}