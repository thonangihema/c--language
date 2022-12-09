/*Given the value of n, write a program that displays the sum of first n integers*/
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter n value : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum : "<<sum;
} 