/*Write a program that reads an integer from the user and displays the sum of its digits. For 
example, if the user enters 31415 then your program should display 3+1+4+1+5=14
*/
#include<iostream>
using namespace std;
int main()
{
    int n,rem=0,sum=0;
    cout<<"enter n value : ";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<"sum : "<<sum;
}