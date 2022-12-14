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
    for(int l=1;l<n;l++)
    {
         for(int m=0;m<l;m++)
        {
            cout<<"   ";
        }
        for(int o=0;o<(2*(n-l)-1);o++)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
}