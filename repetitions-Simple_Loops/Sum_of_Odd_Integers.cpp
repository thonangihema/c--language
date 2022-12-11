/*Given the value of n, write a program that displays the sum of first n odd integers. For 
given value of 3, the program should display 1+3+5=9*/
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(2*i-1);
    }
    cout<<sum;
  
}